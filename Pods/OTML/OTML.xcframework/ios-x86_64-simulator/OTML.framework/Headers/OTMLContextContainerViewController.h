//
//  OTMLContextContainerViewController.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 12/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@class OTMLMainViewControllerInstancesBasket;
@class OTMLContextDescriptor;
@class OTMLViewController;
@class OTMLAction;
@class OTMLContextGroupContainerView;
@class OTMLMainViewController;
@class OTMPOrderedDictionary;

#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@interface OTMLContextContainerViewController : UIViewController<OTMLRestartAppAwareProtocol, UIGestureRecognizerDelegate>

@property (nonatomic, readonly, nonnull) OTMLMainViewControllerInstancesBasket* contextInstances;
@property (nonatomic, readonly, nonnull) OTMLContextDescriptor* contextDescriptor;

@property (nonatomic, readonly, strong, nonnull) OTMPOrderedDictionary<NSString*,OTMLContextGroupContainerView*>* groupViewByGroupID;
@property (nonatomic, readonly, strong, nonnull)  NSMutableDictionary<NSString*,OTMLMainViewController*>* mainVCByContextID;
@property (nonatomic, readonly, strong, nonnull)  NSMutableDictionary<NSString*,NSString*>* groupIDByContextID;

@property (nonatomic, assign) UIInterfaceOrientationMask currentOrientation;


-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use initWithContextDescriptor instead")));
-(nonnull instancetype)initWithContextDescriptor:(nonnull OTMLContextDescriptor*)aDescriptor;

+(nullable UIImage*)fastScreenshotOfMainWindowWithRect:(CGRect)aRect;

-(void) pushOTML:(nonnull OTMLViewController*) aOTMLvc withContext:(nonnull NSString*)contextID;
-(void) popOTMLbackSteps:(unsigned int) numberOfStepBack animated:(BOOL) animated withContext:(nonnull NSString*)contextID;

/**
 performs action on top VC in a specific context.
 @param anAction the action to execute
 @param contextID the contextID to search for the top OTMLViewController.
 @note <b>If contextID is nil</b>, the action will be executed as a <b>global action</b>
 @note If contextID exists, <b>but no OTMLViewController is currently pushed</b>, the action will be executed as a <b>global action</b>
 */
-(void) performOnTopOTMLVC:(nonnull OTMLAction*) anAction withContext:(nullable NSString*)contextID;

-(nullable OTMLViewController*) getOTMLViewControllerForContext:(nonnull NSString*) contextID;
-(nullable OTMLViewController*) getAnyOTMLVC;

-(CGRect) getFrameForContentInContext:(nonnull NSString*)contextID;

-(BOOL) didOTMLEntryBeenPushedOnContext:(nonnull NSString*)aContext;

-(BOOL) isAnimationLocked;

-(nonnull NSString*) mainContextID;


-(void) notifyOpenResponder;

-(void) notifyDismissed;

-(void) customDismissActualResponder;

-(void) updateContextFrames;

-(BOOL) setContextVisibility:(BOOL)open animated:(BOOL)animated forced:(BOOL)forced onContext:(nonnull NSString*) aContextID;
-(BOOL) setGroupVisibility:(BOOL)open animated:(BOOL)animated forced:(BOOL)forced onGroup:(nonnull NSString*) aGroupID;

-(BOOL) isContextOpen:(nonnull NSString*) aContextID;
-(BOOL) isGroupOpen:(nonnull NSString*) aGroupID;

-(UIInterfaceOrientationMask)evaluateOrientation;

@end
