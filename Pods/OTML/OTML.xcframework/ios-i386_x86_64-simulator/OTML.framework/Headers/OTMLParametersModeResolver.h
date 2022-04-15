//
//  OTMLParamethersModeResolver.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 07/01/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMLParameterMode.h>

@class OTMLParameterEntry;
@class OTMLParamModeStrategy;
@class OTMLParameter;
@class OTMLLayoutViewController;


@interface OTMLParametersModeResolver : NSObject

+(OTMLParametersModeResolver*) getInstance;

-(NSString*) applyParamModedParam:(OTMLParameter*) param
                                usingOtmlVC:(OTMLLayoutViewController*) aVC
                                 validating:(BOOL) shouldValidate
                                 untilCount:(int) aRecursionEnd;


-(OTMLParamModeStrategy*) asyncStrategyForMode:(OTMLParameterMode)aMode;

@end
