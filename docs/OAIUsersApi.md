# OAIUsersApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**usersPost**](OAIUsersApi.md#userspost) | **POST** /users | Create a new user.
[**usersUuidGdprPut**](OAIUsersApi.md#usersuuidgdprput) | **PUT** /users/{uuid}/gdpr | Updates the GDPR consent settings for a given user.
[**usersUuidGet**](OAIUsersApi.md#usersuuidget) | **GET** /users/{uuid} | Get user by UUID.


# **usersPost**
```objc
-(NSURLSessionTask*) usersPostWithNewUser: (OAINewUser*) newUser
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Create a new user.

### Example 
```objc

OAINewUser* newUser = [[OAINewUser alloc] init]; // 

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Create a new user.
[apiInstance usersPostWithNewUser:newUser
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
 **newUser** | [**OAINewUser***](OAINewUser.md)|  | 

### Return type

[**OAILoginResponse***](OAILoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **usersUuidGdprPut**
```objc
-(NSURLSessionTask*) usersUuidGdprPutWithUuid: (NSString*) uuid
    gdprConsent: (NSArray<OAIGdprConsent>*) gdprConsent
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Updates the GDPR consent settings for a given user.

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSArray<OAIGdprConsent>* gdprConsent = @[[[NSArray alloc] init]]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIUsersApi*apiInstance = [[OAIUsersApi alloc] init];

// Updates the GDPR consent settings for a given user.
[apiInstance usersUuidGdprPutWithUuid:uuid
              gdprConsent:gdprConsent
              authorization:authorization
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
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
 **gdprConsent** | [**NSArray&lt;OAIGdprConsent&gt;***](NSArray.md)|  | 
 **authorization** | **NSString***|  | [optional] 

### Return type

**NSArray<NSObject*>***

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

