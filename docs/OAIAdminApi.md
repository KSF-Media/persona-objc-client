# OAIAdminApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**adminSearchPost**](OAIAdminApi.md#adminsearchpost) | **POST** /admin/search | Search for users


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

