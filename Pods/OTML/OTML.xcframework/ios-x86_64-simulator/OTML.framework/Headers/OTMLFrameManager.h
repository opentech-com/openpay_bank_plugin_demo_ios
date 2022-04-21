//
//  OTMLFrameManager.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 14/11/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OTMLImage.h"
#import "OTMLPadding.h"

#import <OTMLModels/OTMPColor.h>
#import <OTMLModels/OTMLComponentModel.h>

@class OTMLComponentBackgroundView;

@interface OTMLFrameManager : NSObject<NSCopying>

-(id) initWithModel:(OTMLComponentModel*) aModel;

/**
 *  @returns YES iff padding should be updated (ask it's new value with property: padding).
 */
-(BOOL) handlePaddingUpdateWithParams:(OTMLComponentModel*) aDictionary;
-(void) updateBgColorsWithModel:(OTMLComponentModel*) aModel;
-(void) updateBgImagesFromFormerParamWithModel:(OTMLComponentModel*) aModel;

extern NSInteger const cMAX_OTML_VIEW_SIZE;

-(OTMLComponentBackgroundView*) newBackGroundViewWithFRame:(CGRect) aFrame;

@property (nonatomic, strong) OTMLImage* imageNormal;
@property (nonatomic, strong) OTMLImage* imagePressed;
@property (nonatomic, strong) OTMLImage* imageSelected;
@property (nonatomic, strong) OTMLImage* imageDisabled;
@property (nonatomic, strong) OTMLImage* imageSelectedAndDisabled;
@property (nonatomic, strong) OTMLImage* imagePressedAndSelected;

@property (nonatomic, strong) OTMPColor* colorNormal;
@property (nonatomic, strong) OTMPColor* colorPressed;
@property (nonatomic, strong) OTMPColor* colorSelected;
@property (nonatomic, strong) OTMPColor* colorDisabled;
@property (nonatomic, strong) OTMPColor* colorSelectedAndDisabled;
@property (nonatomic, strong) OTMPColor* colorPressedAndSelected;
@property (nonatomic, readonly) BOOL isPaddingFromBGImage;


@property (nonatomic, strong) OTMLImage* imageNormalError;
@property (nonatomic, strong) OTMLImage* imagePressedError;
@property (nonatomic, strong) OTMLImage* imageSelectedError;
@property (nonatomic, strong) OTMLImage* imagePressedAndSelectedError;

@property (nonatomic, strong) OTMPColor* colorNormalError;
@property (nonatomic, strong) OTMPColor* colorPressedError;
@property (nonatomic, strong) OTMPColor* colorSelectedError;
@property (nonatomic, strong) OTMPColor* colorPressedAndSelectedError;


@property(nonatomic, strong) OTMLPadding* padding;

@end
