//
//  OTMLContentHandlingStrategyDelegate.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

@protocol OTMLContentHandlingStrategyDelegate <NSObject>

-(NSArray*) componentsToRemoveFromSubcomponentsBeforeActionFromActuals:(NSArray*) aActualElementsArray;

@end
