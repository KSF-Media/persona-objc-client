#import "OAIInlineResponse4032.h"

@implementation OAIInlineResponse4032

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"emailAddressInUse": @"email_address_in_use", @"httpCode": @"http_code", @"oauthFailed": @"oauth_failed", @"httpStatus": @"http_status", @"emailNotAuthorized": @"email_not_authorized" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"emailAddressInUse", @"httpCode", @"oauthFailed", @"httpStatus", @"emailNotAuthorized"];
  return [optionalProperties containsObject:propertyName];
}

@end
