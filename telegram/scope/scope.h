#pragma once

#include <unity/scopes/QueryBase.h>
#include <unity/scopes/PreviewQueryBase.h>
#include <unity/scopes/QueryBase.h>
#include <unity/scopes/ReplyProxyFwd.h>
#include <unity/scopes/ScopeBase.h>

using namespace unity::scopes;

class TelegramScope : public ScopeBase
{
public:
    virtual void start(std::string const&) override;
    virtual void stop() override;

    PreviewQueryBase::UPtr preview(const Result &result, ActionMetadata const &metadata) override;
    virtual SearchQueryBase::UPtr search(CannedQuery const &q, SearchMetadata const &metadata) override;
};
