//
//  OTMLAdvancedComponent.h
//  OTMLFrameworkBase
//
//  Created by Silvio D'Angelo on 24/04/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//

#import "OTMLComponent.h"

@interface OTMLAdvancedComponent : OTMLComponent

/**
 @discussion This method is the hook for enabling/disabling button-like behaviour.
 @returns YES to enable touch handling
 @warning default implementation returns NO.
 **/
-(BOOL) shouldReactToTouchEvents;

/**
 @discussion This method is the hook where you are supposed to provide correct frames to subviews.
             Typically you will use self.frameForContentViewInBGContainer and adapt inner views properly.
 @warning as well as any other hook method, this is supposed to be overridden. Default implementation is no-op.
 **/
-(void) privateUpdateInnerViewsFrames;

/**
 @discussion This method is the hook where you are supposed to create your custom component views.
             It is called exactly one time for every instance of this component.
             This is the better place to initialize direct references (e.g: properties or simple attributes) to those views.
 @param thisComponentContentView This view is the main content view of the component.
        every custom view and control of the component is supposed to be added to this particular view.
 @warning as well as any other hook method, this is supposed to be overridden. Default implementation is no-op.
 **/
-(void) createAndAppendCustomViewsToContentView:(nonnull UIView *) thisComponentContentView;

/**
 @discussion hook method for the (cocoa native) highlighted state propagation over subviews.
             Any concrete component has a specific logic for subviews highligthed propagation.
             You can for example call setHighlighted: to all sibviews or just a subset of them.
 @warning as well as any other hook method, this is supposed to be overridden. Default implementation is no-op.
 @param isHighlighted true iff the component has been highlighted.
 **/
-(void) setHighlightedOnInnerViews:(BOOL) isHighlighted;

/**
 @discussion hook method for the view update logic.
             The main responsibility of this method is to perform changes on the subviews to reflect changes on the model.
             This method is called exactly one time after component creation (immediatelly after createAndAppendCustomViewsToContentView:).
             This method is called at least one time for every update action executed on the component iff any property of the model is changed
             since last call of this method.
             E.G: a text in a Label or a UIKeyboardType for a textfield.
 @warning as well as any other hook method, this is supposed to be overridden. Default implementation is no-op.
 **/
-(void) updateInnerViewsFromModel;

@end
