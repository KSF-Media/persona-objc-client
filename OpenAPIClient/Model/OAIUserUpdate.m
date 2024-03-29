#import "OAIUserUpdate.h"

@implementation OAIUserUpdate

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"firstName": @"firstName", @"lastName": @"lastName", @"address": @"address", @"email": @"email", @"phone": @"phone", @"pendingAddressChanges": @"pendingAddressChanges", @"updateCusno": @"updateCusno" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"firstName", @"lastName", @"address", @"email", @"phone", @"pendingAddressChanges", @"updateCusno"];
  return [optionalProperties containsObject:propertyName];
}

@end
