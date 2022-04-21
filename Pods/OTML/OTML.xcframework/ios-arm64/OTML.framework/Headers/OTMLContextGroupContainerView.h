//
//  OTMLContextGroupContainerView.h
//  OTMLFramework
//
//  Created by Enrico on 28/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@class OTMLContextGroupDescriptorItem;
@class OTMLContextContainerViewController;
#import "OTMLContextDescriptor.h"

@interface OTMLContextGroupContainerView : UIImageView <UIGestureRecognizerDelegate>

@property(nonnull, readonly) NSString* groupID;
@property(nonnull, readonly) NSMutableArray<NSString*>* contextIDs;
@property(nonatomic, retain, nullable) NSString* topContextID;
@property(nonatomic, assign) BOOL isOpen;
@property(nonatomic, readonly) BOOL isCloseAnimationAllowed;
@property(nonatomic, readonly) BOOL isOpenAnimationAllowed;
@property(nonatomic, readonly, nullable) UIColor* otml_bgColor;
@property(nonatomic, readonly, nullable) UIImage* otml_bgImage;
@property(nonatomic, readonly, nullable) UIImage* otml_blurImage;
@property(nonatomic, weak, nullable) OTMLContextContainerViewController* referenceContextController;
@property(nonatomic, assign) CGPoint gestureTransform;

@property(nonatomic, assign) OTMLContextDescriptorAnimation inAnimation;
@property(nonatomic, assign) OTMLContextDescriptorAnimation outAnimation;

- (nonnull instancetype)initWithFrame:(CGRect)frame forDescriptor:(nonnull OTMLContextGroupDescriptorItem*)aDescriptor forContextController:(nonnull OTMLContextContainerViewController*) contextController;
-(void)setBlurImage:(nullable UIImage*)aImage;
-(void)setBGVisibility:(BOOL)visible;
-(void)addSubview:(nonnull UIView *)view withContextID:(nonnull NSString*)aContextID;

-(void)setCurrentOrientation:(UIInterfaceOrientationMask)aOrientation;

@end
