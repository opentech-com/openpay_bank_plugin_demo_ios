//
//  OTMLNativeBridgeCommand.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/09/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLActionCommandSet.h"
#import "OTMLActionCommandWithTriggerResult.h"
#import <TOCropViewController/TOCropViewController.h>
#import <ContactsUI/ContactsUI.h>

@interface OTMLNativeBridgeCommand : OTMLActionCommandSet
@end



@interface OTMLOpenGalleryCommand : OTMLActionCommandWithTriggerResult <UIImagePickerControllerDelegate,UINavigationControllerDelegate>
-(void)openNativeViewController;
-(void)triggerOK;
-(void)triggerKO;
-(void)triggerUserAbort;
@end

@interface OTMLOpenNativePhonebookCommand : OTMLActionCommand <CNContactPickerDelegate>

@end

@interface OTMLOpenVideoCommand : OTMLActionCommandWithTriggerResult
-(void)playerViewControllerDidDismiss;
@end

@interface OTMLOpenCameraCommand : OTMLOpenGalleryCommand
@end
@interface OTMLOpenPhonebookCommand : OTMLActionCommand
@end
@interface OTMLOpenEditPhotoCommand : OTMLActionCommandWithTriggerResult <TOCropViewControllerDelegate>
@end

@interface OTMLIsNotificationInNotificationCenterCommand : OTMLActionCommand
@end
@interface OTMLRemoveNotificationFromNotificationCenterCommand : OTMLActionCommand
@end
@interface OTMLRemoveAllNotificationsFromNotificationCenterCommand : OTMLActionCommand
@end
@interface OTMLShowRatingNativePopupCommand : OTMLActionCommand
@end

@interface OTMLPickFileFromSystemCommand : OTMLActionCommandWithTriggerResult
@end
