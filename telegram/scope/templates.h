#pragma once

// TODO Add Telegram mascot / icon
const static std::string ERROR_TEMPLATE = R"({
    "schema-version": 1,
    "template": {
        "category-layout": "grid",
        "card-layout": "horizontal",
        "card-size": "small"
    },
    "components": {
        "title": "title",
        "subtitle": "subtitle"
    }
})";

const static std::string LOGIN_TEMPLATE = R"({
    "schema-version": 1,
    "template": {
        "category-layout": "vertical-journal",
        "card-layout": "horizontal",
        "card-size": "large"
    },
    "components": {
        "title": "title",
        "mascot": "avatar"
    }
})";

const static std::string UNREAD_MESSAGES_TEMPLATE = R"({
    "schema-version": 1,
    "template": {
        "category-layout": "grid",
        "card-layout": "horizontal",
        "card-size": "small",
        "collapsed-rows": 1
    },
    "components": {
        "title": "title",
        "mascot" : "avatar",
        "subtitle": "subtitle"
    }
})";

static const std::string RECENT_MESSAGES_TEMPLATE = R"({
    "schema-version": 1,
    "template": {
        "category-layout": "grid",
        "card-layout": "horizontal",
        "card-size": "small",
        "collapsed-rows": 2
    },
    "components": {
        "mascot" : "avatar",
        "title": "title",
        "subtitle": "subtitle"
    }
})";

const static std::string MESSAGES_SEARCH_TEMPLATE = R"({
    "schema-version": 1,
    "template": {
        "category-layout": "grid",
        "card-layout": "horizontal",
        "card-size": "small",
        "collapsed-rows": 5
    },
    "components": {
        "title": "title",
        "mascot" : "avatar",
        "subtitle": "subtitle"
    }
})";

const static std::string CONTACTS_SEARCH_TEMPLATE = R"({
    "schema-version": 1,
    "template": {
        "category-layout": "grid",
        "card-layout": "horizontal",
        "card-size": "small",
        "collapsed-rows": 5
    },
    "components": {
        "title": "title",
        "art" : "avatar"
    }
})";

const static std::string CONTATS_TEMPLATE = R"({
    "schema-version": 1,
    "template": {
        "category-layout": "carousel",
        "card-size": "small",
        "overlay": true
    },
    "components": {
        "title": "title",
        "art" : "avatar"
    }
})";

const static std::string PHOTO_MESSAGES_TEMPLATE = R"({
    "schema-version": 1,
    "template": {
        "category-layout": "grid",
        "card-size": "small",
        "collapsed-rows": 0
    },
    "components": {
        "art" : "mediaThumb"
    }
})";
