#import "OAIPayment.h"

@implementation OAIPayment

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"invno": @"invno", @"date": @"date", @"dueDate": @"dueDate", @"expenses": @"expenses", @"interest": @"interest", @"vat": @"vat", @"amount": @"amount", @"openAmount": @"openAmount", @"type": @"type", @"state": @"state", @"discPercent": @"discPercent", @"discAmount": @"discAmount", @"reference": @"reference" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"date", @"dueDate", @"discPercent", @"discAmount", @"reference"];
  return [optionalProperties containsObject:propertyName];
}

@end
