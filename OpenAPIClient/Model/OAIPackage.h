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
#import "OAIPackageDescription.h"
#import "OAIPackageOffer.h"
#import "OAIPaper.h"
#import "OAIProduct.h"
@protocol OAICampaign;
@class OAICampaign;
@protocol OAIPackageDescription;
@class OAIPackageDescription;
@protocol OAIPackageOffer;
@class OAIPackageOffer;
@protocol OAIPaper;
@class OAIPaper;
@protocol OAIProduct;
@class OAIProduct;



@protocol OAIPackage
@end

@interface OAIPackage : OAIObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* name;

@property(nonatomic) OAIPaper* paper;

@property(nonatomic) NSArray<OAIProduct>* products;

@property(nonatomic) NSArray<OAIPackageOffer>* offers;

@property(nonatomic) NSArray<OAICampaign>* campaigns;

@property(nonatomic) NSDate* nextDelivery;

@property(nonatomic) OAIPackageDescription* _description;

@end
