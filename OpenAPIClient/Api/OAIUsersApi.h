#import <Foundation/Foundation.h>
#import "OAIDeliveryReclamation.h"
#import "OAIGdprConsent.h"
#import "OAIInlineResponse400.h"
#import "OAIInlineResponse415.h"
#import "OAILegalConsent.h"
#import "OAILoginResponse.h"
#import "OAINewDeliveryReclamation.h"
#import "OAINewUser.h"
#import "OAISubscription.h"
#import "OAISubscriptionPauseDates.h"
#import "OAITemporaryAddressChange.h"
#import "OAIUser.h"
#import "OAIUserUpdate.h"
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



@interface OAIUsersApi: NSObject <OAIApi>

extern NSString* kOAIUsersApiErrorDomain;
extern NSInteger kOAIUsersApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new user.
/// 
///
/// @param body 
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body`",
///  code:415 message:"Unsupported media type"
///
/// @return OAILoginResponse*
-(NSURLSessionTask*) usersPostWithBody: (OAINewUser*) body
    completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;


/// Get users entitlements.
/// 
///
/// @param uuid 
/// @param authorization  (optional)
/// @param cacheControl  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `Cache-Control` or `Authorization`",
///  code:404 message:"`uuid` not found"
///
/// @return NSArray<NSString*>*
-(NSURLSessionTask*) usersUuidEntitlementGetWithUuid: (NSString*) uuid
    authorization: (NSString*) authorization
    cacheControl: (NSString*) cacheControl
    completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;


/// Updates the GDPR consent settings for a given user.
/// Authorization header expects the following format ‘OAuth {token}’
///
/// @param uuid 
/// @param body 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization`",
///  code:404 message:"`uuid` not found",
///  code:415 message:"Unsupported media type"
///
/// @return OAIUser*
-(NSURLSessionTask*) usersUuidGdprPutWithUuid: (NSString*) uuid
    body: (NSArray<OAIGdprConsent>*) body
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;


/// Get user by UUID.
/// Authorization header expects the following format ‘OAuth {token}’
///
/// @param uuid 
/// @param authorization  (optional)
/// @param cacheControl  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `Cache-Control` or `Authorization`",
///  code:404 message:"`uuid` not found"
///
/// @return OAIUser*
-(NSURLSessionTask*) usersUuidGetWithUuid: (NSString*) uuid
    authorization: (NSString*) authorization
    cacheControl: (NSString*) cacheControl
    completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;


/// Updates the legal consent settings for a given user.
/// Authorization header expects the following format ‘OAuth {token}’
///
/// @param uuid 
/// @param body 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization`",
///  code:404 message:"`uuid` not found",
///  code:415 message:"Unsupported media type"
///
/// @return OAIUser*
-(NSURLSessionTask*) usersUuidLegalPutWithUuid: (NSString*) uuid
    body: (NSArray<OAILegalConsent>*) body
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;


/// Update a user
/// Authorization header expects the following format ‘OAuth {token}’
///
/// @param uuid 
/// @param body 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization`",
///  code:404 message:"`uuid` not found",
///  code:415 message:"Unsupported media type"
///
/// @return OAIUser*
-(NSURLSessionTask*) usersUuidPatchWithUuid: (NSString*) uuid
    body: (OAIUserUpdate*) body
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;


/// Make a temporary address change for a subscription
/// 
///
/// @param uuid 
/// @param subsno 
/// @param body 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization`",
///  code:404 message:"`uuid` or `subsno` not found",
///  code:415 message:"Unsupported media type"
///
/// @return OAISubscription*
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoAddressChangePostWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAITemporaryAddressChange*) body
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;


/// Pause users subscription
/// 
///
/// @param uuid 
/// @param subsno 
/// @param body 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization`",
///  code:404 message:"`uuid` or `subsno` not found",
///  code:415 message:"Unsupported media type"
///
/// @return OAISubscription*
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoPausePostWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAISubscriptionPauseDates*) body
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAISubscription* output, NSError* error)) handler;


/// Create a new delivery reclamation for a subscription
/// 
///
/// @param uuid 
/// @param subsno 
/// @param body 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization`",
///  code:404 message:"`uuid` or `subsno` not found",
///  code:415 message:"Unsupported media type"
///
/// @return OAIDeliveryReclamation*
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoReclamationPostWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    body: (OAINewDeliveryReclamation*) body
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAIDeliveryReclamation* output, NSError* error)) handler;


/// Get a delivery reclamation
/// 
///
/// @param uuid 
/// @param subsno 
/// @param reclaimno 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `Authorization`",
///  code:404 message:"`uuid` or `subsno` or `reclaimno` not found"
///
/// @return OAIDeliveryReclamation*
-(NSURLSessionTask*) usersUuidSubscriptionsSubsnoReclamationReclaimnoGetWithUuid: (NSString*) uuid
    subsno: (NSNumber*) subsno
    reclaimno: (NSNumber*) reclaimno
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAIDeliveryReclamation* output, NSError* error)) handler;



@end
