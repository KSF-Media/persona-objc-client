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





@protocol OAINewUser
@end

@interface OAINewUser : OAIObject


@property(nonatomic) NSString* firstName;

@property(nonatomic) NSString* lastName;

@property(nonatomic) NSString* emailAddress;

@property(nonatomic) NSString* password;

@property(nonatomic) NSString* confirmPassword;

@property(nonatomic) NSString* streetAddress;

@property(nonatomic) NSString* zipCode;

@property(nonatomic) NSString* city;

@property(nonatomic) NSString* country;

@property(nonatomic) NSString* phone;

@end
