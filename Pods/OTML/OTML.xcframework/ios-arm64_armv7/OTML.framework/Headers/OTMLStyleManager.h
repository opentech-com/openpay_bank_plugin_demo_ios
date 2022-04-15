//
//  OTMLStyleManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 28/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <OTMLModels/AbstractComponentFactory.h>
@class OTMLComponentModel;

@interface OTMLStyleManager : NSObject<AbstractComponentFactory>

+(OTMLStyleManager*)getInstance;
+(void)resetInstance;

@end
