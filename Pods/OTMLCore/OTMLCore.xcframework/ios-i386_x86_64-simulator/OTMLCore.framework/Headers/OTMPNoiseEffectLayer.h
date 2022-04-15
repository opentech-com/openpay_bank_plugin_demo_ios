//
//  MPNoiseEffectLayer.h
//  OTMLFramework
//
//  Created by epavoni on 10/04/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface OTMPNoiseEffectLayer : CALayer

- (id)init;
- (id)initWithPattern:(UIImage*)aPattern;

@property (nonatomic, assign) CGFloat noiseOpacity;

@end
