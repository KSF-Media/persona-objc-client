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





@protocol OAIAddress
@end

@interface OAIAddress : OAIObject


@property(nonatomic) NSString* countryCode;

@property(nonatomic) NSString* zipCode;

@property(nonatomic) NSString* city;

@property(nonatomic) NSString* streetAddress;

@property(nonatomic) NSString* streetName;

@property(nonatomic) NSString* houseNo;

@property(nonatomic) NSString* staircase;

@property(nonatomic) NSString* apartment;

@end
