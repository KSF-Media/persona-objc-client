#import <Foundation/Foundation.h>
#import "OAIGdprConsent.h"
#import "OAIInlineResponse400.h"
#import "OAIInlineResponse415.h"
#import "OAILoginResponse.h"
#import "OAINewUser.h"
#import "OAIUser.h"
#import "OAIUserUpdate.h"
#import "OAIApi.h"

/**
* Persona
* KSF Media unified login service
*
* OpenAPI spec version: 1.2.0
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
/// @param newUser 
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body`",
///  code:415 message:"Unsupported media type"
///
/// @return OAILoginResponse*
-(NSURLSessionTask*) usersPostWithNewUser: (OAINewUser*) newUser
    completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;


/// Updates the GDPR consent settings for a given user.
/// Authorization header expects the following format ‘OAuth {token}’
///
/// @param uuid 
/// @param gdprConsent 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization`",
///  code:404 message:"`uuid` not found",
///  code:415 message:"Unsupported media type"
///
/// @return OAIUser*
-(NSURLSessionTask*) usersUuidGdprPutWithUuid: (NSString*) uuid
    gdprConsent: (NSArray<OAIGdprConsent>*) gdprConsent
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


/// Update a user
/// Authorization header expects the following format ‘OAuth {token}’
///
/// @param uuid 
/// @param userUpdate 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body` or `Authorization`",
///  code:404 message:"`uuid` not found",
///  code:415 message:"Unsupported media type"
///
/// @return OAIUser*
-(NSURLSessionTask*) usersUuidPatchWithUuid: (NSString*) uuid
    userUpdate: (OAIUserUpdate*) userUpdate
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAIUser* output, NSError* error)) handler;



@end
