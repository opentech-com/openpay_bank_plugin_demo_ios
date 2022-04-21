//
//  OTMLNewAdd.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "OTMLEvaluable.h"

@class OTMLAndModel;

@interface OTMLNewAnd : OTMLEvaluable{
@private NSArray * subevaluables;
}

-(id) initWithModel:(OTMLAndModel*) aModel;


@end
