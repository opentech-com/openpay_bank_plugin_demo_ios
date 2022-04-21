//
//  OTMLBridgeDelegate.h
//  OTML
//
//  Created by Silvio D'Angelo on 30/08/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


@class OTMLViewController;
@class OTMLComponent;




@protocol OTMPCustomInvalidResponseHandler <NSObject>

-(NSString*) getErrorTitle;
-(NSString*) getErrorMessage;

@end

@class OTMLAction;

/**
 *  No, non è un Javadoc, ma potrebbe essere ugualmente utile.
 *  In questa interfaccia dovremmo appendere i metodi che il nostro AppViewController espone per PatternDirector.
 */
@protocol OTMLBridgeDelegate <NSObject>


-(void) setFrame:(CGRect) aFrame;
-(NSString*) getContextID;

// "Done" button related methods
-(void) customDismissActualResponder;
-(void) notifyOpenResponder;
-(void) notifyDismissed;

-(void) pushOTML:(OTMLViewController*) aOTMLvc;




-(void) popOTMLbackSteps:(unsigned int) numberOfStepBack animated:(BOOL) animated;
-(void) performOnTopOTMLVC:(OTMLAction*) anAction;
-(void) triggerOnTopOTMLVC:(NSString*)aTrigger;
-(OTMLViewController*)getOTMLViewControllerForContext:(NSString*) aContextID;

// those two methods has been added in order to handle OTMLPopContext "action" that causes the argument context to be empty.
// In this case, without those methods, no triggers would be executed.

/**
 @return the number of controller in the navigation controller.
 @note This will return 0 if the VC is in reset status.
 @note This will include (will add) the prefetched back as it is not yet performed!
 */
-(NSInteger) numberOfControllersInNavcon;
-(void) releaseNavAnimationLock;

@optional
-(id<OTMPCustomInvalidResponseHandler>) invalidResponseHandlerWithData:(NSData*) aNetData andError:(NSError*) aError;
-(BOOL)shouldUpdateOnForeground;

/**
 whenever some animation can be performed freeing the main loop, is required to implement the isAnimationLocked and return false whenever an animation is in progress
 **/
-(BOOL)isAnimationLocked;

@end

