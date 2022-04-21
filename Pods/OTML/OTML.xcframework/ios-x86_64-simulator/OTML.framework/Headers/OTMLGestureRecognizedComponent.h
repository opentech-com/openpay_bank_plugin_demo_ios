//
//  OTMLGestureRecognizedComponent.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 02/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//
@class OTMLComponent;

@interface OTMLGestureRecognizedComponent : UIGestureRecognizer <UIGestureRecognizerDelegate>

@property(nonatomic,readwrite) UIGestureRecognizerState state;

-(void)lockMoving:(BOOL)lock;
-(void)setSubComponentdraggable:(OTMLComponent*) aComponent;
-(void)setMovementX:(BOOL)xMov movementY:(BOOL)yMov;

@end
