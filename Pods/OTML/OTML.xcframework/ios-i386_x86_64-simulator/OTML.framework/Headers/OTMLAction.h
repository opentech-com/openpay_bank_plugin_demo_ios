//
//  OTMLAction.h
//  OTML
//
//  Created by enrico on 04/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



#import <OTMLModels/TBXML+Unescape.h>
#import "OTMLNewCondition.h"
#import "OTMLDatasource.h"

#define OTML_VALIDATION_EXCEPTION_SRCID_KEY @"otml_validationexception_srcid"
#define OTML_VALIDATION_EXCEPTION_ERRORMESSAGE_KEY @"otml_validationexception_error_message"

@class OTMLNewCondition;
@class OTMLViewController;
@class OTMLComponent;
@class OTMLActionModel;


@interface OTMLValidationException : NSException

+(NSException *)exceptionWithMessage:(NSString*)aMessage forComponent:(OTMLComponent*)aCompoent;

-(NSString*) getSrcID;
-(NSString*) getErrorMessage;

@end

@interface OTMLMultiValidationException : NSException

@property (nonatomic, strong) NSArray<OTMLValidationException*>* exceptions;
+(void) raiseExceptions:(NSArray<OTMLValidationException*>*) arrayOfException;

@end

@interface OTMLAction : NSObject<NSCopying>

-(id)initWithType:(NSString*)_type withTarget:(NSString*)_target withTrigger:(NSString*)_trigger andParameters:(NSDictionary*)_parameters;
-(id)initWithType:(NSString*)_type withTarget:(NSString*)_target withTrigger:(NSString*)_trigger andParameters:(NSDictionary*)_parameters andUnresolvedParameters:(NSArray*) _unresolvedParams;
-(id)initWithType:(NSString*)_type withTarget:(NSString*)_target withTrigger:(NSString*)_trigger andParameters:(NSDictionary*)_parameters andUnresolvedParameters:(NSArray*) _unresolvedParams andCondition:(NSArray*) _condictions;
-(id)initWithModel:(OTMLActionModel*)aModel;
-(id)initWithDatasouceElement:(OTMLDatasource*)actionDS;


@property (strong, nonatomic, readonly) NSString* target;
@property (nonatomic, strong)  NSString* trigger;
@property (strong, nonatomic, readonly)  NSString* type;
@property (strong, nonatomic, readonly)  NSArray* parameters;
@property (nonatomic, strong) OTMLComponent* triggeringConponent;
@property (nonatomic, strong) NSDictionary* postExec_parameters;
@property (nonatomic, strong) NSString* postExec_target;
@property (nonatomic, strong)  NSString* suggestedExecutionContext;
@property (nonatomic, strong) OTMLNewCondition * condition;


-(BOOL) performActionWithOTMLVC:(OTMLViewController*) aOTMLvc;

-(NSDictionary*) resolveParametersWithOTMLvc:(OTMLViewController*) aOTMLVC;
-(NSDictionary*) resolveParametersWithOTMLvc:(OTMLViewController*) aOTMLVC dynamicBinding:(BOOL) performDynamicBinding;
-(void) handleOTMLValidationException:(OTMLValidationException*)exception forOTMLVC:(OTMLViewController*) aOTMLVC;
-(NSString*) getOverridingTargetForParams:(NSDictionary*) aDictionary;
-(NSString*) getOverridingTriggerForParams:(NSArray*) aDictionary;
-(NSDictionary*) parametersRemovingOverriding:(NSDictionary*) aDictionary;

@end
