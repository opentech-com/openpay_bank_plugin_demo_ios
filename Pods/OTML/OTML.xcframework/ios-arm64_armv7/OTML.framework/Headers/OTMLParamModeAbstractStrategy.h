//
//  OTMLParamModeStrategy.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 17/01/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMLParameterMode.h>

@class OTMLParameter;
@class OTMLParameterEntry;
@class OTMLComponent;



#define PARAM_MODE_DEFAULT_RETURN_VALUE @""


@protocol OTMLAsyncParamModeStrategy <NSObject>
@end
@protocol OTMLNotSingletonParamModeStrategy <NSObject>
@end


@interface OTMLParamModeStrategy : NSObject

-(NSString*) resolveParamModeWithResolvedArguments:(NSArray<OTMLParameterEntry*>*)resolvedArguments
                                     withParameter:(OTMLParameter*)aParam
                          andPreprocessedArguments:(NSDictionary*)preprocessedArguments;
-(NSArray<NSString*>*)getPreprocessedMandatoryParameters;
-(NSArray<NSString*>*)getPreprocessedOptionalParameters;


@end


@interface OTMLParamModeStrategyGroup : NSObject

- (OTMLParamModeStrategy*)getStrategyWithMode:(OTMLParameterMode)aMode;
- (OTMLParamModeStrategy*)getStrategyWithMode:(OTMLParameterMode)aMode andCustomName:(NSString*)aCustomName;

- (BOOL) canResolveParameterWithMode:(OTMLParameterMode)aMode;
- (NSString*) resolveParamModeWithType:(OTMLParameterMode)aMode withResolvedArguments:(NSArray<OTMLParameterEntry*>*)resolvedArguments withParameter:(OTMLParameter*)aParam;

@end
