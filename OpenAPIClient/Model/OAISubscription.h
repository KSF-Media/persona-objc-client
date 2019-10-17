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


#import "OAICampaign.h"
#import "OAIDeliveryAddress.h"
#import "OAIPackage.h"
#import "OAIPausedSubscription.h"
#import "OAIPendingAddressChange.h"
#import "OAISubscriptionDates.h"
@protocol OAICampaign;
@class OAICampaign;
@protocol OAIDeliveryAddress;
@class OAIDeliveryAddress;
@protocol OAIPackage;
@class OAIPackage;
@protocol OAIPausedSubscription;
@class OAIPausedSubscription;
@protocol OAIPendingAddressChange;
@class OAIPendingAddressChange;
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

@property(nonatomic) NSArray<OAIPausedSubscription>* paused;

@property(nonatomic) OAIDeliveryAddress* deliveryAddress;

@property(nonatomic) NSArray<OAIPendingAddressChange>* pendingAddressChanges;

@property(nonatomic) NSString* orderNumber;

@property(nonatomic) NSString* paymentMethod;

@end
