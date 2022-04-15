//
//  OTMLRaderComponent.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 12/02/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "OTMPShowHideViewProtocol.h"
#import <AVFoundation/AVFoundation.h>
#import "OTMLComponent.h"
#import <OTMLModels/OTMLBarCodeValidator.h>

@protocol OTMPBarcodeValidator <NSObject>

-(BOOL)isValid:(NSString*)theCode;

@end


@interface OTMLBarcodeReaderComponent : OTMLComponent<OTMPShowHideViewProtocol>

+(void)addValidator:(id)theValidator withName:(OTMLBarCodeValidator)validatorName;

@end
