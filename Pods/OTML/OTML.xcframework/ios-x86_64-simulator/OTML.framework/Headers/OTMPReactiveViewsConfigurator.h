//
//  OTMPReactiveViewsConfigurator.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 04/02/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "OTMPReactiveViewAgglomeration.h"

@interface OTMPReactiveViewsConfigurator : NSObject

+(void) configureReactiveAgglomerationOfViewsContainedIn:(UIView*) aAgglomerationView
                                  withInterestedDelegate:(NSObject<OTMPReactiveViewAgglomeration>*) anAgglomerationOfReactiveViews;

@end
