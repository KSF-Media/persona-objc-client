#import "OAIAdminApi.h"
#import "OAIQueryParamCollection.h"
#import "OAIApiClient.h"
#import "OAIUser.h"


@interface OAIAdminApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation OAIAdminApi

NSString* kOAIAdminApiErrorDomain = @"OAIAdminApiErrorDomain";
NSInteger kOAIAdminApiMissingParamErrorCode = 234513;

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
/// Search for users
/// 
///  @param query  
///
///  @param authUser  (optional)
///
///  @param authorization  (optional)
///
///  @returns NSArray<OAIUser>*
///
-(NSURLSessionTask*) adminSearchGetWithQuery: (NSString*) query
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    completionHandler: (void (^)(NSArray<OAIUser>* output, NSError* error)) handler {
    // verify the required parameter 'query' is set
    if (query == nil) {
        NSParameterAssert(query);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"query"] };
            NSError* error = [NSError errorWithDomain:kOAIAdminApiErrorDomain code:kOAIAdminApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/admin/search"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (query != nil) {
        queryParams[@"query"] = query;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    if (authUser != nil) {
        headerParams[@"AuthUser"] = authUser;
    }
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
                              responseType: @"NSArray<OAIUser>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<OAIUser>*)data, error);
                                }
                            }];
}

///
/// Get user by admin credentials.
/// Authorization header expects the following format ‘OAuth {token}’
///  @param uuid  
///
///  @param authUser  (optional)
///
///  @param authorization  (optional)
///
///  @param cacheControl  (optional)
///
///  @returns OAIUser*
///
-(NSURLSessionTask*) adminUuidGetWithUuid: (NSString*) uuid
    authUser: (NSString*) authUser
    authorization: (NSString*) authorization
    cacheControl: (NSString*) cacheControl
    completionHandler: (void (^)(OAIUser* output, NSError* error)) handler {
    // verify the required parameter 'uuid' is set
    if (uuid == nil) {
        NSParameterAssert(uuid);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"uuid"] };
            NSError* error = [NSError errorWithDomain:kOAIAdminApiErrorDomain code:kOAIAdminApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/admin/{uuid}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (uuid != nil) {
        pathParams[@"uuid"] = uuid;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    if (authUser != nil) {
        headerParams[@"AuthUser"] = authUser;
    }
    if (authorization != nil) {
        headerParams[@"Authorization"] = authorization;
    }
    if (cacheControl != nil) {
        headerParams[@"Cache-Control"] = cacheControl;
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
