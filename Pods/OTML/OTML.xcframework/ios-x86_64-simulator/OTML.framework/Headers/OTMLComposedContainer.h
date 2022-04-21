//
//  OTMLComposedContainer.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 09/12/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLContainer.h"

@protocol OTMPDraggableGUIDelegate <NSObject>

-(void) draggableGUIHAsBeenDraggedByTouches:(NSSet*) aTouchSet withEvent:(UIEvent*) aEvent;
-(void) draggableReceivedSwitchStateGesture;
-(void) draggableHasBeenReleasedByTouches:(NSSet*) aTouchSet withEvent:(UIEvent*) aEvent;

@end

@interface OTMLComposedContainer : OTMLContainer<OTMPDraggableGUIDelegate>

@end
