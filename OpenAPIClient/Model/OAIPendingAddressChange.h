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


#import "OAIDeliveryAddress.h"
@protocol OAIDeliveryAddress;
@class OAIDeliveryAddress;



@protocol OAIPendingAddressChange
@end

@interface OAIPendingAddressChange : OAIObject


@property(nonatomic) OAIDeliveryAddress* address;

@property(nonatomic) NSDate* startDate;

@property(nonatomic) NSDate* endDate;

@property(nonatomic) NSString* type;

@end
