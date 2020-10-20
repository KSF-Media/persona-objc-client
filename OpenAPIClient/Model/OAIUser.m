#import "OAIUser.h"

@implementation OAIUser

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"uuid": @"uuid", @"email": @"email", @"firstName": @"firstName", @"lastName": @"lastName", @"address": @"address", @"cusno": @"cusno", @"subs": @"subs", @"consent": @"consent", @"legal": @"legal", @"pendingAddressChanges": @"pendingAddressChanges", @"pastTemporaryAddresses": @"pastTemporaryAddresses", @"hasCompletedRegistration": @"hasCompletedRegistration" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"firstName", @"lastName", @"address", @"pendingAddressChanges", ];
  return [optionalProperties containsObject:propertyName];
}

@end
