//
//  OTMLComponentState.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 05/11/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OTMLModels/OTMLStatefulComponent.h>
#import <OTMLModels/OTMPColor.h>
#import "OTMLImage.h"

@class OTMLFrameManager;

@interface OTMLComponentBackgroundView : UIImageView <OTMLStatefulObject>

-(id) initWithModel:(OTMLFrameManager*) aModel
           andFrame:(CGRect) aFrame;

-(void) updateForModelChanges;

@property (nonatomic, assign) CGFloat cornerRadius;

@end
