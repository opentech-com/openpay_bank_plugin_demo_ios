//
//  OTMLStrategiesFactory.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLContentHandlingStrategyDelegate.h"

@interface OTMLStrategiesFactory : NSObject

+(id<OTMLContentHandlingStrategyDelegate>) contentHandlingStrategyWithName:(NSString*)aStrategyName
                                           initializedWithREquirer:(id) aComponentInstance;

@end
