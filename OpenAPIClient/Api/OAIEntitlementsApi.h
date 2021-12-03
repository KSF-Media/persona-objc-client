#import <Foundation/Foundation.h>
#import "OAIEntitlementAccess.h"
#import "OAIInlineResponse400.h"
#import "OAIInlineResponse415.h"
#import "OAIApi.h"

/**
* Persona
* KSF Media unified login service
*
* The version of the OpenAPI document: 1.3.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface OAIEntitlementsApi: NSObject <OAIApi>

extern NSString* kOAIEntitlementsApiErrorDomain;
extern NSInteger kOAIEntitlementsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Check if global entitlements are enabled
/// 
///
/// @param authUser  (optional)
/// @param authorization  (optional)
/// @param ip  (optional)
/// @param paper  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `paper` or `ip` or `Authorization` or `AuthUser`"
///
/// @return NSArray<NSString*>*
-(NSURLSessionTask*) entitlementsAllowGetWithAuthUser: (NSString*) authUser
    authorization: (NSString*) authorization
    ip: (NSString*) ip
    paper: (NSString*) paper
    completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;


/// 
/// 
///
/// @param body 
/// @param authUser  (optional)
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization` or `AuthUser`",
///  code:415 message:"Unsupported media type"
///
/// @return NSArray<NSObject*>*
-(NSURLSessionTask*) entitlementsAllowPostWithBody: (OAIEntitlementAccess*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;


/// Grant product access to a customer
/// 
///
/// @param uuid 
/// @param body 
/// @param authUser  (optional)
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization` or `AuthUser`",
///  code:404 message:"`uuid` not found",
///  code:415 message:"Unsupported media type"
///
/// @return NSArray<NSObject*>*
-(NSURLSessionTask*) entitlementsAllowUuidPostWithUuid: (NSString*) uuid
    body: (OAIEntitlementAccess*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;


/// List all entitlements
/// 
///
/// 
///  code:200 message:""
///
/// @return NSDictionary<NSString*, NSArray<NSString*>*>*
-(NSURLSessionTask*) entitlementsGetWithCompletionHandler: 
    (void (^)(NSDictionary<NSString*, NSArray<NSString*>*>* output, NSError* error)) handler;



@end
