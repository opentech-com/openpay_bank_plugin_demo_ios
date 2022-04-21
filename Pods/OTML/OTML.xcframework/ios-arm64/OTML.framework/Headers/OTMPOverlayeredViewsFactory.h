//
//  MPPopupFactory.h
//  OTML
//
//  Created by Alessandro Ruggeri on 24/09/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "OTMPToastFactory.h"
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

#define otml_OTMPOverlayeredViewsFactory_will_MOUNT_wait_view @"otml_OTMPOverlayeredViewsFactory_will_mount_wait_view"
#define otml_OTMPOverlayeredViewsFactory_will_UNmount_wait_view @"otml_OTMPOverlayeredViewsFactory_will_unmount_wait_view"

typedef enum {
    OTMPOverlayeredLoading_default = 0,
    OTMPOverlayeredLoading_lottie = 1
} OTMPOverlayeredLoading;

@interface OTMPOverlayeredViewsFactory : NSObject <OTMLRestartAppAwareProtocol>

+(OTMPOverlayeredViewsFactory*)getIstance;

-(OTMPOverlayeredLoading) loadingType;

@property (strong, nonatomic, readonly) UIWindow *window;

/**** WAIT ****/
-(void) mountWaitView;
-(void) removeWaitView;
-(BOOL) isTheWaitViewShown;

/**** TOAST ****/
-(void) makeToast:(NSString*)toastText withDuration:(CGFloat) aDuration;


/**** BG LOADING INDICATOR ****/
-(void) startBGActivityIndicator;
-(void) stopBGActivityIndicator;


@end

