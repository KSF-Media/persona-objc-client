# OAIAdminApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**adminSearchGet**](OAIAdminApi.md#adminsearchget) | **GET** /admin/search | Search for users
[**adminUuidGet**](OAIAdminApi.md#adminuuidget) | **GET** /admin/{uuid} | Get user by admin credentials.


# **adminSearchGet**
```objc
-(NSURLSessionTask*) adminSearchGetWithQuery: (NSString*) query
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<OAIUser>* output, NSError* error)) handler;
```

Search for users

### Example 
```objc

NSString* query = @"query_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Search for users
[apiInstance adminSearchGetWithQuery:query
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSArray<OAIUser>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminSearchGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | **NSString***|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**NSArray<OAIUser>***](OAIUser.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **adminUuidGet**
```objc
-(NSURLSessionTask*) adminUuidGetWithUuid: (NSString*) uuid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    cacheControl: (NSString*) cacheControl
        completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;
```

Get user by admin credentials.

Authorization header expects the following format ‘OAuth {token}’

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)
NSString* cacheControl = @"cacheControl_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Get user by admin credentials.
[apiInstance adminUuidGetWithUuid:uuid
              authUser:authUser
              authorization:authorization
              cacheControl:cacheControl
          completionHandler: ^(OAIUser* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminUuidGet: %@", error);
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

