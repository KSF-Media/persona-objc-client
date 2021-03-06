#import <Foundation/Foundation.h>
#import "OAIAdminNewUser.h"
#import "OAIInlineResponse400.h"
#import "OAIInlineResponse415.h"
#import "OAILoginResponse.h"
#import "OAISearchQuery.h"
#import "OAISearchResult.h"
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



@interface OAIAdminApi: NSObject <OAIApi>

extern NSString* kOAIAdminApiErrorDomain;
extern NSInteger kOAIAdminApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Search for users
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
/// @return NSArray<OAISearchResult>*
-(NSURLSessionTask*) adminSearchPostWithBody: (OAISearchQuery*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    completionHandler: (void (^)(NSArray<OAISearchResult>* output, NSError* error)) handler;


/// Create a new user with admin options.
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
/// @return OAILoginResponse*
-(NSURLSessionTask*) adminUserPostWithBody: (OAIAdminNewUser*) body
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAILoginResponse* output, NSError* error)) handler;



@end
