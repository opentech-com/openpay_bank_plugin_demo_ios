//
//  OTMLPermissionsCommand.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 25/09/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLActionCommandSet.h"
#import "OTMLActionCommandWithTriggerResult.h"
#import <AssetsLibrary/AssetsLibrary.h>
#import <AVFoundation/AVFoundation.h>

@protocol OTMPAuthLocationDelegate;

typedef enum {
    OTMLPermissionStatusUnknown = -1,
    OTMLPermissionStatusNotDetermined = 0,
    OTMLPermissionStatusDenied = 1,
    OTMLPermissionStatusGranted = 2
} OTMLPermissionsStatus;

typedef enum {
    OTMLNotificationsPermissionsTypeLocal,
    OTMLNotificationsPermissionsTypeRemote
} OTMLNotificationsPermissionsTypes;

@interface OTMLPermissionsCommand : OTMLActionCommandSet

+(BOOL)isGalleryPermissionsNotDetermined;
+(BOOL)isGalleryPermissionsGranted;

+(BOOL)isCameraPermissionsNotDetermined;
+(BOOL)isCameraPermissionsGranted;
+(BOOL)isMicrophonePermissionsGranted;
+(BOOL)isMicrophonePermissionsNotDetermined;

+(BOOL)isUserNotificationsPermissionsStatusNotDetermined;

+(BOOL)isRemoteNotificationsPermissionsStatusGranted;

+(BOOL)isLocalNotificationsPermissionsStatusGranted;

+(BOOL)isPhonebookPermissionsGranted;
+(BOOL)isPhonebookPermissionsNotDetermined;

@end

@interface OTMLAskPermissionsCommand : OTMLActionCommandWithTriggerResult <OTMPAuthLocationDelegate>

+(OTMLAskPermissionsCommand*)getInstance;

-(OTMLNotificationsPermissionsTypes)notificationsRequestType;

-(void)triggerPopupGrantedForType:(OTMLNotificationsPermissionsTypes)aType;
-(void)triggerPopupDeniedForType:(OTMLNotificationsPermissionsTypes)aType;

@end

@interface OTMLOpenAppSystemSettingsPermissionsCommand : OTMLActionCommandWithTriggerResult

@end


