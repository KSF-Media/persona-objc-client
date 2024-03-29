#import "OAISubscription.h"

@implementation OAISubscription

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"subsno": @"subsno", @"extno": @"extno", @"cusno": @"cusno", @"paycusno": @"paycusno", @"kind": @"kind", @"state": @"state", @"pricegroup": @"pricegroup", @"package": @"package", @"dates": @"dates", @"extsubsexists": @"extsubsexists", @"campaign": @"campaign", @"paused": @"paused", @"receiver": @"receiver", @"deliveryAddress": @"deliveryAddress", @"pendingAddressChanges": @"pendingAddressChanges", @"orderNumber": @"orderNumber", @"paymentMethod": @"paymentMethod", @"paymentMethodId": @"paymentMethodId", @"deliveryTroubleEnd": @"deliveryTroubleEnd" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"pricegroup", @"campaign", @"paused", @"receiver", @"deliveryAddress", @"pendingAddressChanges", @"orderNumber", @"paymentMethod", @"paymentMethodId", @"deliveryTroubleEnd"];
  return [optionalProperties containsObject:propertyName];
}

@end
