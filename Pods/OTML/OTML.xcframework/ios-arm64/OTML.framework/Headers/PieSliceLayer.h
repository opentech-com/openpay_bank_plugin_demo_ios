//
//  PieSliceLayer.h
//  PieChart
//
//  Created by Pavan Podila on 2/20/12.
//  Copyright (c) 2012 Pixel-in-Gene. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
@class OTMPMultiPieView;

@interface PieSliceLayer : CALayer


@property (nonatomic) CGFloat startAngle;
@property (nonatomic) CGFloat endAngle;

@property (nonatomic, strong) UIColor *fillColor;
@property (nonatomic, assign) unsigned int indexInPie;
@property (nonatomic) CGFloat strokeWidth;
@property (nonatomic, strong) UIColor *strokeColor;
@property (nonatomic, assign) BOOL arc;
@property (nonatomic, assign) CGFloat arcWidth;
@end
