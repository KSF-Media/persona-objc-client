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





@protocol OAILoginData
@end

@interface OAILoginData : OAIObject


@property(nonatomic) NSString* username;

@property(nonatomic) NSString* password;

@property(nonatomic) NSString* mergeToken;

@end
