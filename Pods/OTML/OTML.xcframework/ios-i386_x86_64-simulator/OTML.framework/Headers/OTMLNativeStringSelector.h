//
//  OTMLSelectorOnPopupActivatorComponent.h
//  OTML
//
//  Created by Silvio D'Angelo on 19/09/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"
#import "OTMLSelectorDSExpert.h"
#import <OTMLModels/OTMLFont.h>
#import "OTMLReceiverAnchorDelegate.h"
#import "OTMPStringPicker.h"
#import "OTMLTextFieldComponent.h"


@interface OTMLNativeStringSelector : OTMLTextFieldComponent <NSCopying, OTMPStringPickerValueChangeDelegate>

@end
