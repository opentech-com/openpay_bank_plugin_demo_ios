//
//  OTMLCollapsableEventDelegate.h
//  ING
//
//  Created by epavoni on 24/10/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



@class OTMLComponent;

@protocol OTMLCollapsableEventDelegate <NSObject>

-(void) otmlCollapsableItem:(OTMLComponent*) aComponent collapseStatusChangedIsNowOpen:(BOOL)isOpen;

@end
