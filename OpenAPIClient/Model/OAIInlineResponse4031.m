#import "OAIInlineResponse4031.h"

@implementation OAIInlineResponse4031

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"httpCode": @"http_code", @"accessTokenExpired": @"access_token_expired", @"httpStatus": @"http_status" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"httpCode", @"accessTokenExpired", @"httpStatus"];
  return [optionalProperties containsObject:propertyName];
}

@end
