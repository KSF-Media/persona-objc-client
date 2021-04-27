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


#import "OAIAddress.h"
#import "OAISubscription.h"
@protocol OAIAddress;
@class OAIAddress;
@protocol OAISubscription;
@class OAISubscription;



@protocol OAIFaroUser
@end

@interface OAIFaroUser : OAIObject


@property(nonatomic) NSNumber* cusno;

@property(nonatomic) NSString* name;

@property(nonatomic) OAIAddress* address;

@property(nonatomic) NSString* email;

@property(nonatomic) NSArray<OAISubscription>* subscriptions;

@end
