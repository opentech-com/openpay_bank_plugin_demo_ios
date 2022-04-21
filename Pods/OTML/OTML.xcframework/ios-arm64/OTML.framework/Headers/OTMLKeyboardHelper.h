//
//  OTMLKeyboardHelper.h
//  OTMLFramework
//
//  Created by Enrico Pavoni on 04/02/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMLInputKeyboardType.h>

@interface OTMLKeyboardHelper : NSObject

+(UIKeyboardType) keyboardTypeFromOTMLKeyboard:(OTMLInputKeyboardType) OTMLInputKeyboardType;
@end
