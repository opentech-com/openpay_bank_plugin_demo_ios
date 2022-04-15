//
//  OTMLProgressBar.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 29/10/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"

@interface OTMLProgressBarComponent : OTMLComponent{
    OTMLImage * skinImg;
    int value, min, max, minFillSize;
	CGFloat percentage;
    UIColor * fill_s, * fill_e, * empty_s, * empty_e;
    NSString * image_separator;
}

@end
