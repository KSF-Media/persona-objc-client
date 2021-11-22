# OAIAccountApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**accountPasswordForgotGet**](OAIAccountApi.md#accountpasswordforgotget) | **GET** /account/password/forgot | Request password reset link
[**accountPasswordForgotPost**](OAIAccountApi.md#accountpasswordforgotpost) | **POST** /account/password/forgot | Request password reset link
[**accountPasswordResetPost**](OAIAccountApi.md#accountpasswordresetpost) | **POST** /account/password/reset | Reset a forgotten password with a token


# **accountPasswordForgotGet**
```objc
-(NSURLSessionTask*) accountPasswordForgotGetWithEmail: (NSString*) email
    redir: (NSNumber*) redir
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Request password reset link

### Example 
```objc

NSString* email = @"email_example"; // 
NSNumber* redir = @56; //  (optional)

OAIAccountApi*apiInstance = [[OAIAccountApi alloc] init];

// Request password reset link
[apiInstance accountPasswordForgotGetWithEmail:email
              redir:redir
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAccountApi->accountPasswordForgotGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **email** | **NSString***|  | 
 **redir** | **NSNumber***|  | [optional] 

### Return type

**NSArray<NSObject*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **accountPasswordForgotPost**
```objc
-(NSURLSessionTask*) accountPasswordForgotPostWithBody: (OAIForgotPasswordData*) body
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Request password reset link

### Example 
```objc

OAIForgotPasswordData* body = [[OAIForgotPasswordData alloc] init]; // 

OAIAccountApi*apiInstance = [[OAIAccountApi alloc] init];

// Request password reset link
[apiInstance accountPasswordForgotPostWithBody:body
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
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

**NSArray<NSObject*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **accountPasswordResetPost**
```objc
-(NSURLSessionTask*) accountPasswordResetPostWithBody: (OAIUpdatePasswordData*) body
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Reset a forgotten password with a token

### Example 
```objc

OAIUpdatePasswordData* body = [[OAIUpdatePasswordData alloc] init]; // 

OAIAccountApi*apiInstance = [[OAIAccountApi alloc] init];

// Reset a forgotten password with a token
[apiInstance accountPasswordResetPostWithBody:body
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
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

**NSArray<NSObject*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

