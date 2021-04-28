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





@protocol OAIDeliveryReclamation
@end

@interface OAIDeliveryReclamation : OAIObject

/* The reclamation identifier 
 */
@property(nonatomic) NSNumber* number;
/* The identifier of the customer that made reclamation 
 */
@property(nonatomic) NSNumber* customerNumber;
/* The identifier of the subscription for which reclamation was made 
 */
@property(nonatomic) NSNumber* subscriptionNumber;

@property(nonatomic) NSDate* date;

@property(nonatomic) NSString* paper;

@property(nonatomic) NSDate* publicationDate;
/* The type of claim for the reclamation 
 */
@property(nonatomic) NSString* claim;

@end
