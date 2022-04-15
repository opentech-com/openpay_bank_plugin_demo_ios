//
//  OTMLPageContainer.h
//  OTML
//
//  Created by epavoni on 03/10/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "OTMLFrameContainer.h"
#import "OTMPUIPageControl.h"
#import "HorizontalTableView.h"

@interface OTMLPageContainer : OTMLFrameContainer<UIScrollViewDelegate, OTMPPageControlDelegate, HorizontalTableViewDelegate>{
@protected
    OTMPUIPageControl* pageControl;
    NSInteger indicator_heigh;
@private
    CGFloat pageWidth;
    NSInteger max_indictors_count;
    BOOL scrollBounce;
    UILabel* page_label;
}

@end
