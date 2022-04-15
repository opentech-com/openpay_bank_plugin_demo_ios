//
//  OTMLBridgeRelatedCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 26/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLActionCommandSet.h"

#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMessageComposeViewController.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import <Contacts/Contacts.h>
#import <ContactsUI/ContactsUI.h>
#import <StoreKit/StoreKit.h>

#import "OTMLActionCommandWithTriggerResult.h"

@interface OTMLFacebookPostCommand : OTMLActionCommand
@end

@interface OTMLActionShareCommand : OTMLActionCommand <UIDocumentInteractionControllerDelegate>
@end

@interface OTMLAskPushTokenCommand : OTMLActionCommand

@property (nonatomic, strong) NSString* firebaseSenderIdentifier;

+(OTMLAskPushTokenCommand*)getInstance;
-(void)triggerPushTokenDidCompletedSuccessfullyWithToken:(NSString*)aToken;
-(void)triggerPushTokenDidCompletedWithError;

@end

@interface OTMLMailToCommand : OTMLActionCommand <MFMailComposeViewControllerDelegate>
@end

@interface OTMLDriveToCommand : OTMLActionCommand
@end

@interface OTMLPrintCommand : OTMLActionCommand
@end

@interface OTMLMakeAToastCommand : OTMLActionCommand
@end

@interface OTMLOpenSkipeCommand : OTMLActionCommand
@end

@interface OTMLOpenBrowserCommand : OTMLActionCommand
@end

@interface OTMLOpenAppCommand : OTMLActionCommandWithTriggerResult <SKStoreProductViewControllerDelegate>
@end

@interface OTMLPhoneCallCommand : OTMLActionCommand
@end

@interface OTMLSetLocaleCommand : OTMLActionCommand
@end

@interface OTMLSMSToCommand : OTMLActionCommand <MFMessageComposeViewControllerDelegate>
@end

@interface OTMLChangeBrightnessToCommand : OTMLActionCommand
@end

@interface OTMLAppReadyCommand : OTMLActionCommand
@end

@interface OTMLMailCommand : OTMLActionCommand
@end

@interface DoShowLoading : OTMLActionCommand
@end

@interface DoSetBadgeCount : OTMLActionCommand
@end

@interface PasteboardCopyCommand : OTMLActionCommand
@end

@interface OTMLActionCookieResetCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLPhonebookLoadCommand : OTMLActionCommand
@end

@interface OTMLBridgeRelatedCommand : OTMLActionCommandSet
@end
