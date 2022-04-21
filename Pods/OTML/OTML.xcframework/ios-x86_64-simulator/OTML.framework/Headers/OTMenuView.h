//
//  OTMenuVIew.h
//  com.opentech.toyprojects.accordion
//
//  Created by Silvio D'Angelo on 28/03/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OTMenuDelegate.h"

@protocol OTSizeChangeDelegate
-(void) menuViewDidChangeSize;
@end

@interface OTMenuView : UIView

-(void) reloadData;
-(void) selectMenuEntryAtIndexOne:(NSInteger) index1 andIndexTwo:(NSInteger) index2;

@property(strong) id<OTMenuDelegate> menuDelegate;
@property(strong) id<OTSizeChangeDelegate> sizeChangeDelegate;



@end
