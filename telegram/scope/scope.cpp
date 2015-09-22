#include <unity-scopes.h>

#include "scope.h"
#include "query.h"
#include "preview.h"

void TelegramScope::start(std::string const&) {
}

void TelegramScope::stop() {
}

SearchQueryBase::UPtr TelegramScope::search(CannedQuery const &q, SearchMetadata const &metadata) {
    const QString scopePath = QString::fromStdString(scope_directory());
    SearchQueryBase::UPtr query(new TelegramQuery(q, metadata, scopePath));
    return query;
}


PreviewQueryBase::UPtr TelegramScope::preview(Result const &result, ActionMetadata const &metadata) {
    PreviewQueryBase::UPtr preview(new TelegramPreview(result, metadata));
    return preview;
}

#define EXPORT __attribute__ ((visibility ("default")))

extern "C"
{

    EXPORT
    ScopeBase*
    // cppcheck-suppress unusedFunction
    UNITY_SCOPE_CREATE_FUNCTION() {
        return new TelegramScope();
    }

    EXPORT
    void
    // cppcheck-suppress unusedFunction
    UNITY_SCOPE_DESTROY_FUNCTION(ScopeBase* scope_base) {
        delete scope_base;
    }

}
