# OAIPackage

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **NSString*** | Package identifier | 
**name** | **NSString*** | Package name | 
**paper** | [**OAIPaper***](OAIPaper.md) |  | 
**digitalOnly** | **NSNumber*** | All products in this package are digital | 
**products** | [**NSArray&lt;OAIProduct&gt;***](OAIProduct.md) | The Products contained in a package | 
**offers** | [**NSArray&lt;OAIPackageOffer&gt;***](OAIPackageOffer.md) | Offers for the package | 
**campaigns** | [**NSArray&lt;OAIPackageCampaign&gt;***](OAIPackageCampaign.md) | Active campaigns for the package | 
**nextDelivery** | **NSDate*** |  | [optional] 
**canPause** | **NSNumber*** | Does the package allow delivery pauses | 
**canTempAddr** | **NSNumber*** | Does the package allow temporary address changes | 
**_description** | [**OAIPackageDescription***](OAIPackageDescription.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


