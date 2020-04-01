#import "OAINewUser.h"

@implementation OAINewUser

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"firstName": @"firstName", @"lastName": @"lastName", @"emailAddress": @"emailAddress", @"password": @"password", @"confirmPassword": @"confirmPassword", @"streetAddress": @"streetAddress", @"zipCode": @"zipCode", @"city": @"city", @"country": @"country", @"phone": @"phone", @"legalConsents": @"legalConsents" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"firstName", @"lastName", @"streetAddress", @"zipCode", @"city", @"country", @"phone", ];
  return [optionalProperties containsObject:propertyName];
}

@end
