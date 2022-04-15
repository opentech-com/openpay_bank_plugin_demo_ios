//
//  OTMLComponentFactory.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import "OTMLComponent.h"
#import "OTMLCustomComponentFactory.h"


@class OTMLComponentModel;

@interface OTMLComponentFactory : NSObject

+(OTMLComponent*) componentWithModel:(OTMLComponentModel*) aModel;

+(void) setupCustomComponentFactory:(NSObject<OTMLCustomComponentFactory>*) aOTMLCustomComponentFactory;
+(void) setupCustomComponentFactories:(NSArray*) aOTMLCustomComponentFactoryArray;

@end
