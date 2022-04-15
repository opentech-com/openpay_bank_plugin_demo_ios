//
//  OTMenuEntryModelStyle.h
//  com.opentech.toyprojects.accordion
//
//  Created by Silvio D'Angelo on 28/03/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OTMenuEntryModelStyle : NSObject

@property CGFloat paddingForSeparator;
@property CGFloat paddingRightAccessoryView;

@property(strong) UIFont* titleFont;

@property(strong) UIFont* anotherButtonFont;
@property(strong) UIColor* anotherButtonColorN;
@property(strong) UIColor* anotherButtonColorP;

@property(strong) UIColor* titleFontColor;


@property(strong) UIFont* selectedMenuEntryTitleFont;
@property(strong) UIColor* selectedMenuEntryTitleColor;

@property(strong) UIFont* subtitleFont;
@property(strong) UIColor* subtitleFontColor;

@property(strong) UIFont* badgeFont;
@property(strong) UIColor* badgeFontColor;
@property(strong) UIColor* badgeBackgroungColor;

@property(strong) UIImage* accessoryImage;

@property(strong) UIColor* bgColorNormal;
@property(strong) UIColor* bgColorPressed;

@property(strong) UIColor* bottomSeparatorColor;

@end
