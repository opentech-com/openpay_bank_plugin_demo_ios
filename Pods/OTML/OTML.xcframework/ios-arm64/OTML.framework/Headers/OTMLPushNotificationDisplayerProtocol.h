//
//  OTMLPushNotificationDisplayerProtocol.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 29/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLPushNotificationModel.h"
#import "OTMLExternalEventModel.h"

@protocol OTMLPushNotificationDisplayerProtocol <NSObject>

-(BOOL) canDisplayPushNotification:(OTMLExternalEventModel*) aNotification;
-(BOOL) isBlackListedPushNotification:(OTMLExternalEventModel*) aNotification;
-(void) doDisplayPushNotification:(OTMLExternalEventModel*) aNotification;

@end
