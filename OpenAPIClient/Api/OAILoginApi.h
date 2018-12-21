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
* OpenAPI spec version: 1.2.0
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
/// @param loginData 
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body`",
///  code:403 message:"Forbidden",
///  code:415 message:"Unsupported media type",
///  code:500 message:"Internal server error"
///
/// @return OAILoginResponse*
-(NSURLSessionTask*) loginPostWithLoginData: (OAILoginData*) loginData
    completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;


/// Login with social media
/// 
///
/// @param loginDataSoMe 
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body`",
///  code:403 message:"Forbidden",
///  code:415 message:"Unsupported media type",
///  code:500 message:"Internal server error"
///
/// @return OAILoginResponse*
-(NSURLSessionTask*) loginSomePostWithLoginDataSoMe: (OAILoginDataSoMe*) loginDataSoMe
    completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;


/// Login with the AccessToken given by the SSO auth
/// 
///
/// @param loginDataSSO 
/// 
///  code:200 message:"",
///  code:400 message:"Invalid `body`",
///  code:403 message:"Forbidden",
///  code:415 message:"Unsupported media type",
///  code:500 message:"Internal server error"
///
/// @return OAILoginResponse*
-(NSURLSessionTask*) loginSsoPostWithLoginDataSSO: (OAILoginDataSSO*) loginDataSSO
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
