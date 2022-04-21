//
//  OTMLSwitch.h
//  OTML
//
//  Created by Alessandro Ruggeri on 01/10/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"
 
@interface OTMLPageControlComponent : OTMLComponent

/**
 interfaccia usata da page container v2 per manovrare il page control
 **/
@property (nonatomic, assign) NSInteger numberOfPages;
@property (nonatomic, assign) NSInteger currentPage;
@property (nonatomic, weak) OTMLComponent * pager;



@end
