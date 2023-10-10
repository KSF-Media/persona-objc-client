#import <Foundation/Foundation.h>
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



@interface OAIIdentificationApi: NSObject <OAIApi>

extern NSString* kOAIIdentificationApiErrorDomain;
extern NSInteger kOAIIdentificationApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Authenticate with OpenID Connect
/// 
///
/// 
///  code:302 message:""
///
/// @return void
-(NSURLSessionTask*) identificationLoginGetWithCompletionHandler: 
    (void (^)(NSError* error)) handler;


/// Redirect endpoint for OpenID Connect
/// 
///
/// @param code 
/// @param state 
/// @param cookie 
/// @param cookie2 
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `cookie` or `cookie` or `state` or `code`"
///
/// @return NSString*
-(NSURLSessionTask*) identificationLoginReturnGetWithCode: (NSString*) code
    state: (NSString*) state
    cookie: (NSURL*) cookie
    cookie2: (NSURL*) cookie2
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


/// Query when the strong identification was last updated
/// Authorization header expects the following format ‘OAuth {token}’
///
/// @param uuid 
/// @param authUser  (optional)
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `uuid` or `Authorization` or `AuthUser`"
///
/// @return NSString*
-(NSURLSessionTask*) identificationUserStampUuidPostWithUuid: (NSString*) uuid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;



@end
