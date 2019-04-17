#import <Foundation/Foundation.h>
#import "OAIInlineResponse400.h"
#import "OAIInlineResponse403.h"
#import "OAIInlineResponse4031.h"
#import "OAIInlineResponse4032.h"
#import "OAIInlineResponse415.h"
#import "OAIInlineResponse500.h"
#import "OAILoginData.h"
#import "OAILoginDataSSO.h"
#import "OAILoginDataSoMe.h"
#import "OAILoginResponse.h"
#import "OAIApi.h"

/**
* Persona
* KSF Media unified login service
*
* OpenAPI spec version: 1.3.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface OAILoginApi: NSObject <OAIApi>

extern NSString* kOAILoginApiErrorDomain;
extern NSInteger kOAILoginApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Login with email and password
/// 
///
/// @param body 
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body`",
///  code:403 message:"Forbidden",
///  code:415 message:"Unsupported media type",
///  code:500 message:"Internal server error"
///
/// @return OAILoginResponse*
-(NSURLSessionTask*) loginPostWithBody: (OAILoginData*) body
    completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;


/// Login with social media
/// 
///
/// @param body 
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body`",
///  code:403 message:"Forbidden",
///  code:415 message:"Unsupported media type",
///  code:500 message:"Internal server error"
///
/// @return OAILoginResponse*
-(NSURLSessionTask*) loginSomePostWithBody: (OAILoginDataSoMe*) body
    completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;


/// Login with the AccessToken given by the SSO auth
/// 
///
/// @param body 
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body`",
///  code:403 message:"Forbidden",
///  code:415 message:"Unsupported media type",
///  code:500 message:"Internal server error"
///
/// @return OAILoginResponse*
-(NSURLSessionTask*) loginSsoPostWithBody: (OAILoginDataSSO*) body
    completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;


/// Logout
/// Authorization header expects the following format ‘OAuth {token}’
///
/// @param uuid 
/// @param authorization  (optional)
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `Authorization`",
///  code:404 message:"`uuid` not found"
///
/// @return NSArray<NSObject*>*
-(NSURLSessionTask*) loginUuidDeleteWithUuid: (NSString*) uuid
    authorization: (NSString*) authorization
    completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler;



@end
