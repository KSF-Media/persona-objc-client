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


#import "OAIPaperCode.h"
@protocol OAIPaperCode;
@class OAIPaperCode;



@protocol OAIPaper
@end

@interface OAIPaper : OAIObject


@property(nonatomic) OAIPaperCode* code;
/* The name of the paper 
 */
@property(nonatomic) NSString* name;

@end
