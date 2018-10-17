#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Persona
* KSF Media unified login service
*
* OpenAPI spec version: 1.1.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIActiveDays.h"
@protocol OAIActiveDays;
@class OAIActiveDays;



@protocol OAIProduct
@end

@interface OAIProduct : OAIObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* name;

@property(nonatomic) OAIActiveDays* active;

@property(nonatomic) NSDate* nextDelivery;

@end
