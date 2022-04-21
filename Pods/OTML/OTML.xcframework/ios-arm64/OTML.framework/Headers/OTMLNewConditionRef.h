//
//  OTMLNewConditionRef.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "OTMLEvaluable.h"
#import <OTMLModels/OTMLConditionRefModel.h>


@interface OTMLNewConditionRef : OTMLEvaluable{
@private NSString * refId;
}

-(id) initWithModel:(OTMLConditionRefModel*) aModel;

@end
