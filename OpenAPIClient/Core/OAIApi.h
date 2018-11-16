#import <Foundation/Foundation.h>

@class OAIApiClient;

/**
* Persona
* KSF Media unified login service
*
* OpenAPI spec version: 1.2.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


@protocol OAIApi <NSObject>

@property(readonly, nonatomic, strong) OAIApiClient *apiClient;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient;

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key;
-(NSString*) defaultHeaderForKey:(NSString*)key;

-(NSDictionary *)defaultHeaders;

@end
