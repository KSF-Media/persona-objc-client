#import "OAIPastTemporaryAddress.h"

@implementation OAIPastTemporaryAddress

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"countryCode": @"countryCode", @"zipcode": @"zipcode", @"cityName": @"cityName", @"street": @"street", @"temporaryName": @"temporaryName" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"cityName", @"temporaryName"];
  return [optionalProperties containsObject:propertyName];
}

@end
