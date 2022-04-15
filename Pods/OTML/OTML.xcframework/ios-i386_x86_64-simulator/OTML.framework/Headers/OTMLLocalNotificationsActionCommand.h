//
//  OTMLLocalNotificationsActionCommand.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 27/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLActionCommand.h"
#import "OTMLActionCommandSet.h"
#import "OTMLActionCommandWithTriggerResult.h"

@interface OTMLLocalNotificationsActionCommand : OTMLActionCommandSet
@end

@interface OTMLLocalNotificationsCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLRemoveLocalNotificationCommand : OTMLActionCommand
@end

@interface OTMLPostponeLocalNotificationCommand : OTMLActionCommand
@end

@interface OTMLCleanLocalNotificationsCommand: OTMLActionCommand
@end
