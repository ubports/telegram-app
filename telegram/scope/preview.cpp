#include <unity/scopes/ColumnLayout.h>
#include <unity/scopes/PreviewReply.h>
#include <unity/scopes/PreviewWidget.h>
#include <unity/scopes/VariantBuilder.h>

#include <QString>
#include <QDebug>

#include "i18n.h"
#include "preview.h"

using unity::scopes::ColumnLayout;
using unity::scopes::PreviewWidget;
using unity::scopes::VariantBuilder;
using unity::scopes::Variant;
using std::string;

TelegramPreview::TelegramPreview(Result const &result, ActionMetadata const &metadata)
        : PreviewQueryBase(result, metadata) {
    setlocale(LC_ALL, "");
    textdomain(GETTEXT_DOMAIN.toStdString().c_str());
}

TelegramPreview::~TelegramPreview() {
}

void TelegramPreview::cancelled() {
}

void TelegramPreview::run(unity::scopes::PreviewReplyProxy const &reply) {
    static const QString launchUri = "telegram://launch"; // no-i18n

    ColumnLayout layout1col(1);
    layout1col.add_column({"header", "art", "description", "actions"});

    ColumnLayout layout2col(2);
    layout2col.add_column({"header","art"});
    layout2col.add_column({"description", "actions"});

    ColumnLayout layout3col(3);
    layout3col.add_column({"header"});
    layout3col.add_column({"description", "actions"});
    layout3col.add_column({"art"});
    reply->register_layout({layout1col, layout2col, layout3col});

    auto r = result();
    const string type = r["type"].get_string(); // no-i18n

    PreviewWidget header("header", "header");


    if (type == "error") {
        header.add_attribute_mapping("title", "title");
        header.add_attribute_mapping("subtitle", "subtitle");
        reply->push({header});

        PreviewWidget actions("actions", "actions");
        VariantBuilder builder;
        builder.add_tuple({
                {"id", Variant("open-app")}, // no-i18n
                // TRANSLATORS: call to action: open this application
                {"label", Variant(N_("Open app"))},
                {"uri", Variant(launchUri.toStdString())} // no-i18n
        });
        actions.add_attribute_value("actions", builder.end());
        reply->push({actions});

        return;
    }

    if (type == "user" || type == "chat") {
        header.add_attribute_mapping("title", "title");
        if (type == "user") {
            header.add_attribute_mapping("subtitle", "phone");
        }
        header.add_attribute_mapping("mascot", "avatar");
        reply->push({header});

        string chatUri = r.uri();

        PreviewWidget actions("actions", "actions");
        VariantBuilder builder;
        builder.add_tuple({
                {"id", Variant("open-chat")}, // no-i18n
                // TRANSLATORS: call to action: open this chat
                {"label", Variant(N_("Open chat"))},
                {"uri", Variant(chatUri)} // no-i18n
        });
        if (type == "user" && !r["phone"].get_string().empty()) {
            string callUri = "tel:///" + r["phone"].get_string(); // no-i18n
            builder.add_tuple({
                    {"id", Variant("call")}, // no-i18n
                    // TRANSLATORs: call to action: call this user's phone number
                    {"label", Variant(N_("Call"))},
                    {"uri", Variant(callUri)} // no-i18n
            });
        }
        actions.add_attribute_value("actions", builder.end());
        reply->push({actions});

        return;
    }

    if (type == "text" || type == "document" || type == "contact") {
        header.add_attribute_mapping("title", "from");
        header.add_attribute_mapping("subtitle", "date");
        header.add_attribute_mapping("mascot", "avatar");

        PreviewWidget description("description", "text");
        description.add_attribute_mapping("text", "title");
        reply->push({header, description});

        string chatUri = r.uri();

        PreviewWidget actions("actions", "actions");
        VariantBuilder builder;
        builder.add_tuple({
                {"id", Variant("Open")}, // no-i18n
                // TRANSLATORS: call to action: open this chat
                {"label", Variant(N_("Open chat"))},
                {"uri", Variant(chatUri)} // no-i18n
        });
        actions.add_attribute_value("actions", builder.end());
        reply->push({actions});

        return;
    }

    if (type == "photo") {
        header.add_attribute_mapping("title", "from");
        header.add_attribute_mapping("subtitle", "date");
        header.add_attribute_mapping("mascot", "avatar");

        // PreviewWidget description("description", "text");
        // description.add_attribute_mapping("text", "text");
        reply->push({header});

        PreviewWidget art("art","image");
        art.add_attribute_mapping("source", "mediaUrl");
        reply->push({art});

        string chatUri = r.uri();

        PreviewWidget actions("actions", "actions");
        VariantBuilder builder;
        builder.add_tuple({
                {"id", Variant("Open")}, // no-i18n
                // TRANSLATORS: call to action: open this chat
                {"label", Variant(N_("Open chat"))},
                {"uri", Variant(chatUri)} // no-i18n
        });
        actions.add_attribute_value("actions", builder.end());
        reply->push({actions});

        return;
    }

    // TODO type == "video"
}
