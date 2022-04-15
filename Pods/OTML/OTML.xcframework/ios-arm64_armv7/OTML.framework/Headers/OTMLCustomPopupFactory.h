//
//  OTMLCustomPopupFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

@class OTMLEntry;
#import "OTMLAbstractPopupViewController.h"


@protocol OTMLCustomPopupFactory <NSObject>

-(OTMLAbstractPopupViewController*) popupWithType:(NSString*)currentlyIgnored
                                            Entry:(OTMLEntry*) aEntry
                                andWithParameters:(NSDictionary*) aParameterMap
                                     andWithFrame:(CGRect)aFrame;
@end
