//
//  OTMLNewCondition.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "OTMLConditionInterface.h"

@class OTMLConditionModel;
@class OTMLEvaluable;
@class OTMLComponent;


@interface OTMLNewCondition : NSObject<OTMLConditionInterface>{
    
}
@property (nonatomic, strong) OTMLComponent * sourceComponent;
@property (nonatomic, strong) NSString * idCondition;
@property (nonatomic, strong) OTMLEvaluable * rootEvaluable;

-(id) initWithModel:(OTMLConditionModel*) aModel;
-(NSDictionary*) toDictionaryDescription;
-(NSString *)conditionResolutionDescription:(BOOL)onValid;

@end
