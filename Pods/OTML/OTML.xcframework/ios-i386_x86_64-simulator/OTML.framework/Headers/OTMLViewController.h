//
//  OTMLViewController.h
//  OTML
//
//  Created by enrico on 31/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



#import "OTMLLayoutViewController.h"
#import "OTMLBridgeDelegate.h"
#import "OTMLJSEngineManager.h"
#import "OTMLDatasource.h"
#import "OTMLEntry.h"
#import "OTMLViewControllerResponderDelegate.h"

@class OTMLComponent;
@class OTMLHeaderConfigurator;
@class OTMLMainViewController;


@interface OTMLViewController : OTMLLayoutViewController <OTMLViewControllerResponderDelegate, UIGestureRecognizerDelegate>{
@protected
    CGRect frame;
    OTMLJSEngineManager * jsEngine;

}

@property (nonatomic, assign) BOOL isViewControllerReady; //storicamente un view controller è definito ready appena la web view che gestisce i JS è pronta ad elaborare i JS. Migliorabile...
@property (nonatomic, readonly) CGSize frameSize;
@property (nonatomic, assign) BOOL isHeaderVisible;
@property (nonatomic, readonly) OTMLHeaderConfigurator* headerConfigurator;

@property (nonatomic, assign) BOOL shouldForceOrientationCheck;
@property (nonatomic, assign) UIInterfaceOrientationMask forcedOrientation;

// framework methods (do not override or at least call super)

-(id) initWithEntry:(OTMLEntry*) aEntry andWithParameters:(NSDictionary*) aParameterMap andWithFrame:(CGRect) aFrame;

-(id) initWithEntry:(OTMLEntry*) aEntry
  andWithParameters:(NSDictionary*) aParameterMap
       andWithFrame:(CGRect) aFrame
          onContext:(NSString*) aContext;

-(void) setFrame:(CGRect)aFrame;
-(CGRect) getFrame;

-(void) executeJSWithTarget:(NSString*)target andParameters:(NSDictionary*) parameters;
-(void) executeTrigger:(NSString*)aTrigger forTarget:(NSString*)aTarget;
-(void) executeTrigger:(NSString*)aTrigger onComponent:(OTMLComponent*)aComponent;

-(void) askGoBackWithContext:(NSString*)aContext skipBackActions:(BOOL)skipBackActions;

-(BOOL) canGoBack;
-(BOOL) hasBackActions;

-(void)updateFramesInViewAnimated:(BOOL)animated animationTime:(CGFloat)animationTime;


//TODO enrico serve ancora, lo possiamo usare per i grafici in orizzontale? //container ad hoc che invertegli assi...
-(BOOL) canRotate;
-(UIView*) getLandscapeViewInFrame:(CGRect) aLandscapeFrame;



-(void) _dequeuedTriggerEvent_:(NSString*)aTrigger;

-(BOOL)isPopup;

-(BOOL) refreshThePageFromModalViewsAndErrorsAndDismissResponder:(BOOL)_dismissResponder;

-(void) controllerDidShow;
-(OTMLComponent*)getRootComponent;


-(void)applyViewBackgroundModel;

-(void)scrollToComponent:(NSString*)aComponentID;
-(void)scrollToComponentAtTop:(NSString*)aComponentID;

-(void)applyHeaderDescriptorModel;
@end
