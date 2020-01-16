# OAIEntitlementsApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**entitlementsAllowPost**](OAIEntitlementsApi.md#entitlementsallowpost) | **POST** /entitlements/allow | 
[**entitlementsGet**](OAIEntitlementsApi.md#entitlementsget) | **GET** /entitlements | List all entitlements


# **entitlementsAllowPost**
```objc
-(NSURLSessionTask*) entitlementsAllowPostWithBody: (OAIGlobalEntitlementAccess*) body
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```



### Example 
```objc

OAIGlobalEntitlementAccess* body = [[OAIGlobalEntitlementAccess alloc] init]; // 
NSString* authorization = @"authorization_example"; //  (optional)

OAIEntitlementsApi*apiInstance = [[OAIEntitlementsApi alloc] init];

[apiInstance entitlementsAllowPostWithBody:body
              authorization:authorization
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEntitlementsApi->entitlementsAllowPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**OAIGlobalEntitlementAccess***](OAIGlobalEntitlementAccess.md)|  | 
 **authorization** | **NSString***|  | [optional] 

### Return type

**NSArray<NSObject*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **entitlementsGet**
```objc
-(NSURLSessionTask*) entitlementsGetWithCompletionHandler: 
        (void (^)(NSDictionary<NSString*, NSArray<NSString*>*>* output, NSError* error)) handler;
```

List all entitlements

### Example 
```objc


OAIEntitlementsApi*apiInstance = [[OAIEntitlementsApi alloc] init];

// List all entitlements
[apiInstance entitlementsGetWithCompletionHandler: 
          ^(NSDictionary<NSString*, NSArray<NSString*>*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEntitlementsApi->entitlementsGet: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSDictionary<NSString*, NSArray<NSString*>*>***](NSArray.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

