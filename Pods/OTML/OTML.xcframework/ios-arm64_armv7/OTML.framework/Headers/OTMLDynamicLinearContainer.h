//
//  OTMLAbstractDynamicLinearContainer.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 05/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLLinearContainer.h"
#import "OTML_DSUpdaterComponentProtocol.h"

@interface OTMLDynamicLinearContainer : OTMLLinearContainer<OTML_DSUpdaterComponentProtocol>

/**
 *    Call this method to trigger the refresh subcomponents action.
 *      After action execution the framework will call the selector appendSubComponents:
 */
-(void) refreshSubComponentsWithActionParamethrizedWith:(NSDictionary*) aDictionary;

/**
 *
 *     Override this method to handle the dynamic change of the subcomponents.
 *      [self invalidateAndPropagate] is authomatically called after this method execution.
 */
-(void) appendsubComponents:(NSArray*) aSubComponentsArray;

@end
