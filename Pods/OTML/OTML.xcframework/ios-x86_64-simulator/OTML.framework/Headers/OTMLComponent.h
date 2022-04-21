//
//  OTMLComponent.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "OTMLViewController.h"
#import "OTMLMargin.h"
#import "OTMLPadding.h"
#import "OTMLImage.h"
#import "UIImage+OTMLBridge.h"
#import "OTMLDatasource.h"
#import <OTMLModels/OTMPColor.h>
#import "OTMLParameterEntry.h"
#import "OTMLComponentBackgroundView.h"
#import <OTMLModels/OTMLComponentConstants.h>
#import <OTMLModels/OTMLVisibility.h>
#import "OTMLLayout.h"
#import "UIImage+OTMLBridge.h"
#import <OTMLModels/OTMLCoreConstants.h>
#import "OTMLComponentResponderDelegate.h"
#import "OTMLComponentFrameModelHelper.h"
#import "OTMLParameterEntry.h"
#import <OTMLModels/OTMLStatefulComponent.h>
#import "OTMLComponentFrameModelHelper.h"

@class OTMLParameter;
@class OTMLViewController;
@class OTMLComponentModel;
@class OTMLContainer;
@protocol OTMLCustomComponentErrorHandler;


#define ERROR_ICON_OFFSET 5
#define MAXSIZE cMAX_OTML_VIEW_SIZE


@interface OTMLComponent : NSObject<NSCopying, OTMLStatefulComponent>{
@protected
    OTMLComponentFrameModelHelper * frameModelHelper;
    OTMLFrameManager* padding_manager;

    NSArray<OTMLParameter*>* parameters;
    OTMLViewController* otmlViewController;

    //state based
    CGRect formerFrame;
    CGRect frameFromOutside;
    BOOL invalidatedFrame;
    UIView* view;

    BOOL ready;
    BOOL disposed;

    NSString* componentName;

    CGRect frameScaledByMarginsAndPadding;
    CGRect lastFrameFromOutside;

    OTMLComponentModel * _model;
}

@property (strong, nonatomic, readonly) UIView* view;
@property (nonatomic, strong) OTMLViewController* otmlViewController;

-(OTMLComponentFrameModelHelper*) getTheFrameModelHelper;
-(id) initWithOTMLComponent:(OTMLComponent*) aComponent;
-(id) initWithModel:(OTMLComponentModel*) aModel;


-(BOOL) isBackGroundOrMainView:(UIView*) aView;
-(void) configureContentView:(UIView*) aView;



/** BASE ATTRIBUTES **/
-(void) setParent:(OTMLContainer*) aParent;
-(OTMLContainer*) getParent;
-(OTMLViewController*) getNestingOTMLVC;

-(NSString*) getOtmlID;
-(NSString*) getComponentName;
-(OTMLComponentModel*) model;

/*** ERROR MANAGEMENT ***/
-(UIView*) getErrorView;
-(NSString*) getValidationErrorMessage;
-(void)updateFramesInViewRecursively;



-(void) exitFromErrorState;
-(BOOL) exitFromErrorStateAndInvalidate:(BOOL)invalidate;
-(void) updateErrorViewFrames;



/** COMPONENT SIZE **/
-(CGFloat) contentHeightMin;
-(CGFloat) contentWidthMin;
-(CGFloat) contentHeightWrapped;
-(CGFloat) contentHeight;
-(CGFloat) contentWidthWrapped;
-(CGFloat) contentWidth;
-(CGFloat) getMaxWrappingWidth;
-(CGFloat) getMaxWrappingHeight;


/** COMPONENT FRAME **/
-(BOOL) setFrame:(CGRect) aFrame ParentIsWrappingW:(BOOL) parentWrappingW ParentIsWrappingH:(BOOL) parentWrappingH;
-(void) invalidateAndPropagate: (BOOL) proagate;
-(void) invalidateAndPropagateToChild:(BOOL) proagate propagateToParents:(BOOL)propagateToParents shouldUpdateFrames:(BOOL) frameMustBeUpdated;
-(CGRect) getFrame;
-(void) setFillingWidth:(CGFloat) aWidth invalidating:(BOOL) shouldInvalidate;
-(void) setFillingHeight:(CGFloat) aHeight invalidating:(BOOL) shouldInvalidate;
-(void) setFillingSize:(CGSize) aSizeToFill
          invalidating:(BOOL) shouldInvalidate;
-(void) updateFramesInView;
-(BOOL) skipUpdateFrame;

-(void) repositionOriginX:(CGFloat) aX invalidating:(BOOL) shouldInvalidate;
-(void) repositionOriginY:(CGFloat) aY invalidating:(BOOL) shouldInvalidate;
-(void) repositionOrigin:(CGPoint) aOrigin invalidating:(BOOL) shouldInvalidate;



-(NSInteger) getZIndex;

-(OTMLPadding*)padding;
-(void)setPadding:(OTMLPadding*)padding;
-(CGFloat) getFillFactor;
-(OTMLMargin*) getMargin;
-(CGSize)bgSize;

