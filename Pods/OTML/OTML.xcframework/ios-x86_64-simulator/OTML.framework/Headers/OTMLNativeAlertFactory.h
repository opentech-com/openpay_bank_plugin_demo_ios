//
//  OTMLNativeAlertFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 06/05/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


@interface OTMLNativeAlertFactory : NSObject

+(void)showNativeAlertWithTitle:(NSString*)aTitle andBody:(NSString*)aBody;
+(void)showSessionExpiredNativeAlert;
+(void)showDownloadErrorNativeAlert;

+(void)showCantPrintErrorNativeAlert;
+(void)showCantSendEmailErrorNativeAlert;
+(void)showCantMakeCallErrorNativeAlert;
+(void)showCantOpenBrowserErrorNativeAlert;
+(void)showCantOpenSkypeErrorNativeAlert;

+(void)showGenericErrorNativeAlert;
+(void)showComunicationErrorNativeAlert:(NSError*) aerror;
+(void)showNoInternetErrorNativeAlert;
+(void)showOtmlUpdateErrorNativeAlert;

+(UIView*)showCloseAppWarningNativeAlert;

+(void)showSetLocaleRestartappRequiredNativeAlert;


@end
