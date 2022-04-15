//
//  MPUIPageControl.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/03/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


@protocol OTMPPageControlDelegate;

@interface OTMPUIPageControl : UIView

-(id) initWithFrame:(CGRect)frame
       dotDiamether:(CGFloat) aDiamether
      andDotSpacing:(CGFloat)aDotSpacing;

-(void)setTitles:(NSArray*)aTitles;
-(void)setIndicatorWidth:(CGFloat)aCurrentIndicatorWidth isPerc:(BOOL)aCurrentIndicatorWidthIsPerc;
-(BOOL)isTitlesMode;

// Set these to control the PageControl.
@property (nonatomic, assign) NSInteger currentPage;
@property (nonatomic, assign) NSInteger numberOfPages;

// Customize these as well as the backgroundColor property.
@property (nonatomic, strong) UIColor *dotColorCurrentPage;
@property (nonatomic, strong) UIColor *dotColorOtherPage;
@property (nonatomic, strong) UIColor *dotColorShadow;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIColor *textColorNormal;
@property (nonatomic, strong) UIColor *textColorSelected;

// Optional delegate for callbacks when user taps a page dot.
@property (nonatomic, weak) NSObject<OTMPPageControlDelegate> *delegate;

-(void) refreshAppearance;

@end
@protocol OTMPPageControlDelegate<NSObject>
@optional
- (void)pageControlPageDidChange:(OTMPUIPageControl *)pageControl;
@end
