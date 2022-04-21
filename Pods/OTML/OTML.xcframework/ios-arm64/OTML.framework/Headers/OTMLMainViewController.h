//
//  MainViewController.h
//
//
//  Created by epavoni on 14/12/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "PatternDirectorDatasouerce.h"
#import "OTMLBridgeDelegate.h"
#import "OTMLHeaderConfigurator.h"

@class OTMLViewController;
@class PatternDirectorDatasouerce;
@class OTMLContextDescriptorItem;

static NSString* __nonnull const OTMLMainViewController_BackGestureDidBegin = @"OTMLMainViewController_BackGestureDidBegin";
static NSString* __nonnull const OTMLMainViewController_BackGestureDidEnd = @"OTMLMainViewController_BackGestureDidEnd";
static NSString* __nonnull const OTMLMainViewController_Force_responder_Dismissing = @"OTMLMainViewController_Force_responder_Dismissing";


@interface OTMLMainViewController : UIViewController <OTMLBridgeDelegate, PatternDirectorDatasouerce, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate>{
    
    OTMLViewController* start;
    OTMLViewController* actualTopVC;
    BOOL resetRootViewController;
    BOOL allowBackGesture;
}

@property (nonatomic, strong, nonnull) NSString* contextID;
@property (nonatomic, assign) BOOL isOpen;
@property (nonatomic, readonly) BOOL skipLifecycleEvents;
@property (nonatomic, readonly, nullable) OTMLHeaderConfigurator* topEntryHeaderConfigurator;
@property (nonatomic, readonly, nullable) OTMLEntry* topEntry;

#pragma mark - init

-(nonnull instancetype)init __attribute__((unavailable("Init not available. Please use initWithContextDescriptorItem instead")));
-(nonnull instancetype)initWithContextDescriptorItem:(nonnull OTMLContextDescriptorItem*) aContextDescriptorItem;

#pragma mark - hooks Extension Points

// hook methods, ovrride to add custom views or whatever, always safe to override because they are no-op methods.
/**
 This method is called whanever the actual TopVC changes.
 @param actualTopVC : a VC that is now at the top of the vc's (navigationVC) stack.
 **/
-(void)updateContentsWithOtmlViewController:(nonnull OTMLViewController*) actualTopVC;
-(void)performingPushWithActionAnimated:(nonnull OTMLViewController *)_actualTopVC;
-(void)willPerformPushActionWithOtmlVC:(nonnull OTMLViewController*) aOTMLVC;
-(void)didPerformPushActionWithOtmlVC:(nonnull OTMLViewController*) aOTMLVC;
-(void)willPerformPopAction;
-(void)didPerformPopAction;

-(void)notifyHideByAnotherContext;
-(void)notifyShowByPoppingAnotherContext;
-(void)notifyTopContext;
-(void)contextMountedTrigger;
-(void)contextUnmountedTrigger;

#pragma mark - Overridable Protected Points

-(void)setupNavconWithOTVC:(nonnull OTMLViewController*)aOTVC;
-(void)setCustomNavigationBar:(nonnull UINavigationBar*)aNavBar;


-(void)disposeNav;

#pragma mark - Gettes
-(CGRect)getFrame;
-(nullable UINavigationController*)getNavCon;
-(BOOL)isAnimationLocked;

#pragma mark - Perform

-(void)backPressed;

#pragma mark setFrame

-(void) setFrame:(CGRect) aFrame;


#pragma mark - auto view configuration from context


-(nullable UIImage *)otml_blurImage;
-(void)setBlurImage:(nullable UIImage*)aImage;
-(nullable UIColor *)otml_bgColor;
-(nullable UIImage *)otml_bgImage;
-(void)setBGVisibility:(BOOL)visible;
-(BOOL)topEntryCanGoBack;
-(nonnull UIImageView*)screenshotOfNavcon;
-(void)addScreenshotBelowNavcon:(nonnull UIImageView*)aScreenshotView;
-(nonnull NSString*) remapContextID:(nonnull NSString*)aContextID;

@end
