#import "OAISubscriptionDates.h"

@implementation OAISubscriptionDates

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"lenDays": @"lenDays", @"lenMonths": @"lenMonths", @"start": @"start", @"end": @"end", @"unpaidBreak": @"unpaidBreak", @"invoicingStart": @"invoicingStart", @"paidUntil": @"paidUntil", @"suspend": @"suspend" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"lenDays", @"lenMonths", @"end", @"unpaidBreak", @"invoicingStart", @"paidUntil", @"suspend"];
  return [optionalProperties containsObject:propertyName];
}

@end
