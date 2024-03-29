# OAIUsersApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**usersPost**](OAIUsersApi.md#userspost) | **POST** /users | Create a new user.
[**usersTemporaryPost**](OAIUsersApi.md#userstemporarypost) | **POST** /users/temporary | Create a new user with email.
[**usersUuidEntitlementGet**](OAIUsersApi.md#usersuuidentitlementget) | **GET** /users/{uuid}/entitlement | Get users entitlements.
[**usersUuidGdprPut**](OAIUsersApi.md#usersuuidgdprput) | **PUT** /users/{uuid}/gdpr | Updates the GDPR consent settings for a given user.
[**usersUuidGet**](OAIUsersApi.md#usersuuidget) | **GET** /users/{uuid} | Get user by UUID.
[**usersUuidLegalPut**](OAIUsersApi.md#usersuuidlegalput) | **PUT** /users/{uuid}/legal | Updates the legal consent settings for a given user.
[**usersUuidNewslettersGet**](OAIUsersApi.md#usersuuidnewslettersget) | **GET** /users/{uuid}/newsletters | Get newsletter subscriptions
[**usersUuidNewslettersPut**](OAIUsersApi.md#usersuuidnewslettersput) | **PUT** /users/{uuid}/newsletters | Update newsletter subscriptions
[**usersUuidPasswordPut**](OAIUsersApi.md#usersuuidpasswordput) | **PUT** /users/{uuid}/password | Set / Change user password
[**usersUuidPatch**](OAIUsersApi.md#usersuuidpatch) | **PATCH** /users/{uuid} | Update a user
[**usersUuidPaymentsGet**](OAIUsersApi.md#usersuuidpaymentsget) | **GET** /users/{uuid}/payments | Get user&#39;s subscriptions and payment events
[**usersUuidScopeGet**](OAIUsersApi.md#usersuuidscopeget) | **GET** /users/{uuid}/scope | Check if user has valid token for a scope
[**usersUuidSubscriptionsSubsnoAddressChangeDelete**](OAIUsersApi.md#usersuuidsubscriptionssubsnoaddresschangedelete) | **DELETE** /users/{uuid}/subscriptions/{subsno}/addressChange | Delete temporary address change for subscription
[**usersUuidSubscriptionsSubsnoAddressChangePatch**](OAIUsersApi.md#usersuuidsubscriptionssubsnoaddresschangepatch) | **PATCH** /users/{uuid}/subscriptions/{subsno}/addressChange | Edit temporary address change dates of a subscription
[**usersUuidSubscriptionsSubsnoAddressChangePost**](OAIUsersApi.md#usersuuidsubscriptionssubsnoaddresschangepost) | **POST** /users/{uuid}/subscriptions/{subsno}/addressChange | Make a temporary address change for a subscription
[**usersUuidSubscriptionsSubsnoCancelPut**](OAIUsersApi.md#usersuuidsubscriptionssubsnocancelput) | **PUT** /users/{uuid}/subscriptions/{subsno}/cancel | Cancels user subscription
[**usersUuidSubscriptionsSubsnoPausePatch**](OAIUsersApi.md#usersuuidsubscriptionssubsnopausepatch) | **PATCH** /users/{uuid}/subscriptions/{subsno}/pause | Edit pause duration
[**usersUuidSubscriptionsSubsnoPausePost**](OAIUsersApi.md#usersuuidsubscriptionssubsnopausepost) | **POST** /users/{uuid}/subscriptions/{subsno}/pause | Pause users subscription
[**usersUuidSubscriptionsSubsnoReclamationPost**](OAIUsersApi.md#usersuuidsubscriptionssubsnoreclamationpost) | **POST** /users/{uuid}/subscriptions/{subsno}/reclamation | Create a new delivery reclamation for a subscription
[**usersUuidSubscriptionsSubsnoReclamationsReclaimnoGet**](OAIUsersApi.md#usersuuidsubscriptionssubsnoreclamationsreclaimnoget) | **GET** /users/{uuid}/subscriptions/{subsno}/reclamations/{reclaimno} | Get a delivery reclamation
[**usersUuidSubscriptionsSubsnoUnpausePost**](OAIUsersApi.md#usersuuidsubscriptionssubsnounpausepost) | **POST** /users/{uuid}/subscriptions/{subsno}/unpause | Unpause users subscription


# **usersPost**
```objc
-(NSURLSessionTask*) usersPostWithBody: (OAINewUser*) body
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Create a new user.

### Example 
```objc

OAINewUser* body = [[OAINewUser alloc] init]; // 

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Create a new user.
[apiInstance usersPostWithBody:body
          completionHandler: ^(OAILoginResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAINewUser***](OAINewUser.md)|  | 

### Return type

[**OAILoginResponse***](OAILoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersTemporaryPost**
```objc
-(NSURLSessionTask*) usersTemporaryPostWithBody: (OAINewTemporaryUser*) body
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Create a new user with email.

### Example 
```objc

OAINewTemporaryUser* body = [[OAINewTemporaryUser alloc] init]; // 

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Create a new user with email.
[apiInstance usersTemporaryPostWithBody:body
          completionHandler: ^(OAILoginResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersTemporaryPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAINewTemporaryUser***](OAINewTemporaryUser.md)|  | 

### Return type

[**OAILoginResponse***](OAILoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidEntitlementGet**
```objc
-(NSURLSessionTask*) usersUuidEntitlementGetWithUuid: (NSString*) uuid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    cacheControl: (NSString*) cacheControl
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Get users entitlements.

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)
NSString* cacheControl = @"cacheControl_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Get users entitlements.
[apiInstance usersUuidEntitlementGetWithUuid:uuid
              authUser:authUser
              authorization:authorization
              cacheControl:cacheControl
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidEntitlementGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 
 **cacheControl** | **NSString***|  | [optional] 

### Return type

**NSArray<NSString*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidGdprPut**
```objc
-(NSURLSessionTask*) usersUuidGdprPutWithUuid: (NSString*) uuid
    body: (NSArray<OAIGdprConsent>*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Updates the GDPR consent settings for a given user.

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSArray<OAIGdprConsent>* body = @[[[NSArray alloc] init]]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Updates the GDPR consent settings for a given user.
[apiInstance usersUuidGdprPutWithUuid:uuid
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAIUser* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidGdprPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **body** | [**NSArray&lt;OAIGdprConsent&gt;***](NSArray.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAIUser***](OAIUser.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidGet**
```objc
-(NSURLSessionTask*) usersUuidGetWithUuid: (NSString*) uuid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    cacheControl: (NSString*) cacheControl
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Get user by UUID.

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)
NSString* cacheControl = @"cacheControl_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Get user by UUID.
[apiInstance usersUuidGetWithUuid:uuid
              authUser:authUser
              authorization:authorization
              cacheControl:cacheControl
          completionHandler: ^(OAIUser* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 
 **cacheControl** | **NSString***|  | [optional] 

### Return type

[**OAIUser***](OAIUser.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidLegalPut**
```objc
-(NSURLSessionTask*) usersUuidLegalPutWithUuid: (NSString*) uuid
    body: (NSArray<OAILegalConsent>*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Updates the legal consent settings for a given user.

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSArray<OAILegalConsent>* body = @[[[NSArray alloc] init]]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Updates the legal consent settings for a given user.
[apiInstance usersUuidLegalPutWithUuid:uuid
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAIUser* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidLegalPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **body** | [**NSArray&lt;OAILegalConsent&gt;***](NSArray.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAIUser***](OAIUser.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidNewslettersGet**
```objc
-(NSURLSessionTask*) usersUuidNewslettersGetWithUuid: (NSString*) uuid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<OAINewsletter>* output, NSError* error)) handler;
```

Get newsletter subscriptions

Get list of newsletter subscriptions from mailchimp

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Get newsletter subscriptions
[apiInstance usersUuidNewslettersGetWithUuid:uuid
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSArray<OAINewsletter>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidNewslettersGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**NSArray<OAINewsletter>***](OAINewsletter.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidNewslettersPut**
```objc
-(NSURLSessionTask*) usersUuidNewslettersPutWithUuid: (NSString*) uuid
    body: (NSArray<OAINewsletter>*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<OAINewsletter>* output, NSError* error)) handler;
```

Update newsletter subscriptions

Get list of newsletter subscriptions from mailchimp

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSArray<OAINewsletter>* body = @[[[NSArray alloc] init]]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Update newsletter subscriptions
[apiInstance usersUuidNewslettersPutWithUuid:uuid
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSArray<OAINewsletter>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidNewslettersPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **body** | [**NSArray&lt;OAINewsletter&gt;***](NSArray.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**NSArray<OAINewsletter>***](OAINewsletter.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidPasswordPut**
```objc
-(NSURLSessionTask*) usersUuidPasswordPutWithUuid: (NSString*) uuid
    body: (OAIUserUpdatePassword*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Set / Change user password

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
OAIUserUpdatePassword* body = [[OAIUserUpdatePassword alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Set / Change user password
[apiInstance usersUuidPasswordPutWithUuid:uuid
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAIUser* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidPasswordPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **body** | [**OAIUserUpdatePassword***](OAIUserUpdatePassword.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAIUser***](OAIUser.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidPatch**
```objc
-(NSURLSessionTask*) usersUuidPatchWithUuid: (NSString*) uuid
    body: (OAIUserUpdate*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Update a user

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
OAIUserUpdate* body = [[OAIUserUpdate alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Update a user
[apiInstance usersUuidPatchWithUuid:uuid
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAIUser* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidPatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **body** | [**OAIUserUpdate***](OAIUserUpdate.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAIUser***](OAIUser.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidPaymentsGet**
```objc
-(NSURLSessionTask*) usersUuidPaymentsGetWithUuid: (NSString*) uuid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<OAISubscriptionPayments>* output, NSError* error)) handler;
```

Get user's subscriptions and payment events

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Get user's subscriptions and payment events
[apiInstance usersUuidPaymentsGetWithUuid:uuid
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSArray<OAISubscriptionPayments>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidPaymentsGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**NSArray<OAISubscriptionPayments>***](OAISubscriptionPayments.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidScopeGet**
```objc
-(NSURLSessionTask*) usersUuidScopeGetWithUuid: (NSString*) uuid
    scope: (NSString*) scope
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Check if user has valid token for a scope

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* scope = @"scope_example"; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Check if user has valid token for a scope
[apiInstance usersUuidScopeGetWithUuid:uuid
              scope:scope
              authorization:authorization
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidScopeGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **scope** | **NSString***|  | 
 **authorization** | **NSString***|  | [optional] 

### Return type

**NSNumber***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoAddressChangeDelete**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoAddressChangeDeleteWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAIDeleteTempAddressChangeDates*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Delete temporary address change for subscription

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAIDeleteTempAddressChangeDates* body = [[OAIDeleteTempAddressChangeDates alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Delete temporary address change for subscription
[apiInstance usersUuidSubscriptionsSubsnoAddressChangeDeleteWithUuid:uuid
              subsno:subsno
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAISubscription* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidSubscriptionsSubsnoAddressChangeDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **subsno** | **NSNumber***|  | 
 **body** | [**OAIDeleteTempAddressChangeDates***](OAIDeleteTempAddressChangeDates.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAISubscription***](OAISubscription.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoAddressChangePatch**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoAddressChangePatchWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAITemporaryAddressChangeDates*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Edit temporary address change dates of a subscription

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAITemporaryAddressChangeDates* body = [[OAITemporaryAddressChangeDates alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Edit temporary address change dates of a subscription
[apiInstance usersUuidSubscriptionsSubsnoAddressChangePatchWithUuid:uuid
              subsno:subsno
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAISubscription* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidSubscriptionsSubsnoAddressChangePatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **subsno** | **NSNumber***|  | 
 **body** | [**OAITemporaryAddressChangeDates***](OAITemporaryAddressChangeDates.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAISubscription***](OAISubscription.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoAddressChangePost**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoAddressChangePostWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAITemporaryAddressChange*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Make a temporary address change for a subscription

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAITemporaryAddressChange* body = [[OAITemporaryAddressChange alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Make a temporary address change for a subscription
[apiInstance usersUuidSubscriptionsSubsnoAddressChangePostWithUuid:uuid
              subsno:subsno
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAISubscription* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidSubscriptionsSubsnoAddressChangePost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **subsno** | **NSNumber***|  | 
 **body** | [**OAITemporaryAddressChange***](OAITemporaryAddressChange.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAISubscription***](OAISubscription.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoCancelPut**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoCancelPutWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAICancelSubscriptionReason*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Cancels user subscription

The subscription continues to be valid until the end of the billing period. Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAICancelSubscriptionReason* body = [[OAICancelSubscriptionReason alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Cancels user subscription
[apiInstance usersUuidSubscriptionsSubsnoCancelPutWithUuid:uuid
              subsno:subsno
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAISubscription* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidSubscriptionsSubsnoCancelPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **subsno** | **NSNumber***|  | 
 **body** | [**OAICancelSubscriptionReason***](OAICancelSubscriptionReason.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAISubscription***](OAISubscription.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoPausePatch**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoPausePatchWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAISubscriptionPauseEdit*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Edit pause duration

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAISubscriptionPauseEdit* body = [[OAISubscriptionPauseEdit alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Edit pause duration
[apiInstance usersUuidSubscriptionsSubsnoPausePatchWithUuid:uuid
              subsno:subsno
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAISubscription* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidSubscriptionsSubsnoPausePatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **subsno** | **NSNumber***|  | 
 **body** | [**OAISubscriptionPauseEdit***](OAISubscriptionPauseEdit.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAISubscription***](OAISubscription.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoPausePost**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoPausePostWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAISubscriptionPauseDates*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Pause users subscription

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAISubscriptionPauseDates* body = [[OAISubscriptionPauseDates alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Pause users subscription
[apiInstance usersUuidSubscriptionsSubsnoPausePostWithUuid:uuid
              subsno:subsno
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAISubscription* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidSubscriptionsSubsnoPausePost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **subsno** | **NSNumber***|  | 
 **body** | [**OAISubscriptionPauseDates***](OAISubscriptionPauseDates.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAISubscription***](OAISubscription.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoReclamationPost**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoReclamationPostWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAINewDeliveryReclamation*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIDeliveryReclamation* output, NSError* error)) handler;
```

Create a new delivery reclamation for a subscription

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAINewDeliveryReclamation* body = [[OAINewDeliveryReclamation alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Create a new delivery reclamation for a subscription
[apiInstance usersUuidSubscriptionsSubsnoReclamationPostWithUuid:uuid
              subsno:subsno
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAIDeliveryReclamation* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidSubscriptionsSubsnoReclamationPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **subsno** | **NSNumber***|  | 
 **body** | [**OAINewDeliveryReclamation***](OAINewDeliveryReclamation.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAIDeliveryReclamation***](OAIDeliveryReclamation.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoReclamationsReclaimnoGet**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoReclamationsReclaimnoGetWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    reclaimno: (NSNumber*) reclaimno
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIDeliveryReclamation* output, NSError* error)) handler;
```

Get a delivery reclamation

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
NSNumber* reclaimno = @56; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Get a delivery reclamation
[apiInstance usersUuidSubscriptionsSubsnoReclamationsReclaimnoGetWithUuid:uuid
              subsno:subsno
              reclaimno:reclaimno
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAIDeliveryReclamation* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidSubscriptionsSubsnoReclamationsReclaimnoGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **subsno** | **NSNumber***|  | 
 **reclaimno** | **NSNumber***|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAIDeliveryReclamation***](OAIDeliveryReclamation.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoUnpausePost**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoUnpausePostWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    startDate: (NSDate*) startDate
    endDate: (NSDate*) endDate
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Unpause users subscription

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)
NSDate* startDate = @"2013-10-20T19:20:30+01:00"; //  (optional)
NSDate* endDate = @"2013-10-20T19:20:30+01:00"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Unpause users subscription
[apiInstance usersUuidSubscriptionsSubsnoUnpausePostWithUuid:uuid
              subsno:subsno
              authUser:authUser
              authorization:authorization
              startDate:startDate
              endDate:endDate
          completionHandler: ^(OAISubscription* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIUsersApi->usersUuidSubscriptionsSubsnoUnpausePost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **subsno** | **NSNumber***|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 
 **startDate** | **NSDate***|  | [optional] 
 **endDate** | **NSDate***|  | [optional] 

### Return type

[**OAISubscription***](OAISubscription.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

