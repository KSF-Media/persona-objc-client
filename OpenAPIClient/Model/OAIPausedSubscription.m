#import "OAIPausedSubscription.h"

@implementation OAIPausedSubscription

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"pausedSubscriptionSubsno": @"pausedSubscriptionSubsno", @"pausedSubscriptionSleepStartDate": @"pausedSubscriptionSleepStartDate", @"pausedSubscriptionSleepEndDate": @"pausedSubscriptionSleepEndDate", @"pausedSubscriptionCreditType": @"pausedSubscriptionCreditType", @"pausedSubscriptionCreditAmount": @"pausedSubscriptionCreditAmount", @"pausedSubscriptionSleepType": @"pausedSubscriptionSleepType", @"pausedSubscriptionCredited": @"pausedSubscriptionCredited", @"pausedSubscriptionCreditInvno": @"pausedSubscriptionCreditInvno", @"pausedSubscriptionBookingDate": @"pausedSubscriptionBookingDate", @"pausedSubscriptionAllowWebpaper": @"pausedSubscriptionAllowWebpaper", @"pausedSubscriptionReceiveType": @"pausedSubscriptionReceiveType", @"pausedSubscriptionConfirmStatus": @"pausedSubscriptionConfirmStatus", @"pausedSubscriptionStampUser": @"pausedSubscriptionStampUser" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[];
  return [optionalProperties containsObject:propertyName];
}

@end
