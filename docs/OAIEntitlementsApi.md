# OAIEntitlementsApi

All URIs are relative to *http://http:/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**entitlementsAllowDelete**](OAIEntitlementsApi.md#entitlementsallowdelete) | **DELETE** /entitlements/allow | Remove an entitlement
[**entitlementsAllowGet**](OAIEntitlementsApi.md#entitlementsallowget) | **GET** /entitlements/allow | Check if global entitlements are enabled
[**entitlementsAllowPost**](OAIEntitlementsApi.md#entitlementsallowpost) | **POST** /entitlements/allow | Add an entitlement for all users
[**entitlementsAllowUuidPost**](OAIEntitlementsApi.md#entitlementsallowuuidpost) | **POST** /entitlements/allow/{uuid} | Grant product access to a customer
[**entitlementsGet**](OAIEntitlementsApi.md#entitlementsget) | **GET** /entitlements | List all entitlements
[**entitlementsGlobalGet**](OAIEntitlementsApi.md#entitlementsglobalget) | **GET** /entitlements/global | Lists all past and future global entitlements


# **entitlementsAllowDelete**
```objc
-(NSURLSessionTask*) entitlementsAllowDeleteWithBody: (NSNumber*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Remove an entitlement

### Example 
```objc

NSNumber* body = @56; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIEntitlementsApi*apiInstance = [[OAIEntitlementsApi alloc] init];

// Remove an entitlement
[apiInstance entitlementsAllowDeleteWithBody:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEntitlementsApi->entitlementsAllowDelete: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | **NSNumber***|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

**NSArray<NSObject*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **entitlementsAllowGet**
```objc
-(NSURLSessionTask*) entitlementsAllowGetWithAuthUser: (NSString*) authUser
    authorization: (NSString*) authorization
    ip: (NSString*) ip
    paper: (NSString*) paper
        completionHandler: (void (^)(NSArray<OAIPersistedEntitlementAccess>* output, NSError* error)) handler;
```

Check if global entitlements are enabled

### Example 
```objc

NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)
NSString* ip = @"ip_example"; //  (optional)
NSString* paper = @"paper_example"; //  (optional)

OAIEntitlementsApi*apiInstance = [[OAIEntitlementsApi alloc] init];

// Check if global entitlements are enabled
[apiInstance entitlementsAllowGetWithAuthUser:authUser
              authorization:authorization
              ip:ip
              paper:paper
          completionHandler: ^(NSArray<OAIPersistedEntitlementAccess>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEntitlementsApi->entitlementsAllowGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 
 **ip** | **NSString***|  | [optional] 
 **paper** | **NSString***|  | [optional] 

### Return type

[**NSArray<OAIPersistedEntitlementAccess>***](OAIPersistedEntitlementAccess.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **entitlementsAllowPost**
```objc
-(NSURLSessionTask*) entitlementsAllowPostWithBody: (OAIEntitlementAccess*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Add an entitlement for all users

### Example 
```objc

OAIEntitlementAccess* body = [[OAIEntitlementAccess alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIEntitlementsApi*apiInstance = [[OAIEntitlementsApi alloc] init];

// Add an entitlement for all users
[apiInstance entitlementsAllowPostWithBody:body
              authUser:authUser
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
 **body** | [**OAIEntitlementAccess***](OAIEntitlementAccess.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

**NSArray<NSObject*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json;charset=utf-8
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **entitlementsAllowUuidPost**
```objc
-(NSURLSessionTask*) entitlementsAllowUuidPostWithUuid: (NSString*) uuid
    body: (OAIEntitlementAccess*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;
```

Grant product access to a customer

### Example 
```objc

NSString* uuid = @"uuid_example"; // 
OAIEntitlementAccess* body = [[OAIEntitlementAccess alloc] init]; // 
NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIEntitlementsApi*apiInstance = [[OAIEntitlementsApi alloc] init];

// Grant product access to a customer
[apiInstance entitlementsAllowUuidPostWithUuid:uuid
              body:body
              authUser:authUser
              authorization:authorization
          completionHandler: ^(NSArray<NSObject*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEntitlementsApi->entitlementsAllowUuidPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uuid** | [**NSString***](.md)|  | 
 **body** | [**OAIEntitlementAccess***](OAIEntitlementAccess.md)|  | 
 **authUser** | [**NSString***](.md)|  | [optional] 
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

# **entitlementsGlobalGet**
```objc
-(NSURLSessionTask*) entitlementsGlobalGetWithAuthUser: (NSString*) authUser
    authorization: (NSString*) authorization
        completionHandler: (void (^)(NSArray<OAIPersistedEntitlementAccess>* output, NSError* error)) handler;
```

Lists all past and future global entitlements

### Example 
```objc

NSString* authUser = @"authUser_example"; //  (optional)
NSString* authorization = @"authorization_example"; //  (optional)

OAIEntitlementsApi*apiInstance = [[OAIEntitlementsApi alloc] init];

// Lists all past and future global entitlements
[apiInstance entitlementsGlobalGetWithAuthUser:authUser
              authorization:authorization
          completionHandler: ^(NSArray<OAIPersistedEntitlementAccess>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling OAIEntitlementsApi->entitlementsGlobalGet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authUser** | [**NSString***](.md)|  | [optional] 
 **authorization** | **NSString***|  | [optional] 

### Return type

[**NSArray<OAIPersistedEntitlementAccess>***](OAIPersistedEntitlementAccess.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json;charset=utf-8

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

