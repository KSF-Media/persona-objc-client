#import <Foundation/Foundation.h>
#import "OAIObject.h"

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





@protocol OAIDescriptionFrequency
@end

@interface OAIDescriptionFrequency : OAIObject

/* Frequency number for the package 
 */
@property(nonatomic) NSNumber* amount;
/* Unit in which the number is measured 
 */
@property(nonatomic) NSString* unit;

@end
