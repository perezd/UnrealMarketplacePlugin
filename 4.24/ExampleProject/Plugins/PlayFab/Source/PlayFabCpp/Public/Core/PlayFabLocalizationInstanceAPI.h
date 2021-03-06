//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once

#include "CoreMinimal.h"
#include "Core/PlayFabError.h"
#include "Core/PlayFabLocalizationDataModels.h"
#include "Core/PlayFabSettings.h"
#include "PlayFabAPISettings.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

namespace PlayFab
{
    /**
     * Main interface for PlayFab Sdk, specifically all Localization APIs
     */
    class PLAYFABCPP_API UPlayFabLocalizationInstanceAPI
    {
    public:
        DECLARE_DELEGATE_OneParam(FGetLanguageListDelegate, const LocalizationModels::FGetLanguageListResponse&);


    private:
        TSharedPtr<UPlayFabAPISettings> settings;
        TSharedPtr<UPlayFabAuthenticationContext> authContext;
    
    public:
        UPlayFabLocalizationInstanceAPI();
        explicit UPlayFabLocalizationInstanceAPI(TSharedPtr<UPlayFabAPISettings> apiSettings);
        explicit UPlayFabLocalizationInstanceAPI(TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        UPlayFabLocalizationInstanceAPI(TSharedPtr<UPlayFabAPISettings> apiSettings, TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        ~UPlayFabLocalizationInstanceAPI();
        UPlayFabLocalizationInstanceAPI(const UPlayFabLocalizationInstanceAPI& source) = delete; // disable copy
        UPlayFabLocalizationInstanceAPI(UPlayFabLocalizationInstanceAPI&&) = delete; // disable move
        UPlayFabLocalizationInstanceAPI& operator=(const UPlayFabLocalizationInstanceAPI& source) = delete; // disable assignment
        UPlayFabLocalizationInstanceAPI& operator=(UPlayFabLocalizationInstanceAPI&& other) = delete; // disable move assignment

        int GetPendingCalls() const;
        TSharedPtr<UPlayFabAPISettings> GetSettings() const;
        void SetSettings(TSharedPtr<UPlayFabAPISettings> apiSettings);
        TSharedPtr<UPlayFabAuthenticationContext> GetAuthenticationContext() const;
        void SetAuthenticationContext(TSharedPtr<UPlayFabAuthenticationContext> authenticationContext);
        void ForgetAllCredentials();

    private:
        TSharedPtr<UPlayFabAuthenticationContext> GetOrCreateAuthenticationContext();
    
    public:


        // ------------ Generated API calls
        // Retrieves the list of allowed languages, only accessible by title entities
        bool GetLanguageList(LocalizationModels::FGetLanguageListRequest& request, const FGetLanguageListDelegate& SuccessDelegate = FGetLanguageListDelegate(), const FPlayFabErrorDelegate& ErrorDelegate = FPlayFabErrorDelegate());

    private:
        // ------------ Generated result handlers
        void OnGetLanguageListResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLanguageListDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate);

    };
};
