#import "OAIPackage.h"

@implementation OAIPackage

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"name": @"name", @"info": @"info", @"paper": @"paper", @"digitalOnly": @"digitalOnly", @"products": @"products", @"offers": @"offers", @"campaigns": @"campaigns", @"nextDelivery": @"nextDelivery", @"canPause": @"canPause", @"canTempAddr": @"canTempAddr" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"nextDelivery", ];
  return [optionalProperties containsObject:propertyName];
}

@end
