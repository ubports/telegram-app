TEMPLATE = subdirs

CONFIG += c++11

# value matching manifest name field
UBUNTU_TRANSLATION_DOMAIN="com.ubuntu.telegram"

export(UBUNTU_TRANSLATION_DOMAIN)

UBUNTU_MANIFEST_FILE=manifest.json.in

SUBDIRS += app push
# can not add scope above - scopes dependencies conflict with libqtelegram-ae Connection class

# specify the source files that should be included into
# the translation file, from those files a translation
# template is created in po/template.pot, to create a
# translation copy the template to e.g. de.po and edit the sources
UBUNTU_TRANSLATION_SOURCES+= \
    $$files(app/*.qml,true) \
    $$files(app/*.js,true) \
    $$files(app/*.h,true) \
    $$files(app/*.cpp,true) \
    $$files(push/*.h,true) \
    $$files(push/*.cpp,true) \
    $$files(scope/*.h,true) \
    $$files(scope/*.cpp,true) \
    $$files(app/*.desktop, true) \
    $$files(scope/*sctelegram.ini, true)

# specifies all translations files and makes sure they are
# compiled and installed into the right place in the click package
#UBUNTU_PO_FILES+=$$files(po/*.po)



UBUNTU_CLICK_ARCH=$$system(dpkg-architecture -qDEB_HOST_ARCH)
qt_install_libs = $$[QT_INSTALL_LIBS]
UBUNTU_CLICK_PLUGIN_PATH=/lib/$$basename(qt_install_libs)
UBUNTU_CLICK_BINARY_PATH=/lib/$$basename(qt_install_libs)/bin

##!contains(CONFIG,ubuntu-click-tools):CONFIG+=ubuntu-click-tools


defineTest(ubuntuAddPreTargetDep) {
    equals(TEMPLATE,subdirs) {
        #this hack adds a extra "first" target dependency
        #because subdirs can not handle build dependencies
        isEmpty(target_first.target){
            target_first.target = first
            QMAKE_EXTRA_TARGETS += target_first
            export(QMAKE_EXTRA_TARGETS)
        }
        target_first.depends += $$1

        export(target_first)
        export(target_first.target)
        export(target_first.depends)
    } else {
        PRE_TARGETDEPS+=$$1
        export(PRE_TARGETDEPS)
    }
}

!isEmpty(UBUNTU_MANIFEST_FILE){
    OTHER_FILES+=$$UBUNTU_MANIFEST_FILE
    manifest_file.target   = $$shadowed($$_PRO_FILE_PWD_)/manifest.json
    manifest_file.commands = sed s/@CLICK_ARCH@/$$UBUNTU_CLICK_ARCH/g $$absolute_path($${UBUNTU_MANIFEST_FILE},$$_PRO_FILE_PWD_) > $${manifest_file.target}
    manifest_file.depends  = $$absolute_path($${UBUNTU_MANIFEST_FILE},$$_PRO_FILE_PWD_)

    QMAKE_EXTRA_TARGETS+=manifest_file
    QMAKE_CLEAN += $${manifest_file.target}
    ubuntuAddPreTargetDep($${manifest_file.target})

    manifest_file_install.path  = /
    manifest_file_install.files = $$manifest_file.target
    manifest_file_install.CONFIG +=no_check_exist
    INSTALLS+=manifest_file_install
}

!isEmpty(UBUNTU_TRANSLATION_SOURCES){
    isEmpty(UBUNTU_TRANSLATION_DOMAIN):error("UBUNTU_TRANSLATION_DOMAIN not defined")

    # iterate over all QML/JS files and create a basic translation template
    template_pot.target=$$_PRO_FILE_PWD_/po/$${UBUNTU_TRANSLATION_DOMAIN}.pot
    for(filelist, UBUNTU_TRANSLATION_SOURCES) {
        resolved_filelist = $$absolute_path($$filelist,$$_PRO_FILE_PWD_)
        resolved_filelist = $$files($$resolved_filelist)

        for(file,resolved_filelist) {
            RESULT = $$find(file, "\\.desktop(\\.in)?$")
            count(RESULT, 1) {
                # extract the strings from the desktop file, and feed them to xgettext
                target_file = "$$shadowed($$_PRO_FILE_PWD_)/$$relative_path($$file,$$_PRO_FILE_PWD_).h"
                target_dir  = $$dirname(target_file)
                target_name = $$replace(target_file,"[/.-]","_")

                $${target_name}.target=$$target_file
                $${target_name}.commands=mkdir -p $$target_dir && cd $$target_dir && intltool-extract --type="gettext/ini" --update --srcdir=$$dirname(file) $$basename(file)
                $${target_name}.depends+=$$file
                QMAKE_EXTRA_TARGETS+=$$target_name

                template_pot.depends+=$$target_file
                QMAKE_CLEAN += $$target_file

                translated_desktop_files+=$$file
            } else {
                SCOPEINI = $$find(file, "sctelegram\\.ini$")
                count(SCOPEINI, 1) {
                    # extract the strings from the ini file, and feed them to xgettext
                    target_file = "$$shadowed($$_PRO_FILE_PWD_)/$$relative_path($$file,$$_PRO_FILE_PWD_).h"
                    target_dir  = $$dirname(target_file)
                    target_name = $$replace(target_file,"[/.-]","_")

                    $${target_name}.target=$$target_file
                    $${target_name}.commands=mkdir -p $$target_dir && cd $$target_dir && intltool-extract --type="gettext/ini" --update --srcdir=$$dirname(file) $$basename(file)
                    $${target_name}.depends+=$$file
                    QMAKE_EXTRA_TARGETS+=$$target_name

                    template_pot.depends+=$$target_file
                    QMAKE_CLEAN += $$target_file

                    translated_scope_files+=$$file
                } else {
                    template_pot.depends+=$$file
                }
            }
        }
    }

    !isEmpty(template_pot.depends) {
        template_pot.commands=mkdir -p $$_PRO_FILE_PWD_/po && xgettext -o $$template_pot.target --qt --c++ --from-code=UTF-8 --add-comments=TRANSLATORS --keyword=tr --keyword=tr:1,2 --keyword=N_ $$template_pot.depends

        QMAKE_EXTRA_TARGETS+=template_pot
        ubuntuAddPreTargetDep($${template_pot.target})
    }

    !isEmpty(UBUNTU_PO_FILES){
        # compile the mo files into po files
        for(filelist, UBUNTU_PO_FILES) {
            resolved_filelist = $$absolute_path($$filelist,$$_PRO_FILE_PWD_)
            resolved_filelist = $$files($$resolved_filelist)
            for(file,resolved_filelist) {
                lang=$$basename(file)
                lang=$$split(lang, .)
                lang=$$first(lang)

                # add a target that automatically updates the po files from the template
                update_target_file = $$shadowed($$_PRO_FILE_PWD_)/po/$$basename(file).updated

                target_name=update_po_target_$$lang
                $${target_name}.target = $${update_target_file}
                $${target_name}.commands =cd $$_PRO_FILE_PWD_/po && LC_ALL=C intltool-update -d $$lang -g $${UBUNTU_TRANSLATION_DOMAIN} -x && touch $${update_target_file}
                $${target_name}.depends+=$${template_pot.target}

                QMAKE_EXTRA_TARGETS+=$$target_name
                QMAKE_CLEAN += $$update_target_file
                ubuntuAddPreTargetDep($${update_target_file})

                # build the .mo files
                target_name=mo_target_$$lang
                target_file=$$shadowed($$_PRO_FILE_PWD_)/po/$${lang}/$${UBUNTU_TRANSLATION_DOMAIN}.mo

                $${target_name}.target=$$target_file
                $${target_name}.commands=mkdir -p po/$${lang} && LC_ALL=C msgfmt -o $${target_file} $$absolute_path($$file,$$_PRO_FILE_PWD_)
                $${target_name}.depends+=$$absolute_path($$file,$$_PRO_FILE_PWD_) $${update_target_file}

                $${target_name}_inst.path =/share/locale/$${lang}/LC_MESSAGES
                $${target_name}_inst.CONFIG +=no_check_exist
                $${target_name}_inst.files=$$target_file

                registered_po_files+=$$absolute_path($$file,$$_PRO_FILE_PWD_)
                QMAKE_EXTRA_TARGETS+=$$target_name
                QMAKE_CLEAN += $$target_file
                ubuntuAddPreTargetDep($${target_file})

                INSTALLS += $${target_name}_inst
            }
        }
    }

    !isEmpty(translated_desktop_files) {
        #merge the translations into the desktop files
        for(file, translated_desktop_files) {
            target_file = $$shadowed($$_PRO_FILE_PWD_)/$$relative_path($$file,$$_PRO_FILE_PWD_)
            target_file = $$replace(target_file,"\\.in$","")

            target_name = $$replace(target_file,"[/.-]","_")
            $${target_name}.target=$$target_file
            $${target_name}.commands=LC_ALL=C intltool-merge -d -u $$_PRO_FILE_PWD_/po $$file $$target_file > /dev/null
            $${target_name}.depends+=$$registered_po_files \
                                     $$file

            $${target_name}_inst.path = /
            $${target_name}_inst.files = $$target_file
            $${target_name}_inst.CONFIG += no_check_exist

            QMAKE_EXTRA_TARGETS+=$$target_name
            QMAKE_CLEAN += $$target_file
            ubuntuAddPreTargetDep($${target_file})

            INSTALLS += $${target_name}_inst
        }
    }

    !isEmpty(translated_scope_files) {
        #merge the translations into the scope files
        for(file, translated_scope_files) {
            target_file = $$shadowed($$_PRO_FILE_PWD_)/$$relative_path($$file,$$_PRO_FILE_PWD_)
            target_file = $$replace(target_file,"\\.in$","")

            target_name = $$replace(target_file,"[/.-]","_")
            $${target_name}.target=$$target_file
            $${target_name}.commands=LC_ALL=C intltool-merge -d -u $$_PRO_FILE_PWD_/po $$file $$target_file > /dev/null
            $${target_name}.depends+=$$registered_po_files \
                                     $$file

            $${target_name}_inst.path = /scope/
            $${target_name}_inst.files = $$target_file
            $${target_name}_inst.CONFIG += no_check_exist

            QMAKE_EXTRA_TARGETS+=$$target_name
            QMAKE_CLEAN += $$target_file
            ubuntuAddPreTargetDep($${target_file})

            INSTALLS += $${target_name}_inst
        }
    }
}