-(void)restoreMinHForKeyboardSize;
-(void)reduceMinHByKeyboardSize:(CGRect)aKeyboardFrame;
-(CGFloat) getReducedMinHByKeyboardSize;

/** COMPONENT FRAME HELPERS **/
-(CGRect) scaleFrameByMarginAndPadding:(CGRect) aFrame;
-(CGRect) scaleFrameByMargin:(CGRect) aFrame;
-(CGRect) scaleFrameByPadding:(CGRect) aFrame;
-(CGRect) inflateFrameByMarginAndPadding:(CGRect) aFrame;
-(CGRect) inflateFrameByMargin:(CGRect) aFrame;
-(CGRect) inflateFrameByPadding:(CGRect) aFrame;

-(CGRect) frameForBgContainer;
-(CGRect) frameForContentViewWithoutBgContainer;
-(CGRect) frameForContentViewInBGContainer;




/** COMPONENT TRIGGERS **/
-(void) componentDidShow;
-(void) didTrigger:(NSString*) aTrigger;



/** COMPONENT POSITIONING **/

-(void) askScrollToFit:(OTMLComponent*)aComponent;
-(void) askScrollToFitTop:(OTMLComponent*)aComponent scrollUpWard:(BOOL) shouldGoUp offset:(CGFloat)additionalOffset;



/** COMPONENT STATE **/

//Visibility
-(BOOL) isVisible;
-(BOOL) isCollapsed;
-(BOOL) setVisibility:(OTMLVisibility) aVisibility;
-(BOOL) setVisibility:(OTMLVisibility) aVisibility invalidating:(BOOL)invalidating;


//Control state
-(BOOL) isEnabled;
-(BOOL) isSelected;


//-(BOOL) updateAlpha;
-(BOOL) updateHidden;

// TODO: non è implementato da tutti i component
-(void) dispose;
-(BOOL) isReady;
-(BOOL) isDisposed;



/** COMPONENT PARAMS **/
-(NSString*) getParametrizationValueWithFlag:(NSString*) aFlag validate:(BOOL)validateNow;
-(void) handleFormerParameters;
-(void) handleFormerParametersMap:(NSArray*) aParameterMap;
-(BOOL) handleParameters:(NSDictionary*) updParams
                applyNow:(BOOL)shouldApplyNow;
-(BOOL) handleConcreteComponentParameters:(NSDictionary*) updParams;




/** COMPONENT HIERARCHIC BEHAVIOUR **/
-(OTMLParameterEntry*) hierarchicParameterResolveAsKeyValueParameter:(OTMLParameter*) aParameter
                                                        forComponent:(OTMLComponent*)aComponent
                                                            validate:(BOOL)validateNow;
-(NSInteger) getHierarchicResolvedRow;
-(NSInteger) getHierarchicResolvedSection;
-(NSInteger) getHierarchicResolvedRowForComponent:(OTMLComponent*)aComponent;
-(NSInteger) getHierarchicResolvedSectionForComponent:(OTMLComponent*)aComponent;
-(NSInteger) getHierarchicOriginalRow;
-(NSInteger) getHierarchicOriginalSection;
-(void)setHierarchicIndexPath:(NSIndexPath*)anIndexPath;


/** COMPONENT BACKGROUND **/

-(UIView*) newBackgroundContainerView;
-(UIView*) newContentViewWithFrame:(CGRect) cViewFrame;
-(OTMLComponentBackgroundView *) newBackgroundContainerViewWithFrame:(CGRect) aTotalFrame;
-(OTMLComponentBackgroundView *) getBGView;



/** COMPONENT NAVIGATION **/
-(OTMLComponent<OTMLComponentResponderDelegate>*)getNextResponderComponentFromComponent:(OTMLComponent*)aComponent backwardSearch:(BOOL) canSearchBack tentative:(NSInteger) tentative;
-(OTMLComponent<OTMLComponentResponderDelegate>*)getPreviuosResponderComponentFromComponent:(OTMLComponent*)aComponent backwardSearch:(BOOL) canSearchBack tentative:(NSInteger) tentative;
-(BOOL) containsComponent:(OTMLComponent*) aComponent;
-(OTMLComponent*) findComponentByID:(NSString*) aOtmlID;




/** COMPONENT ROTATION **/
-(BOOL) canRotate;
-(UIView*)getLandscapeViewInFrame:(CGRect) aLandscapeFrame;




+(OTMLLayout*) componentGroupNamed:(NSString*) aComponentGroudID preferredContextID:(NSString*) aCtxID;
+(void) printAllFramesOfView:(UIView*) aView withLogTag:(NSString*) space;
-(void) printAllFramesWithLogTag:(NSString*) space;

@end





@protocol OTMLCustomComponentErrorHandler <NSObject>

-(BOOL) canhandleErrorForComponent:(OTMLComponent*)aComponent;
-(void) handleError:(NSString*) anErrorString forComponent:(OTMLComponent*)aComponent;

@end

