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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"varNewUserFirstName": @"newUserFirstName", @"varNewUserLastName": @"newUserLastName", @"varNewUserEmailAddress": @"newUserEmailAddress", @"varNewUserPassword": @"newUserPassword", @"varNewUserConfirmPassword": @"newUserConfirmPassword", @"varNewUserStreetAddress": @"newUserStreetAddress", @"varNewUserZipCode": @"newUserZipCode", @"varNewUserCity": @"newUserCity", @"varNewUserCountry": @"newUserCountry", @"varNewUserPhone": @"newUserPhone" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"varNewUserFirstName", @"varNewUserLastName", @"varNewUserStreetAddress", @"varNewUserZipCode", @"varNewUserCity", @"varNewUserCountry", @"varNewUserPhone"];
  return [optionalProperties containsObject:propertyName];
}

@end
