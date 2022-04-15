//
//  OTMPPasscodeUtil.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 06/10/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//


@interface OTMPPasscodeUtil : NSObject


typedef NS_ENUM(NSUInteger, LNPasscodeStatus){
    /* The passcode status was unknown */
    LNPasscodeStatusUnknown   = 0,
    /* The passcode is enabled */
    LNPasscodeStatusEnabled   = 1,
    /* The passcode is disabled */
    LNPasscodeStatusDisabled  = 2
};


/**
 *  Checks and returns the devices current passcode status.
 *  If `passcodeStatusSupported` returns NO then `LNPasscodeStatusUnknown` will be returned.
 */
@property (readonly) LNPasscodeStatus passcodeStatus;


@end

