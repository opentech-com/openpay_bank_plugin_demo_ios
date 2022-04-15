//
//  OTMLHeaderWithProgressBar.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 28/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


@interface OTMLHeaderWithProgressBar : UINavigationBar <NSCopying>

@property (nonatomic, assign) CGFloat progressBarPercent;
@property (nonatomic, strong) UIColor * progressBarFillColor;
@property (nonatomic, strong) UIColor * progressBarEmptyColor;
@property (nonatomic, assign) int progressBarHeight;
@property (nonatomic, assign) BOOL hideProgressBarWithZeroPercent;


@end
