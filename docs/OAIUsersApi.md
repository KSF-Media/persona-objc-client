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
[**usersUuidPasswordPut**](OAIUsersApi.md#usersuuidpasswordput) | **PUT** /users/{uuid}/password | Set / Change user password
[**usersUuidPatch**](OAIUsersApi.md#usersuuidpatch) | **PATCH** /users/{uuid} | Update a user
[**usersUuidSubscriptionsSubsnoAddressChangeDelete**](OAIUsersApi.md#usersuuidsubscriptionssubsnoaddresschangedelete) | **DELETE** /users/{uuid}/subscriptions/{subsno}/addressChange | Delete temporary address change for subscription
[**usersUuidSubscriptionsSubsnoAddressChangePost**](OAIUsersApi.md#usersuuidsubscriptionssubsnoaddresschangepost) | **POST** /users/{uuid}/subscriptions/{subsno}/addressChange | Make a temporary address change for a subscription
[**usersUuidSubscriptionsSubsnoPausePost**](OAIUsersApi.md#usersuuidsubscriptionssubsnopausepost) | **POST** /users/{uuid}/subscriptions/{subsno}/pause | Pause users subscription
[**usersUuidSubscriptionsSubsnoReclamationPost**](OAIUsersApi.md#usersuuidsubscriptionssubsnoreclamationpost) | **POST** /users/{uuid}/subscriptions/{subsno}/reclamation | Create a new delivery reclamation for a subscription
[**usersUuidSubscriptionsSubsnoReclamationsReclaimnoGet**](OAIUsersApi.md#usersuuidsubscriptionssubsnoreclamationsreclaimnoget) | **GET** /users/{uuid}/subscriptions/{subsno}/reclamations/{reclaimno} | Get a delivery reclamation
[**usersUuidSubscriptionsSubsnoUnpausePost**](OAIUsersApi.md#usersuuidsubscriptionssubsnounpausepost) | **POST** /users/{uuid}/subscriptions/{subsno}/unpause | Pause users subscription


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
    authorization: (NSString*) authorization
    cacheControl: (NSString*) cacheControl
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Get users entitlements.

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authorization = @"authorization_example"; //  (optional)
NSString* cacheControl = @"cacheControl_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Get users entitlements.
[apiInstance usersUuidEntitlementGetWithUuid:uuid
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
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Updates the GDPR consent settings for a given user.

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSArray<OAIGdprConsent>* body = @[[[NSArray alloc] init]]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Updates the GDPR consent settings for a given user.
[apiInstance usersUuidGdprPutWithUuid:uuid
              body:body
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
    authorization: (NSString*) authorization
    cacheControl: (NSString*) cacheControl
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Get user by UUID.

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authorization = @"authorization_example"; //  (optional)
NSString* cacheControl = @"cacheControl_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Get user by UUID.
[apiInstance usersUuidGetWithUuid:uuid
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
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Updates the legal consent settings for a given user.

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSArray<OAILegalConsent>* body = @[[[NSArray alloc] init]]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Updates the legal consent settings for a given user.
[apiInstance usersUuidLegalPutWithUuid:uuid
              body:body
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
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAIUser***](OAIUser.md)

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
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Set / Change user password

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
OAIUserUpdatePassword* body = [[OAIUserUpdatePassword alloc] init]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Set / Change user password
[apiInstance usersUuidPasswordPutWithUuid:uuid
              body:body
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
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Update a user

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
OAIUserUpdate* body = [[OAIUserUpdate alloc] init]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Update a user
[apiInstance usersUuidPatchWithUuid:uuid
              body:body
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
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAIUser***](OAIUser.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidSubscriptionsSubsnoAddressChangeDelete**
```objc
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoAddressChangeDeleteWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAIDeleteTempAddressChangeDates*) body
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Delete temporary address change for subscription

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAIDeleteTempAddressChangeDates* body = [[OAIDeleteTempAddressChangeDates alloc] init]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Delete temporary address change for subscription
[apiInstance usersUuidSubscriptionsSubsnoAddressChangeDeleteWithUuid:uuid
              subsno:subsno
              body:body
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
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Make a temporary address change for a subscription

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAITemporaryAddressChange* body = [[OAITemporaryAddressChange alloc] init]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Make a temporary address change for a subscription
[apiInstance usersUuidSubscriptionsSubsnoAddressChangePostWithUuid:uuid
              subsno:subsno
              body:body
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
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Pause users subscription

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAISubscriptionPauseDates* body = [[OAISubscriptionPauseDates alloc] init]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Pause users subscription
[apiInstance usersUuidSubscriptionsSubsnoPausePostWithUuid:uuid
              subsno:subsno
              body:body
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
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIDeliveryReclamation* output, NSError* error)) handler;
```

Create a new delivery reclamation for a subscription

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
OAINewDeliveryReclamation* body = [[OAINewDeliveryReclamation alloc] init]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Create a new delivery reclamation for a subscription
[apiInstance usersUuidSubscriptionsSubsnoReclamationPostWithUuid:uuid
              subsno:subsno
              body:body
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
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAIDeliveryReclamation* output, NSError* error)) handler;
```

Get a delivery reclamation

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
NSNumber* reclaimno = @56; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Get a delivery reclamation
[apiInstance usersUuidSubscriptionsSubsnoReclamationsReclaimnoGetWithUuid:uuid
              subsno:subsno
              reclaimno:reclaimno
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
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;
```

Pause users subscription

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSNumber* subsno = @56; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Pause users subscription
[apiInstance usersUuidSubscriptionsSubsnoUnpausePostWithUuid:uuid
              subsno:subsno
              authorization:authorization
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
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAISubscription***](OAISubscription.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

