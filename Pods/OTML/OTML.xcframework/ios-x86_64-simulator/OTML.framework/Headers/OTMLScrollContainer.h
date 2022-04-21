//
//  OTMLScrollContainer.h
//  OTML
//
//  Created by enrico on 11/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "OTMLContainer.h"
#import "OTMLLinearContainer.h"


@interface OTMLScrollContainer : OTMLLinearContainer<UIScrollViewDelegate>

@property (nonatomic, assign) BOOL forceToBounceVertically;
@property (nonatomic, assign) BOOL scrolledDueToTextfield;

-(UIScrollView*) getCurrentScrollView;


@end
