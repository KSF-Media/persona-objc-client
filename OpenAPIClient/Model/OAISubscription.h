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


#import "OAICampaign.h"
#import "OAIPackage.h"
#import "OAISubscriptionDates.h"
@protocol OAICampaign;
@class OAICampaign;
@protocol OAIPackage;
@class OAIPackage;
@protocol OAISubscriptionDates;
@class OAISubscriptionDates;



@protocol OAISubscription
@end

@interface OAISubscription : OAIObject


@property(nonatomic) NSNumber* subsno;

@property(nonatomic) NSNumber* extno;

@property(nonatomic) NSNumber* cusno;

@property(nonatomic) NSNumber* paycusno;

@property(nonatomic) NSString* kind;

@property(nonatomic) NSString* state;

@property(nonatomic) NSString* pricegroup;

@property(nonatomic) OAIPackage* package;

@property(nonatomic) OAISubscriptionDates* dates;

@property(nonatomic) NSNumber* extsubsexists;

@property(nonatomic) OAICampaign* campaign;

@end
