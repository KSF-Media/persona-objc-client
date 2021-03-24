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


#import "OAIPrice.h"
@protocol OAIPrice;
@class OAIPrice;



@protocol OAIPackageOffer
@end

@interface OAIPackageOffer : OAIObject

/* Duration of the offer 
 */
@property(nonatomic) NSNumber* months;

@property(nonatomic) OAIPrice* totalPrice;

@property(nonatomic) OAIPrice* monthlyPrice;

@end
