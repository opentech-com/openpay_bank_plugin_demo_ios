//
//  OTMLTimedTriggersActionCommand.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLActionCommandSet.h"
#import "OTMLActionCommand.h"

@interface OTMLTimedTriggersActionCommand : OTMLActionCommandSet

@end

@interface OTMLScheduleTimedTriggerCommand : OTMLActionCommand

@end

@interface OTMLRemoveTimedTriggerCommand : OTMLActionCommand

@end

@interface OTMLPostponeTimedTriggerCommand : OTMLActionCommand

@end

@interface OTMLCleanTimedTriggerCommand : OTMLActionCommand

@end
