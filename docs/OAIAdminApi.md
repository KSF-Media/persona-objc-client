# OAIAdminApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**adminSearchPost**](OAIAdminApi.md#adminsearchpost) | **POST** /admin/search | Search for users
[**adminUserPost**](OAIAdminApi.md#adminuserpost) | **POST** /admin/user | Create a new user with admin options.


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

