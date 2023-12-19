# OAIAdminApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**adminFreePassDelete**](OAIAdminApi.md#adminfreepassdelete) | **DELETE** /admin/free-pass | Revokes an existing free pass
[**adminFreePassPut**](OAIAdminApi.md#adminfreepassput) | **PUT** /admin/free-pass | Creates a free pass to an article
[**adminFreePassesGet**](OAIAdminApi.md#adminfreepassesget) | **GET** /admin/free-passes | Lists all free passes
[**adminSearchPost**](OAIAdminApi.md#adminsearchpost) | **POST** /admin/search | Search for users
[**adminTransferPassiveSubscribersListidPost**](OAIAdminApi.md#admintransferpassivesubscriberslistidpost) | **POST** /admin/transfer-passive-subscribers/{listid} | Transfers passive customers from Kayak to Mailchimp
[**adminUserPost**](OAIAdminApi.md#adminuserpost) | **POST** /admin/user | Create a new user with admin options.
[**adminUserUuidDelete**](OAIAdminApi.md#adminuseruuiddelete) | **DELETE** /admin/user/{uuid} | Delete user


# **adminFreePassDelete**
```objc
-(NSURLSessionTask*) adminFreePassDeleteWithBody: (NSString*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSError* error)) handler;
```

Revokes an existing free pass

Marks a free pass as being revoked so that it can't be used anymore. Currently, revoked free passes can't be reinstated through Persona API (though it's possible to do so with an SQL query).

### Example 
```objc

NSString* body = @"body_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Revokes an existing free pass
[apiInstance adminFreePassDeleteWithBody:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminFreePassDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **NSString***|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **adminFreePassPut**
```objc
-(NSURLSessionTask*) adminFreePassPutWithBody: (OAIFreePassInput*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Creates a free pass to an article

Free passes can be used to temporarily bypass the paywall for individual articles.

### Example 
```objc

OAIFreePassInput* body = [[OAIFreePassInput alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Creates a free pass to an article
[apiInstance adminFreePassPutWithBody:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminFreePassPut: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAIFreePassInput***](OAIFreePassInput.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **adminFreePassesGet**
```objc
-(NSURLSessionTask*) adminFreePassesGetWithAuthUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<OAIFreePass>* output, NSError* error)) handler;
```

Lists all free passes

This end point returns the list of all free passes, including those that have been expired or revoked.

### Example 
```objc

NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Lists all free passes
[apiInstance adminFreePassesGetWithAuthUser:authUser
              authorization:authorization
          completionHandler: ^(NSArray<OAIFreePass>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminFreePassesGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**NSArray<OAIFreePass>***](OAIFreePass.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **adminSearchPost**
```objc
-(NSURLSessionTask*) adminSearchPostWithBody: (OAISearchQuery*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<OAISearchResult>* output, NSError* error)) handler;
```

Search for users

### Example 
```objc

OAISearchQuery* body = [[OAISearchQuery alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Search for users
[apiInstance adminSearchPostWithBody:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSArray<OAISearchResult>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminSearchPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAISearchQuery***](OAISearchQuery.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**NSArray<OAISearchResult>***](OAISearchResult.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **adminTransferPassiveSubscribersListidPost**
```objc
-(NSURLSessionTask*) adminTransferPassiveSubscribersListidPostWithListid: (NSString*) listid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Transfers passive customers from Kayak to Mailchimp

Passive subscribers/members/customers are users who don't have active entitlements and haven't opted out from email marketing. For the given list (audience) ID, this endpoint transfers the list of passive subscribers from Kayak to Mailchimp (via Faro).

### Example 
```objc

NSString* listid = @"listid_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Transfers passive customers from Kayak to Mailchimp
[apiInstance adminTransferPassiveSubscribersListidPostWithListid:listid
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminTransferPassiveSubscribersListidPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **listid** | **NSString***|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

**NSObject***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **adminUserPost**
```objc
-(NSURLSessionTask*) adminUserPostWithBody: (OAIAdminNewUser*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Create a new user with admin options.

### Example 
```objc

OAIAdminNewUser* body = [[OAIAdminNewUser alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Create a new user with admin options.
[apiInstance adminUserPostWithBody:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(OAILoginResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminUserPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAIAdminNewUser***](OAIAdminNewUser.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**OAILoginResponse***](OAILoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **adminUserUuidDelete**
```objc
-(NSURLSessionTask*) adminUserUuidDeleteWithUuid: (NSString*) uuid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete user

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Delete user
[apiInstance adminUserUuidDeleteWithUuid:uuid
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminUserUuidDelete: %@", error);
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

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

