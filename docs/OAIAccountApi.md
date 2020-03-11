# OAIAccountApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**accountCodeForTokenPost**](OAIAccountApi.md#accountcodefortokenpost) | **POST** /account/codeForToken | Get a password reset token
[**accountForgotPassPost**](OAIAccountApi.md#accountforgotpasspost) | **POST** /account/forgotPass | Forgot Password
[**accountResetForgottenPasswordPost**](OAIAccountApi.md#accountresetforgottenpasswordpost) | **POST** /account/resetForgottenPassword | Reset a forgotten password with a token


# **accountCodeForTokenPost**
```objc
-(NSURLSessionTask*) accountCodeForTokenPostWithBody: (OAICodeForTokenData*) body
        completionHandler: (void (^)(OAITokenResponse* output, NSError* error)) handler;
```

Get a password reset token

### Example 
```objc

OAICodeForTokenData* body = [[OAICodeForTokenData alloc] init]; // 

OAIAccountApi*apiInstance = [[OAIAccountApi alloc] init];

// Get a password reset token
[apiInstance accountCodeForTokenPostWithBody:body
          completionHandler: ^(OAITokenResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAccountApi->accountCodeForTokenPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAICodeForTokenData***](OAICodeForTokenData.md)|  | 

### Return type

[**OAITokenResponse***](OAITokenResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **accountForgotPassPost**
```objc
-(NSURLSessionTask*) accountForgotPassPostWithBody: (OAIForgotPasswordData*) body
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Forgot Password

### Example 
```objc

OAIForgotPasswordData* body = [[OAIForgotPasswordData alloc] init]; // 

OAIAccountApi*apiInstance = [[OAIAccountApi alloc] init];

// Forgot Password
[apiInstance accountForgotPassPostWithBody:body
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAccountApi->accountForgotPassPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAIForgotPasswordData***](OAIForgotPasswordData.md)|  | 

### Return type

**NSArray<NSObject*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **accountResetForgottenPasswordPost**
```objc
-(NSURLSessionTask*) accountResetForgottenPasswordPostWithBody: (OAIUpdatePasswordData*) body
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Reset a forgotten password with a token

### Example 
```objc

OAIUpdatePasswordData* body = [[OAIUpdatePasswordData alloc] init]; // 

OAIAccountApi*apiInstance = [[OAIAccountApi alloc] init];

// Reset a forgotten password with a token
[apiInstance accountResetForgottenPasswordPostWithBody:body
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAccountApi->accountResetForgottenPasswordPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAIUpdatePasswordData***](OAIUpdatePasswordData.md)|  | 

### Return type

**NSArray<NSObject*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

