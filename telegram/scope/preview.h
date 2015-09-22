#pragma once

#include <unity/scopes/ActionMetadata.h>
#include <unity/scopes/PreviewQueryBase.h>
#include <unity/scopes/Result.h>

#include "i18n.h"

using unity::scopes::ActionMetadata;
using unity::scopes::PreviewQueryBase;
using unity::scopes::PreviewReplyProxy;
using unity::scopes::Result;

class TelegramPreview : public PreviewQueryBase
{
public:
    TelegramPreview(Result const& result, ActionMetadata const& metadata);
    ~TelegramPreview();

    virtual void cancelled() override;
    virtual void run(PreviewReplyProxy const &reply) override;
};
