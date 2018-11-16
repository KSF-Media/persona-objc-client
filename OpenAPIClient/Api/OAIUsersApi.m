#import "OAIUsersApi.h"
#import "OAIQueryParamCollection.h"
#import "OAIApiClient.h"
#import "OAIGdprConsent.h"
#import "OAIInlineResponse400.h"
#import "OAIInlineResponse415.h"
#import "OAIUser.h"


@interface OAIUsersApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation OAIUsersApi

NSString* kOAIUsersApiErrorDomain = @"OAIUsersApiErrorDomain";
NSInteger kOAIUsersApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    return [self initWithApiClient:[OAIApiClient sharedClient]];
}


-(instancetype) initWithApiClient:(OAIApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _mutableDefaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.mutableDefaultHeaders[key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.mutableDefaultHeaders setValue:value forKey:key];
}

-(NSDictionary *)defaultHeaders {
    return self.mutableDefaultHeaders;
}

#pragma mark - Api Methods

///
/// Updates the GDPR consent settings for a given user.
/// Authorization header expects the following format ‘OAuth {token}’
///  @param uuid  
///
///  @param gdprConsent  
///
///  @param authorization  (optional)
///
///  @returns NSArray<NSObject*>*
///
-(NSURLSessionTask*) usersUuidGdprPutWithUuid: (NSString*) uuid
    gdprConsent: (NSArray<OAIGdprConsent>*) gdprConsent
    authorization: (NSString*) authorization
    completionHandler: (void (^)(NSArray<NSObject*>* output, NSError* error)) handler {
    // verify the required parameter 'uuid' is set
    if (uuid == nil) {
        NSParameterAssert(uuid);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"uuid"] };
            NSError* error = [NSError errorWithDomain:kOAIUsersApiErrorDomain code:kOAIUsersApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'gdprConsent' is set
    if (gdprConsent == nil) {
        NSParameterAssert(gdprConsent);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"gdprConsent"] };
            NSError* error = [NSError errorWithDomain:kOAIUsersApiErrorDomain code:kOAIUsersApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{uuid}/gdpr"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (uuid != nil) {
        pathParams[@"uuid"] = uuid;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    if (authorization != nil) {
        headerParams[@"Authorization"] = authorization;
    }
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json;charset=utf-8"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json;charset=utf-8"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    bodyParam = gdprConsent;

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"PUT"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<NSObject*>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<NSObject*>*)data, error);
                                }
                            }];
}

///
/// Get user by UUID.
/// Authorization header expects the following format ‘OAuth {token}’
///  @param uuid  
///
///  @param authorization  (optional)
///
///  @returns OAIUser*
///
-(NSURLSessionTask*) usersUuidGetWithUuid: (NSString*) uuid
    authorization: (NSString*) authorization
    completionHandler: (void (^)(OAIUser* output, NSError* error)) handler {
    // verify the required parameter 'uuid' is set
    if (uuid == nil) {
        NSParameterAssert(uuid);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"uuid"] };
            NSError* error = [NSError errorWithDomain:kOAIUsersApiErrorDomain code:kOAIUsersApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{uuid}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (uuid != nil) {
        pathParams[@"uuid"] = uuid;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    if (authorization != nil) {
        headerParams[@"Authorization"] = authorization;
    }
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json;charset=utf-8"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"OAIUser*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((OAIUser*)data, error);
                                }
                            }];
}



@end
