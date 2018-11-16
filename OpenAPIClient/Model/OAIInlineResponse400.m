#import "OAIInlineResponse400.h"

@implementation OAIInlineResponse400

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"httpCode": @"http_code", @"invalidRequestBody": @"invalid_request_body", @"httpStatus": @"http_status" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"httpCode", @"invalidRequestBody", @"httpStatus"];
  return [optionalProperties containsObject:propertyName];
}

@end
