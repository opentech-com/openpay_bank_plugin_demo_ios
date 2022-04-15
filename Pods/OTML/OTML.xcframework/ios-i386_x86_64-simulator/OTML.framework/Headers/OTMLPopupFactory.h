//
//  OTMLPopupFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLAbstractPopupViewController.h"
#import "OTMLCustomPopupFactory.h"

@interface OTMLPopupFactory : NSObject

+(OTMLAbstractPopupViewController*) popupWithType:(NSString*)currentlyIgnored
                                            Entry:(OTMLEntry*) aEntry
                                andWithParameters:(NSDictionary*) aParameterMap
                                     andWithFrame:(CGRect)aFrame;

+(void) setupCustomPopupFactory:(NSObject<OTMLCustomPopupFactory>*) aOTMLCustomComponentFactory;
+(void) setupCustomPopupFactories:(NSArray*) aOTMLCustomComponentFactoryArray;


@end
