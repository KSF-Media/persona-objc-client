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
#import "OAIPackage.h"
#import "OAIPackageCampaign.h"
#import "OAIPausedSubscription.h"
#import "OAIPendingAddressChange.h"
#import "OAISubscriptionDates.h"
@protocol OAIDeliveryAddress;
@class OAIDeliveryAddress;
@protocol OAIPackage;
@class OAIPackage;
@protocol OAIPackageCampaign;
@class OAIPackageCampaign;
@protocol OAIPausedSubscription;
@class OAIPausedSubscription;
@protocol OAIPendingAddressChange;
@class OAIPendingAddressChange;
@protocol OAISubscriptionDates;
@class OAISubscriptionDates;



@protocol OAISubscription
@end

@interface OAISubscription : OAIObject

/* Subscription Id - primary key together with extno 
 */
@property(nonatomic) NSNumber* subsno;
/* Subscription Extension Id - how many times a subscription has been extended 
 */
@property(nonatomic) NSNumber* extno;
/* Customer getting the subscription 
 */
@property(nonatomic) NSNumber* cusno;
/* Customer paying for the subscription 
 */
@property(nonatomic) NSNumber* paycusno;

@property(nonatomic) NSString* kind;

@property(nonatomic) NSString* state;

@property(nonatomic) NSString* pricegroup;

@property(nonatomic) OAIPackage* package;

@property(nonatomic) OAISubscriptionDates* dates;
/* If the extension of this subscription exists 
 */
@property(nonatomic) NSNumber* extsubsexists;

@property(nonatomic) OAIPackageCampaign* campaign;
/* Pause periods of this subscription [optional]
 */
@property(nonatomic) NSArray<OAIPausedSubscription>* paused;
/* The name of subscription receiver [optional]
 */
@property(nonatomic) NSString* receiver;

@property(nonatomic) OAIDeliveryAddress* deliveryAddress;
/* Pending and ongoing temporary address changes [optional]
 */
@property(nonatomic) NSArray<OAIPendingAddressChange>* pendingAddressChanges;
/* Order number of subscription [optional]
 */
@property(nonatomic) NSString* orderNumber;

@property(nonatomic) NSString* paymentMethod;

@property(nonatomic) NSNumber* paymentMethodId;

@property(nonatomic) NSString* deliveryTroubleEnd;

@end
