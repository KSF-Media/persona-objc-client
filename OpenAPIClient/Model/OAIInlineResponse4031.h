#import <Foundation/Foundation.h>
#import "OAIObject.h"

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


#import "OAIInlineResponse4031AccessTokenExpired.h"
@protocol OAIInlineResponse4031AccessTokenExpired;
@class OAIInlineResponse4031AccessTokenExpired;



@protocol OAIInlineResponse4031
@end

@interface OAIInlineResponse4031 : OAIObject


@property(nonatomic) NSNumber* httpCode;

@property(nonatomic) OAIInlineResponse4031AccessTokenExpired* accessTokenExpired;

@property(nonatomic) NSString* httpStatus;

@end
