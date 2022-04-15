//
//  ViewController.h
//  com.opentech.toyprojects.accordion
//
//  Created by Silvio D'Angelo on 28/03/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OTMenuDelegate.h"

@interface OTAccordionMenuViewController : UIViewController<UIScrollViewDelegate>

@property(weak) id<OTMenuDelegate> menuDelegate;
-(void) updateMenuContent;
-(void) setupWithFrame:(CGRect) aFrame;
-(void) selectMenuEntryAtIndexOne:(NSInteger) index1 andIndexTwo:(NSInteger) index2;

@end
