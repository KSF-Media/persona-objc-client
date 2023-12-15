# OAIAccountApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**accountPasswordCheckTokenPost**](OAIAccountApi.md#accountpasswordchecktokenpost) | **POST** /account/password/check-token | Validate password reset token
[**accountPasswordForgotPost**](OAIAccountApi.md#accountpasswordforgotpost) | **POST** /account/password/forgot | Request password reset link
[**accountPasswordResetPost**](OAIAccountApi.md#accountpasswordresetpost) | **POST** /account/password/reset | Reset a forgotten password with a token


# **accountPasswordCheckTokenPost**
```objc
-(NSURLSessionTask*) accountPasswordCheckTokenPostWithBody: (NSString*) body
        completionHandler: (void (^)(NSError* error)) handler;
```

Validate password reset token

The second step in the forgotten password reset procedure is to ensure that the password reset token is still valid. Each token can be used at most once and it is valid for a limited duration.

### Example 
```objc

NSString* body = @"body_example"; // 

OAIAccountApi*apiInstance = [[OAIAccountApi alloc] init];

// Validate password reset token
[apiInstance accountPasswordCheckTokenPostWithBody:body
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIAccountApi->accountPasswordCheckTokenPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **NSString***|  | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **accountPasswordForgotPost**
```objc
-(NSURLSessionTask*) accountPasswordForgotPostWithBody: (OAIForgotPasswordData*) body
        completionHandler: (void (^)(NSError* error)) handler;
```

Request password reset link

This is the starting point of the forgotten password recovery process. It sends a password reset link with a pasword reset token to the given user's email address if such user and email address exist.

### Example 
```objc

OAIForgotPasswordData* body = [[OAIForgotPasswordData alloc] init]; // 

OAIAccountApi*apiInstance = [[OAIAccountApi alloc] init];

// Request password reset link
[apiInstance accountPasswordForgotPostWithBody:body
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIAccountApi->accountPasswordForgotPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAIForgotPasswordData***](OAIForgotPasswordData.md)|  | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **accountPasswordResetPost**
```objc
-(NSURLSessionTask*) accountPasswordResetPostWithBody: (OAIUpdatePasswordData*) body
        completionHandler: (void (^)(NSError* error)) handler;
```

Reset a forgotten password with a token

The final step of the forgotten password reset procedure performs password reset with a token obtained from the email message sent by the POST /password/forgot endpoint and the new password and its confirmation. If @password@ or @confirmPassword@ are missing, then this endpoint performs a mere token validation like the @/password/check-token@ endpoint.

### Example 
```objc

OAIUpdatePasswordData* body = [[OAIUpdatePasswordData alloc] init]; // 

OAIAccountApi*apiInstance = [[OAIAccountApi alloc] init];

// Reset a forgotten password with a token
[apiInstance accountPasswordResetPostWithBody:body
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIAccountApi->accountPasswordResetPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAIUpdatePasswordData***](OAIUpdatePasswordData.md)|  | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

