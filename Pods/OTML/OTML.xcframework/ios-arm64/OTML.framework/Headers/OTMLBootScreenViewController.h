//
//  BootScreenViewController.h
//  OTML
//
//  Created by epavoni on 09/10/12.
//  Copyright 2012 Opentech ENG. All rights reserved.
//


@class OTMLUpdaterDelegate_SyncImpl;

@interface OTMLBootScreenViewController : UIViewController

@property (nonatomic, strong) OTMLUpdaterDelegate_SyncImpl* otmlUpdaterDelegate;
@property (nonatomic, assign) BOOL showOTMLUpdateOnlyIfUpdating;
@property BOOL putScreenshootWithCurrentOrientation;

@end
