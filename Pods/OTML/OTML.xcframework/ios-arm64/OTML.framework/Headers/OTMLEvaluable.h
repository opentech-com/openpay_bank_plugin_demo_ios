//
//  OTMLEvaluable.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "OTMLConditionInterface.h"
#import <OTMLModels/OTMLConditionsConstants.h>

@class OTMLEvaluableModel;

@interface OTMLEvaluable : NSObject<OTMLConditionInterface>

-(id) initWithModel:(OTMLEvaluableModel*) aModel;
-(NSDictionary*) toDictionaryDescription;
-(NSString*) conditionResolutionDescription:(BOOL)onValid;

@end
