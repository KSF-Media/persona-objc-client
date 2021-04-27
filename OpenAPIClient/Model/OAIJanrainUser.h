#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Persona
* KSF Media unified login service
*
* The version of the OpenAPI document: 1.3.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIGdprConsent.h"
#import "OAILegalConsent.h"
@protocol OAIGdprConsent;
@class OAIGdprConsent;
@protocol OAILegalConsent;
@class OAILegalConsent;



@protocol OAIJanrainUser
@end

@interface OAIJanrainUser : OAIObject


@property(nonatomic) NSString* uuid;

@property(nonatomic) NSString* email;

@property(nonatomic) NSString* firstName;

@property(nonatomic) NSString* lastName;

@property(nonatomic) NSString* middleName;

@property(nonatomic) NSArray<OAIGdprConsent>* consent;

@property(nonatomic) NSArray<OAILegalConsent>* legal;

@property(nonatomic) NSString* cusno;

@property(nonatomic) NSArray<NSString*>* otherCusnos;

@end