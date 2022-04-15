//
//  OTApplePayBridge.h
//  Pods
//
//  Created by Silvio D'Angelo on 14/01/22.
//

#import <Foundation/Foundation.h>
#import <PassKit/PassKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTApplePayBridge : NSObject
/**
 @return the OTMPApplePayUtils sharedInstance
 */
+(nonnull OTApplePayBridge*) sharedInstance;

/**
 Open AppleWallet
 @note Will try to open passbook regardless of iOS version (it will try even in iOS < 8)
 **/
-(BOOL) openAppleWallet;
/**
 Open Setup of a new card in AppleWallet.
 @note Will do nothing in iOS < 8
 **/
-(void) openCardSetupInAppleWallet;

/**
 Open Passbook selecting the first virtualized card matching the provided suffix
 @param aSuffix the suffix that the card needs to have
 @return YES if AppleWallet has been opened
 @note Will allways return NO in iOS < 8
 **/
-(BOOL) openCardInfoInAppleWalletForFirstCardWithSuffix:(nullable NSString*)aSuffix;


@end

NS_ASSUME_NONNULL_END
