//
//  OTMLEvaluableFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "OTMLEvaluable.h"
#import <OTMLModels/OTMLEvaluableModel.h>

@interface OTMLEvaluableFactory : NSObject

+(OTMLEvaluable *)evaluableWithModel:(OTMLEvaluableModel*)aModel;

@end
