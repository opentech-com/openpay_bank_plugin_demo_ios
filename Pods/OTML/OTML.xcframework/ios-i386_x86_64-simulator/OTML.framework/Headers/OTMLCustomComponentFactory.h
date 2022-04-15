//
//  OTMLCustomComponentFactory.h
//  OTML
//
//  Created by epavoni on 28/08/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import "TBXML.h"
#import "OTMLComponent.h"


@protocol OTMLCustomComponentFactory <NSObject>

-(OTMLComponent*) componentWithModel:(OTMLComponentModel*) aModel;


@end
