# OAIAdminApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**adminSearchPost**](OAIAdminApi.md#adminsearchpost) | **POST** /admin/search | Search for users
[**adminTransferPassiveSubscribersListidPost**](OAIAdminApi.md#admintransferpassivesubscriberslistidpost) | **POST** /admin/transfer-passive-subscribers/{listid} | Transfers passive customers from Kayak to Mailchimp
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

# **adminTransferPassiveSubscribersListidPost**
```objc
-(NSURLSessionTask*) adminTransferPassiveSubscribersListidPostWithListid: (NSString*) listid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSError* error)) handler;
```

Transfers passive customers from Kayak to Mailchimp

Passive subscribers/members/customers are users who don't have active entitlements and haven't opted out from email marketing. For the given list (audience) ID, this endpoint transfers the list of passive subscribers from Kayak to Mailchimp (via Faro).

### Example 
```objc

NSString* listid = @"listid_example"; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIAdminApi*apiInstance = [[OAIAdminApi alloc] init];

// Transfers passive customers from Kayak to Mailchimp
[apiInstance adminTransferPassiveSubscribersListidPostWithListid:listid
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling OAIAdminApi->adminTransferPassiveSubscribersListidPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **listid** | **NSString***|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

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

