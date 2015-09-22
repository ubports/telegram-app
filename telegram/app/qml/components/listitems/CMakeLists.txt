file(GLOB LISTITEMS_QML_JS_FILES *.qml *.js)

# make the files visible in the qtcreator tree
add_custom_target(telegram_listitems_QMlFiles ALL SOURCES ${LISTITEMS_QML_JS_FILES})

install(FILES ${LISTITEMS_QML_JS_FILES} DESTINATION ${TELEGRAM_DIR}/components/listitems)
install(DIRECTORY "artwork" DESTINATION ${TELEGRAM_DIR}/components/listitems)
