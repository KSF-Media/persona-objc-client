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





@protocol OAIAddress
@end

@interface OAIAddress : OAIObject

/* Country code 
 */
@property(nonatomic) NSString* countryCode;
/* Zip code [optional]
 */
@property(nonatomic) NSString* zipCode;
/* City [optional]
 */
@property(nonatomic) NSString* city;
/* Street address, containing all details 
 */
@property(nonatomic) NSString* streetAddress;
/* Street name [optional]
 */
@property(nonatomic) NSString* streetName;
/* House number [optional]
 */
@property(nonatomic) NSString* houseNo;
/* Staircase letter [optional]
 */
@property(nonatomic) NSString* staircase;
/* Apartment number [optional]
 */
@property(nonatomic) NSString* apartment;

@end
