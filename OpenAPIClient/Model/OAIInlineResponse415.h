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


#import "OAIInlineResponse415UnsupportedMediaType.h"
@protocol OAIInlineResponse415UnsupportedMediaType;
@class OAIInlineResponse415UnsupportedMediaType;



@protocol OAIInlineResponse415
@end

@interface OAIInlineResponse415 : OAIObject


@property(nonatomic) NSNumber* httpCode;

@property(nonatomic) OAIInlineResponse415UnsupportedMediaType* unsupportedMediaType;

@property(nonatomic) NSString* httpStatus;

@end
