# OAISubscription

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**subsno** | **NSNumber*** | Subscription Id - primary key together with extno | 
**extno** | **NSNumber*** | Subscription Extension Id - how many times a subscription has been extended | 
**cusno** | **NSNumber*** | Customer getting the subscription | 
**paycusno** | **NSNumber*** | Customer paying for the subscription | 
**kind** | **NSString*** | Subscription kind - what kind of order is it | 
**state** | **NSString*** | Current state of the Subscription | 
**pricegroup** | **NSString*** | Pricegroup of the Subscription | [optional] 
**package** | [**OAIPackage***](OAIPackage.md) |  | 
**dates** | [**OAISubscriptionDates***](OAISubscriptionDates.md) |  | 
**extsubsexists** | **NSNumber*** | If the extension of this subscription exists | 
**campaign** | [**OAIPackageCampaign***](OAIPackageCampaign.md) |  | [optional] 
**paused** | [**NSArray&lt;OAIPausedSubscription&gt;***](OAIPausedSubscription.md) | Pause periods of this subscription | [optional] 
**receiver** | **NSString*** | The name of subscription receiver | [optional] 
**deliveryAddress** | [**OAIDeliveryAddress***](OAIDeliveryAddress.md) |  | [optional] 
**pendingAddressChanges** | [**NSArray&lt;OAIPendingAddressChange&gt;***](OAIPendingAddressChange.md) | Pending and ongoing temporary address changes | [optional] 
**orderNumber** | **NSString*** | Order number of subscription | [optional] 
**paymentMethod** | **NSString*** | Payment method of subscription | [optional] 
**paymentMethodId** | [**OAIPaymentMethodId***](OAIPaymentMethodId.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


