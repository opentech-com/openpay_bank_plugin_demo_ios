//
//  OTMLDateSelector
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 20/09/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"
#import <OTMLModels/OTMLFont.h>
#import "OTMPDatePicker.h"
#import "OTMLTextFieldComponent.h"
#import <OTMLModels/OTMLDateSelectorModel.h>

@interface OTMLDateSelectorComponent : OTMLTextFieldComponent <NSCopying, OTMPDatePickerValueChangeDelegate>
@end
