//
//  OTMPTouchIDManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 09/06/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLDumpableModuleProtocol.h"


@protocol OTMPTouchIDAuthDelegate <NSObject>
-(void)userAuthenticationWithTouchIDSuccess;
-(void)userAuthenticationWithTouchIDFailed;
-(void)userAuthenticationWithTouchIDNotAvailable;
-(NSString*)touchIDRequestReasonDescription;

@optional
-(NSString*)touchIDfallbackButtonDescription;
@end

/*****------*****/

@interface OTMPTouchIDManager : NSObject <OTMLDumpableModuleProtocol>

+(BOOL)isKeychainSecureStoreAvailable;
+(BOOL)isPasscodeSettedInDevice;
+(BOOL)isTouchIDAvailableInDevice;
+(BOOL)wasPasscodeResetted;
+(BOOL)wasFingersChanged;
+(BOOL)isFingersEnrolled;
+(void)markKeychainAsInUse;
+(BOOL)isFaceIDAvailableInDevice;

+ (NSString *) deviceProtectionMethod;

+(void)resetCache;

#pragma mark auth
+(void)authenticateUserWithDelegate:(NSObject<OTMPTouchIDAuthDelegate>*)aDelegate;

@end

