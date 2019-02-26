# OAIEntitlementsApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**entitlementsGet**](OAIEntitlementsApi.md#entitlementsget) | **GET** /entitlements | List all entitlements


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

