//
//  OTMLAppExposedHooks.h
//  OTML
//
//  Created by Silvio D'Angelo on 12/12/2019.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMLAppExposedHooks : NSObject
// blocchi di codice, vedi: http://fuckingblocksyntax.com

/*
 Hook for App layer redefinition of non OTML network response (tipically, server side courtesy pages).
 returns: YES if the invalid responseData still needs to be handled (that is: when you did not handle it yourself).
 */
@property (nonatomic, copy, nullable) BOOL(^onInvalidNetworkResponseData)(NSData *);

/*
 Hook for App layer redefinition of the view controlelr mounted when screen recording is enabled. The default is the BootScreenViewController.
 returns: The view controller to mount
 */
@property (nonatomic, copy, nullable) UIViewController*(^onScreenRecordDetected)(void);


/*
 Hook for BootScreenViewCOntroller's background image (should be tha same image used as splashscreen).
 */
@property (nonatomic, copy, nullable) UIImage*(^splashScreenBackgroundImage)(void);

/*
 Hook for retrieving MT's activation ID from Framework
 */
@property (nonatomic, copy, nullable) NSString*(^MTactivationID)(void);

/*
 Hook for retrieving MT's status
 */
@property (nonatomic, copy, nullable) NSInteger(^MTstatus)(void);

/*
 Hook for retrieving apple pay's virtualized cards that requires activation as json
 */
@property (nonatomic, copy, nullable) NSString*(^applePayCardsThatRequiresActivationAsJSON)(void);


/*
 Hook for App layer customization of OTML implementation of [OTMLAppDelegate application: didRegisterForRemoteNotificationsWithDeviceToken:].
 Depending on app requirements, it may or may not be necessary to call [[OTMLAskPushTokenCommand getInstance] triggerPushTokenDidCompletedSuccessfullyWithToken:] with the token you have obtained from the data in the devToken parameter.
 */
@property (nonatomic, copy, nullable) void(^customPushNotificationDeviceTokenHandler)(NSData* devToken);


@end

NS_ASSUME_NONNULL_END
