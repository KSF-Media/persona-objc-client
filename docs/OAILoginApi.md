# OAILoginApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**loginIpGet**](OAILoginApi.md#loginipget) | **GET** /login/ip | Login with IP
[**loginPost**](OAILoginApi.md#loginpost) | **POST** /login | Login with email and password
[**loginSsoPost**](OAILoginApi.md#loginssopost) | **POST** /login/sso | Disabled. Always returns 403.
[**loginUuidDelete**](OAILoginApi.md#loginuuiddelete) | **DELETE** /login/{uuid} | Logout


# **loginIpGet**
```objc
-(NSURLSessionTask*) loginIpGetWithXRealIP: (NSString*) xRealIP
    paper: (NSString*) paper
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Login with IP

Returns auth & token for customers with IP based entitlement

### Example 
```objc

NSString* xRealIP = @"xRealIP_example"; // 
NSString* paper = @"paper_example"; // 

OAILoginApi*apiInstance = [[OAILoginApi alloc] init];

// Login with IP
[apiInstance loginIpGetWithXRealIP:xRealIP
              paper:paper
          completionHandler: ^(OAILoginResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAILoginApi->loginIpGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **xRealIP** | **NSString***|  | 
 **paper** | **NSString***|  | 

### Return type

[**OAILoginResponse***](OAILoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **loginPost**
```objc
-(NSURLSessionTask*) loginPostWithBody: (OAILoginData*) body
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Login with email and password

### Example 
```objc

OAILoginData* body = [[OAILoginData alloc] init]; // 

OAILoginApi*apiInstance = [[OAILoginApi alloc] init];

// Login with email and password
[apiInstance loginPostWithBody:body
          completionHandler: ^(OAILoginResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAILoginApi->loginPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAILoginData***](OAILoginData.md)|  | 

### Return type

[**OAILoginResponse***](OAILoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **loginSsoPost**
```objc
-(NSURLSessionTask*) loginSsoPostWithBody: (OAILoginDataSSO*) body
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Disabled. Always returns 403.

### Example 
```objc

OAILoginDataSSO* body = [[OAILoginDataSSO alloc] init]; // 

OAILoginApi*apiInstance = [[OAILoginApi alloc] init];

// Disabled. Always returns 403.
[apiInstance loginSsoPostWithBody:body
          completionHandler: ^(OAILoginResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAILoginApi->loginSsoPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAILoginDataSSO***](OAILoginDataSSO.md)|  | 

### Return type

[**OAILoginResponse***](OAILoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **loginUuidDelete**
```objc
-(NSURLSessionTask*) loginUuidDeleteWithUuid: (NSString*) uuid
    authorization: (NSString*) authorization
    everywhere: (NSNumber*) everywhere
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Logout

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authorization = @"authorization_example"; //  (optional)
NSNumber* everywhere = @(NO); //  (optional) (default to @(NO))

OAILoginApi*apiInstance = [[OAILoginApi alloc] init];

// Logout
[apiInstance loginUuidDeleteWithUuid:uuid
              authorization:authorization
              everywhere:everywhere
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAILoginApi->loginUuidDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **authorization** | **NSString***|  | [optional] 
 **everywhere** | **NSNumber***|  | [optional] [default to @(NO)]

### Return type

**NSArray<NSObject*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

