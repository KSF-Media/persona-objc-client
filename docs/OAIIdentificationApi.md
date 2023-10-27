# OAIIdentificationApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**identificationLoginGet**](OAIIdentificationApi.md#identificationloginget) | **GET** /identification/login | Authenticate with OpenID Connect
[**identificationLoginMonitorGet**](OAIIdentificationApi.md#identificationloginmonitorget) | **GET** /identification/login/monitor | Get token for off band response login flow monitor
[**identificationLoginReturnGet**](OAIIdentificationApi.md#identificationloginreturnget) | **GET** /identification/login/return | Redirect endpoint for OpenID Connect
[**identificationUserStampUuidPost**](OAIIdentificationApi.md#identificationuserstampuuidpost) | **POST** /identification/user/stamp/{uuid} | Query when the strong identification was last updated


# **identificationLoginGet**
```objc
-(NSURLSessionTask*) identificationLoginGetWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Authenticate with OpenID Connect

### Example 
```objc


OAIIdentificationApi*apiInstance = [[OAIIdentificationApi alloc] init];

// Authenticate with OpenID Connect
[apiInstance identificationLoginGetWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIIdentificationApi->identificationLoginGet: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **identificationLoginMonitorGet**
```objc
-(NSURLSessionTask*) identificationLoginMonitorGetWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Get token for off band response login flow monitor

### Example 
```objc


OAIIdentificationApi*apiInstance = [[OAIIdentificationApi alloc] init];

// Get token for off band response login flow monitor
[apiInstance identificationLoginMonitorGetWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIIdentificationApi->identificationLoginMonitorGet: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **identificationLoginReturnGet**
```objc
-(NSURLSessionTask*) identificationLoginReturnGetWithCode: (NSString*) code
    state: (NSString*) state
    cookie: (NSURL*) cookie
    cookie2: (NSURL*) cookie2
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Redirect endpoint for OpenID Connect

### Example 
```objc

NSString* code = @"code_example"; // 
NSString* state = @"state_example"; // 
NSURL* cookie = [NSURL fileURLWithPath:@"/path/to/file"]; // 
NSURL* cookie2 = [NSURL fileURLWithPath:@"/path/to/file"]; // 

OAIIdentificationApi*apiInstance = [[OAIIdentificationApi alloc] init];

// Redirect endpoint for OpenID Connect
[apiInstance identificationLoginReturnGetWithCode:code
              state:state
              cookie:cookie
              cookie2:cookie2
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIIdentificationApi->identificationLoginReturnGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***|  | 
 **state** | **NSString***|  | 
 **cookie** | **NSURL*****NSURL***|  | 
 **cookie2** | **NSURL*****NSURL***|  | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/html;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **identificationUserStampUuidPost**
```objc
-(NSURLSessionTask*) identificationUserStampUuidPostWithUuid: (NSString*) uuid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Query when the strong identification was last updated

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIIdentificationApi*apiInstance = [[OAIIdentificationApi alloc] init];

// Query when the strong identification was last updated
[apiInstance identificationUserStampUuidPostWithUuid:uuid
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIIdentificationApi->identificationUserStampUuidPost: %@", error);
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

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

