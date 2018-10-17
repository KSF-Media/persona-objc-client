# OAILoginApi

All URIs are relative to *http://localhost/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**loginPost**](OAILoginApi.md#loginpost) | **POST** /login | Login with email and password
[**loginSomePost**](OAILoginApi.md#loginsomepost) | **POST** /login/some | Login with social media
[**loginSsoPost**](OAILoginApi.md#loginssopost) | **POST** /login/sso | Login with the AccessToken given by the SSO auth


# **loginPost**
```objc
-(NSURLSessionTask*) loginPostWithLoginData: (OAILoginData*) loginData
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Login with email and password

### Example 
```objc

OAILoginData* loginData = [[OAILoginData alloc] init]; // 

OAILoginApi*apiInstance = [[OAILoginApi alloc] init];

// Login with email and password
[apiInstance loginPostWithLoginData:loginData
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
 **loginData** | [**OAILoginData***](OAILoginData.md)|  | 

### Return type

[**OAILoginResponse***](OAILoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **loginSomePost**
```objc
-(NSURLSessionTask*) loginSomePostWithLoginDataSoMe: (OAILoginDataSoMe*) loginDataSoMe
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Login with social media

### Example 
```objc

OAILoginDataSoMe* loginDataSoMe = [[OAILoginDataSoMe alloc] init]; // 

OAILoginApi*apiInstance = [[OAILoginApi alloc] init];

// Login with social media
[apiInstance loginSomePostWithLoginDataSoMe:loginDataSoMe
          completionHandler: ^(OAILoginResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAILoginApi->loginSomePost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **loginDataSoMe** | [**OAILoginDataSoMe***](OAILoginDataSoMe.md)|  | 

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
-(NSURLSessionTask*) loginSsoPostWithLoginDataSSO: (OAILoginDataSSO*) loginDataSSO
        completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;
```

Login with the AccessToken given by the SSO auth

### Example 
```objc

OAILoginDataSSO* loginDataSSO = [[OAILoginDataSSO alloc] init]; // 

OAILoginApi*apiInstance = [[OAILoginApi alloc] init];

// Login with the AccessToken given by the SSO auth
[apiInstance loginSsoPostWithLoginDataSSO:loginDataSSO
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
 **loginDataSSO** | [**OAILoginDataSSO***](OAILoginDataSSO.md)|  | 

### Return type

[**OAILoginResponse***](OAILoginResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

