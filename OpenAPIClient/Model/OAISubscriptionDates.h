#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Persona
* KSF Media unified login service
*
* OpenAPI spec version: 1.2.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol OAISubscriptionDates
@end

@interface OAISubscriptionDates : OAIObject


@property(nonatomic) NSNumber* lenMonths;

@property(nonatomic) NSNumber* lenDays;

@property(nonatomic) NSDate* start;

@property(nonatomic) NSDate* end;

@property(nonatomic) NSDate* unpaidBreak;

@property(nonatomic) NSDate* invoicingStart;

@property(nonatomic) NSDate* paidUntil;

@property(nonatomic) NSDate* suspend;

@end
