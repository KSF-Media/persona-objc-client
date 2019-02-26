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


#import "OAIInlineResponse500InternalServerError.h"
@protocol OAIInlineResponse500InternalServerError;
@class OAIInlineResponse500InternalServerError;



@protocol OAIInlineResponse500
@end

@interface OAIInlineResponse500 : OAIObject


@property(nonatomic) NSNumber* httpCode;

@property(nonatomic) NSString* httpStatus;

@property(nonatomic) OAIInlineResponse500InternalServerError* internalServerError;

@end
