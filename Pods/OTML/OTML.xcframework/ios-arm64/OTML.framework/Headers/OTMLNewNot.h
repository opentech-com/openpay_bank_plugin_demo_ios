//
//  OTMLNewNot.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "OTMLEvaluable.h"
#import <OTMLModels/OTMLNotModel.h>


@interface OTMLNewNot : OTMLEvaluable{
@private OTMLEvaluable * subevaluable;
}

-(id) initWithModel:(OTMLNotModel*) aModel;

@end
