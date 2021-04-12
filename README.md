# OpenAPIClient

KSF Media unified login service

This ObjC package is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: 1.3.0
- Package version: 
- Build package: org.openapitools.codegen.languages.ObjcClientCodegen

## Requirements

The SDK requires [**ARC (Automatic Reference Counting)**](http://stackoverflow.com/questions/7778356/how-to-enable-disable-automatic-reference-counting) to be enabled in the Xcode project.

## Installation & Usage
### Install from Github using [CocoaPods](https://cocoapods.org/)

Add the following to the Podfile:

```ruby
pod 'OpenAPIClient', :git => 'https://github.com/KSF-Media/persona-objc-client.git'
```

To specify a particular branch, append `, :branch => 'branch-name-here'`

To specify a particular commit, append `, :commit => '11aa22'`

### Install from local path using [CocoaPods](https://cocoapods.org/)

Put the SDK under your project folder (e.g. /path/to/objc_project/Vendor/OpenAPIClient) and then add the following to the Podfile:

```ruby
pod 'OpenAPIClient', :path => 'Vendor/OpenAPIClient'
```

### Usage

Import the following:

```objc
#import <OpenAPIClient/OAIApiClient.h>
#import <OpenAPIClient/OAIDefaultConfiguration.h>
// load models
#import <OpenAPIClient/OAIActiveDays.h>
#import <OpenAPIClient/OAIAddress.h>
#import <OpenAPIClient/OAICancelSubscriptionReason.h>
#import <OpenAPIClient/OAICodeForTokenData.h>
#import <OpenAPIClient/OAIDeleteTempAddressChangeDates.h>
#import <OpenAPIClient/OAIDeliveryAddress.h>
#import <OpenAPIClient/OAIDeliveryReclamation.h>
#import <OpenAPIClient/OAIDescriptionFrequency.h>
#import <OpenAPIClient/OAIEntitlementAccess.h>
#import <OpenAPIClient/OAIForgotPasswordData.h>
#import <OpenAPIClient/OAIGdprConsent.h>
#import <OpenAPIClient/OAIInlineResponse400.h>
#import <OpenAPIClient/OAIInlineResponse400InvalidRequestBody.h>
#import <OpenAPIClient/OAIInlineResponse403.h>
#import <OpenAPIClient/OAIInlineResponse4031.h>
#import <OpenAPIClient/OAIInlineResponse4031AccessTokenExpired.h>
#import <OpenAPIClient/OAIInlineResponse4032.h>
#import <OpenAPIClient/OAIInlineResponse4032EmailAddressInUse.h>
#import <OpenAPIClient/OAIInlineResponse4032EmailNotAuthorized.h>
#import <OpenAPIClient/OAIInlineResponse4032OauthFailed.h>
#import <OpenAPIClient/OAIInlineResponse403InvalidCredentials.h>
#import <OpenAPIClient/OAIInlineResponse415.h>
#import <OpenAPIClient/OAIInlineResponse415UnsupportedMediaType.h>
#import <OpenAPIClient/OAIInlineResponse500.h>
#import <OpenAPIClient/OAIInlineResponse500InternalServerError.h>
#import <OpenAPIClient/OAILegalConsent.h>
#import <OpenAPIClient/OAILoginData.h>
#import <OpenAPIClient/OAILoginDataSSO.h>
#import <OpenAPIClient/OAILoginDataSoMe.h>
#import <OpenAPIClient/OAILoginResponse.h>
#import <OpenAPIClient/OAINewDeliveryReclamation.h>
#import <OpenAPIClient/OAINewTemporaryUser.h>
#import <OpenAPIClient/OAINewUser.h>
#import <OpenAPIClient/OAIPackage.h>
#import <OpenAPIClient/OAIPackageCampaign.h>
#import <OpenAPIClient/OAIPackageDescription.h>
#import <OpenAPIClient/OAIPackageOffer.h>
#import <OpenAPIClient/OAIPaper.h>
#import <OpenAPIClient/OAIPastTemporaryAddress.h>
#import <OpenAPIClient/OAIPausedSubscription.h>
#import <OpenAPIClient/OAIPayment.h>
#import <OpenAPIClient/OAIPendingAddressChange.h>
#import <OpenAPIClient/OAIProduct.h>
#import <OpenAPIClient/OAISubscription.h>
#import <OpenAPIClient/OAISubscriptionDates.h>
#import <OpenAPIClient/OAISubscriptionPauseDates.h>
#import <OpenAPIClient/OAISubscriptionPauseEdit.h>
#import <OpenAPIClient/OAISubscriptionPayments.h>
#import <OpenAPIClient/OAITemporaryAddressChange.h>
#import <OpenAPIClient/OAITemporaryAddressChangeDates.h>
#import <OpenAPIClient/OAITokenResponse.h>
#import <OpenAPIClient/OAIUpdatePasswordData.h>
#import <OpenAPIClient/OAIUser.h>
#import <OpenAPIClient/OAIUserUpdate.h>
#import <OpenAPIClient/OAIUserUpdateAddress.h>
#import <OpenAPIClient/OAIUserUpdatePassword.h>
// load API classes for accessing endpoints
#import <OpenAPIClient/OAIAccountApi.h>
#import <OpenAPIClient/OAIAdminApi.h>
#import <OpenAPIClient/OAIEntitlementsApi.h>
#import <OpenAPIClient/OAILoginApi.h>
#import <OpenAPIClient/OAIUsersApi.h>

```

## Recommendation

It's recommended to create an instance of ApiClient per thread in a multi-threaded environment to avoid any potential issues.

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```objc


OAICodeForTokenData* *body = [[OAICodeForTokenData alloc] init]; // 

OAIAccountApi *apiInstance = [[OAIAccountApi alloc] init];

// Get a password reset token
[apiInstance accountCodeForTokenPostWithBody:body
              completionHandler: ^(OAITokenResponse* output, NSError* error) {
                            if (output) {
                                NSLog(@"%@", output);
                            }
                            if (error) {
                                NSLog(@"Error: %@", error);
                            }
                        }];

```

## Documentation for API Endpoints

All URIs are relative to *http://http:/v1*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*OAIAccountApi* | [**accountCodeForTokenPost**](docs/OAIAccountApi.md#accountcodefortokenpost) | **POST** /account/codeForToken | Get a password reset token
*OAIAccountApi* | [**accountForgotPassPost**](docs/OAIAccountApi.md#accountforgotpasspost) | **POST** /account/forgotPass | Forgot Password
*OAIAccountApi* | [**accountResetForgottenPasswordPost**](docs/OAIAccountApi.md#accountresetforgottenpasswordpost) | **POST** /account/resetForgottenPassword | Reset a forgotten password with a token
*OAIAdminApi* | [**adminUuidGet**](docs/OAIAdminApi.md#adminuuidget) | **GET** /admin/{uuid} | Get user by admin credentials.
*OAIEntitlementsApi* | [**entitlementsAllowPost**](docs/OAIEntitlementsApi.md#entitlementsallowpost) | **POST** /entitlements/allow | 
*OAIEntitlementsApi* | [**entitlementsAllowUuidPost**](docs/OAIEntitlementsApi.md#entitlementsallowuuidpost) | **POST** /entitlements/allow/{uuid} | Grant product access to a customer
*OAIEntitlementsApi* | [**entitlementsGet**](docs/OAIEntitlementsApi.md#entitlementsget) | **GET** /entitlements | List all entitlements
*OAILoginApi* | [**loginPost**](docs/OAILoginApi.md#loginpost) | **POST** /login | Login with email and password
*OAILoginApi* | [**loginSomePost**](docs/OAILoginApi.md#loginsomepost) | **POST** /login/some | Login with social media
*OAILoginApi* | [**loginSsoPost**](docs/OAILoginApi.md#loginssopost) | **POST** /login/sso | Login with the AccessToken given by the SSO auth
*OAILoginApi* | [**loginUuidDelete**](docs/OAILoginApi.md#loginuuiddelete) | **DELETE** /login/{uuid} | Logout
*OAIUsersApi* | [**usersPost**](docs/OAIUsersApi.md#userspost) | **POST** /users | Create a new user.
*OAIUsersApi* | [**usersSearchGet**](docs/OAIUsersApi.md#userssearchget) | **GET** /users/search | Search for users
*OAIUsersApi* | [**usersTemporaryPost**](docs/OAIUsersApi.md#userstemporarypost) | **POST** /users/temporary | Create a new user with email.
*OAIUsersApi* | [**usersUuidEntitlementGet**](docs/OAIUsersApi.md#usersuuidentitlementget) | **GET** /users/{uuid}/entitlement | Get users entitlements.
*OAIUsersApi* | [**usersUuidGdprPut**](docs/OAIUsersApi.md#usersuuidgdprput) | **PUT** /users/{uuid}/gdpr | Updates the GDPR consent settings for a given user.
*OAIUsersApi* | [**usersUuidGet**](docs/OAIUsersApi.md#usersuuidget) | **GET** /users/{uuid} | Get user by UUID.
*OAIUsersApi* | [**usersUuidLegalPut**](docs/OAIUsersApi.md#usersuuidlegalput) | **PUT** /users/{uuid}/legal | Updates the legal consent settings for a given user.
*OAIUsersApi* | [**usersUuidPasswordPut**](docs/OAIUsersApi.md#usersuuidpasswordput) | **PUT** /users/{uuid}/password | Set / Change user password
*OAIUsersApi* | [**usersUuidPatch**](docs/OAIUsersApi.md#usersuuidpatch) | **PATCH** /users/{uuid} | Update a user
*OAIUsersApi* | [**usersUuidPaymentsGet**](docs/OAIUsersApi.md#usersuuidpaymentsget) | **GET** /users/{uuid}/payments | Get user&#39;s subscriptions and payment events
*OAIUsersApi* | [**usersUuidSubscriptionsSubsnoAddressChangeDelete**](docs/OAIUsersApi.md#usersuuidsubscriptionssubsnoaddresschangedelete) | **DELETE** /users/{uuid}/subscriptions/{subsno}/addressChange | Delete temporary address change for subscription
*OAIUsersApi* | [**usersUuidSubscriptionsSubsnoAddressChangePatch**](docs/OAIUsersApi.md#usersuuidsubscriptionssubsnoaddresschangepatch) | **PATCH** /users/{uuid}/subscriptions/{subsno}/addressChange | Edit temporary address change dates of a subscription
*OAIUsersApi* | [**usersUuidSubscriptionsSubsnoAddressChangePost**](docs/OAIUsersApi.md#usersuuidsubscriptionssubsnoaddresschangepost) | **POST** /users/{uuid}/subscriptions/{subsno}/addressChange | Make a temporary address change for a subscription
*OAIUsersApi* | [**usersUuidSubscriptionsSubsnoCancelPut**](docs/OAIUsersApi.md#usersuuidsubscriptionssubsnocancelput) | **PUT** /users/{uuid}/subscriptions/{subsno}/cancel | Cancels user subscription
*OAIUsersApi* | [**usersUuidSubscriptionsSubsnoPausePatch**](docs/OAIUsersApi.md#usersuuidsubscriptionssubsnopausepatch) | **PATCH** /users/{uuid}/subscriptions/{subsno}/pause | Edit pause duration
*OAIUsersApi* | [**usersUuidSubscriptionsSubsnoPausePost**](docs/OAIUsersApi.md#usersuuidsubscriptionssubsnopausepost) | **POST** /users/{uuid}/subscriptions/{subsno}/pause | Pause users subscription
*OAIUsersApi* | [**usersUuidSubscriptionsSubsnoReclamationPost**](docs/OAIUsersApi.md#usersuuidsubscriptionssubsnoreclamationpost) | **POST** /users/{uuid}/subscriptions/{subsno}/reclamation | Create a new delivery reclamation for a subscription
*OAIUsersApi* | [**usersUuidSubscriptionsSubsnoReclamationsReclaimnoGet**](docs/OAIUsersApi.md#usersuuidsubscriptionssubsnoreclamationsreclaimnoget) | **GET** /users/{uuid}/subscriptions/{subsno}/reclamations/{reclaimno} | Get a delivery reclamation
*OAIUsersApi* | [**usersUuidSubscriptionsSubsnoUnpausePost**](docs/OAIUsersApi.md#usersuuidsubscriptionssubsnounpausepost) | **POST** /users/{uuid}/subscriptions/{subsno}/unpause | Pause users subscription


## Documentation For Models

 - [OAIActiveDays](docs/OAIActiveDays.md)
 - [OAIAddress](docs/OAIAddress.md)
 - [OAICancelSubscriptionReason](docs/OAICancelSubscriptionReason.md)
 - [OAICodeForTokenData](docs/OAICodeForTokenData.md)
 - [OAIDeleteTempAddressChangeDates](docs/OAIDeleteTempAddressChangeDates.md)
 - [OAIDeliveryAddress](docs/OAIDeliveryAddress.md)
 - [OAIDeliveryReclamation](docs/OAIDeliveryReclamation.md)
 - [OAIDescriptionFrequency](docs/OAIDescriptionFrequency.md)
 - [OAIEntitlementAccess](docs/OAIEntitlementAccess.md)
 - [OAIForgotPasswordData](docs/OAIForgotPasswordData.md)
 - [OAIGdprConsent](docs/OAIGdprConsent.md)
 - [OAIInlineResponse400](docs/OAIInlineResponse400.md)
 - [OAIInlineResponse400InvalidRequestBody](docs/OAIInlineResponse400InvalidRequestBody.md)
 - [OAIInlineResponse403](docs/OAIInlineResponse403.md)
 - [OAIInlineResponse4031](docs/OAIInlineResponse4031.md)
 - [OAIInlineResponse4031AccessTokenExpired](docs/OAIInlineResponse4031AccessTokenExpired.md)
 - [OAIInlineResponse4032](docs/OAIInlineResponse4032.md)
 - [OAIInlineResponse4032EmailAddressInUse](docs/OAIInlineResponse4032EmailAddressInUse.md)
 - [OAIInlineResponse4032EmailNotAuthorized](docs/OAIInlineResponse4032EmailNotAuthorized.md)
 - [OAIInlineResponse4032OauthFailed](docs/OAIInlineResponse4032OauthFailed.md)
 - [OAIInlineResponse403InvalidCredentials](docs/OAIInlineResponse403InvalidCredentials.md)
 - [OAIInlineResponse415](docs/OAIInlineResponse415.md)
 - [OAIInlineResponse415UnsupportedMediaType](docs/OAIInlineResponse415UnsupportedMediaType.md)
 - [OAIInlineResponse500](docs/OAIInlineResponse500.md)
 - [OAIInlineResponse500InternalServerError](docs/OAIInlineResponse500InternalServerError.md)
 - [OAILegalConsent](docs/OAILegalConsent.md)
 - [OAILoginData](docs/OAILoginData.md)
 - [OAILoginDataSSO](docs/OAILoginDataSSO.md)
 - [OAILoginDataSoMe](docs/OAILoginDataSoMe.md)
 - [OAILoginResponse](docs/OAILoginResponse.md)
 - [OAINewDeliveryReclamation](docs/OAINewDeliveryReclamation.md)
 - [OAINewTemporaryUser](docs/OAINewTemporaryUser.md)
 - [OAINewUser](docs/OAINewUser.md)
 - [OAIPackage](docs/OAIPackage.md)
 - [OAIPackageCampaign](docs/OAIPackageCampaign.md)
 - [OAIPackageDescription](docs/OAIPackageDescription.md)
 - [OAIPackageOffer](docs/OAIPackageOffer.md)
 - [OAIPaper](docs/OAIPaper.md)
 - [OAIPastTemporaryAddress](docs/OAIPastTemporaryAddress.md)
 - [OAIPausedSubscription](docs/OAIPausedSubscription.md)
 - [OAIPayment](docs/OAIPayment.md)
 - [OAIPendingAddressChange](docs/OAIPendingAddressChange.md)
 - [OAIProduct](docs/OAIProduct.md)
 - [OAISubscription](docs/OAISubscription.md)
 - [OAISubscriptionDates](docs/OAISubscriptionDates.md)
 - [OAISubscriptionPauseDates](docs/OAISubscriptionPauseDates.md)
 - [OAISubscriptionPauseEdit](docs/OAISubscriptionPauseEdit.md)
 - [OAISubscriptionPayments](docs/OAISubscriptionPayments.md)
 - [OAITemporaryAddressChange](docs/OAITemporaryAddressChange.md)
 - [OAITemporaryAddressChangeDates](docs/OAITemporaryAddressChangeDates.md)
 - [OAITokenResponse](docs/OAITokenResponse.md)
 - [OAIUpdatePasswordData](docs/OAIUpdatePasswordData.md)
 - [OAIUser](docs/OAIUser.md)
 - [OAIUserUpdate](docs/OAIUserUpdate.md)
 - [OAIUserUpdateAddress](docs/OAIUserUpdateAddress.md)
 - [OAIUserUpdatePassword](docs/OAIUserUpdatePassword.md)


## Documentation For Authorization

 All endpoints do not require authorization.


## Author




