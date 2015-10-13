#pragma once

#include <unity/scopes/CategorisedResult.h>
#include <unity/scopes/ReplyProxyFwd.h>
#include <unity/scopes/SearchMetadata.h>
#include <unity/scopes/SearchQueryBase.h>

#include <QSqlDatabase>
#include <QString>

#include <set>
#include <map>
#include <vector>

#include "config.h"

using unity::scopes::CategorisedResult;
using unity::scopes::Category;
using unity::scopes::CategoryRenderer;
using unity::scopes::CannedQuery;
using unity::scopes::SearchReplyProxy;
using unity::scopes::SearchMetadata;
using unity::scopes::SearchQueryBase;

struct User {
    qint64 id;
    QString phone;
    QString firstName;
    QString lastName;
    QString avatar;
};

struct Chat {
    qint64 id;
    QString title;
    QString avatar;
};

struct Message {
    qint64 id;
    bool isChat;
    Chat chat;
    User user;

    qint64 date;
    bool isOut;
    bool isUnread;

    MessageMedia mediaType;
    QString mediaUrl;
    QString mediaThumb;
    QString text;
};

typedef std::map<qint64, User> UserMap;
typedef std::map<qint64, Chat> ChatMap;
typedef std::vector<Message> MessageList;
typedef std::vector<CategorisedResult> ResultList;

#define KEYWORD_RECENT "recent"
#define KEYWORD_PHOTOS "photos"

class TelegramQuery : public SearchQueryBase
{
public:
    TelegramQuery(CannedQuery const& query, SearchMetadata const& metadata, QString const& scopeDir);
    ~TelegramQuery();

    virtual void cancelled() override;
    virtual void run(SearchReplyProxy const& reply) override;
    bool aggregates(std::string keyword);

private:
    SearchMetadata mMetadata;
    QString mScopeDir;
    bool mIsAggregated = false;
    bool mInRecent = false;
    bool mInPhotos = false;

    QSqlDatabase mDatabase;
    QString mOwnNumber;
    qint64 mOwnId = 0;

    bool openDatabase(QString const &number);
    QString getDate(qint64 time);
    QString getAvatar(QString scopePath, qint64 userId);
    QString getPrimaryPhoneNumber();
    qint64 getPrimaryUserId();

    void processDialogs(SearchReplyProxy const &reply, const QString &query, int limit);
    void getUsers(const QString &ids, UserMap &users);
    void getChats(const QString &ids, ChatMap &chats);
    void getMessages(const UserMap &users, const ChatMap &chats, const QString mids, MessageList &messages, bool hasMedia = false);

    void processSearch(SearchReplyProxy const &reply, const QString &searchQuery, int limit);
    void searchUsers(const QString &searchQuery, UserMap &users);
    void searchChats(const QString &searchQuery, ChatMap &chats);
    void searchMessages(const QString searchQuery, int limit, MessageList &messages, QString &relatedUids, QString &relatedCids);

    void queryUsers(const QString &sql, UserMap &users);
    void queryChats(const QString &sql, ChatMap &chats);

    CategorisedResult messageToResult(Category::SCPtr category, const Message &message);
    CategorisedResult userToResult(Category::SCPtr category, const User &user);
    CategorisedResult chatToResult(Category::SCPtr category, const Chat &chat);

    void pushError(SearchReplyProxy const &reply, QString const &title, QString const &subtitle);
    void pushLogin(SearchReplyProxy const &reply);
    void pushAggregatedResult(SearchReplyProxy const &reply, CategorisedResult const &result);
    void pushNoMessagesToday(SearchReplyProxy const &reply);
    void push(SearchReplyProxy const &reply, std::vector<CategorisedResult> &results);
};
