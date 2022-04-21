//
//  OTMLQRCodeGenerator.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 29/05/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"
#import <OTMLModels/OTMLBarCodeFormat.h>

@interface OTMLBarCodeGeneratorComponent : OTMLComponent

+(int)zxingFormatWithOTMLBarCodeFormat:(OTMLBarCodeFormat)anOTMLBarCodeFormat;


@end
