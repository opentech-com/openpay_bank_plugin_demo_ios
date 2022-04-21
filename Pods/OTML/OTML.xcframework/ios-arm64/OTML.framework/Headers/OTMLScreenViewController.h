//
//  ScreenViewController.h
//
//  Created by epavoni on 08/05/13.
//  Copyright (c) 2013 Opentech. All rights reserved.
//


@class OTMLMainViewController;
@class OTMLContextContainerViewController;


@interface OTMLScreenViewController : UIViewController

-(nonnull instancetype)initWithContextController:(nonnull OTMLContextContainerViewController*)aController;

-(void) hideScreenViewWithViewController:(nonnull UIViewController*) aVC;
-(void) hideScreenView;
-(void) showScreenView;
@end
