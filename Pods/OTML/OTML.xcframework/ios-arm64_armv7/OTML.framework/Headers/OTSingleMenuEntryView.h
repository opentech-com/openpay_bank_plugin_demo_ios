//
//  OTSingleMenuEntryView.h
//  com.opentech.toyprojects.accordion
//
//  Created by Silvio D'Angelo on 03/04/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OTMenuEntryModelObject.h"
#import "OTMenuEntryModelStyle.h"

@interface OTSingleMenuEntryView : UIControl

@property(strong) OTMenuEntryModelObject* model;
@property(strong) OTMenuEntryModelStyle* style;

@end
