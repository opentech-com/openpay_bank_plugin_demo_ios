//
//  OTMLSecureStorageCommand.h
//  Pods
//
//  Created by Valerio Ferrantelli on 06/02/17.
//
//

#import "OTMLActionCommandSet.h"
#import "OTMLActionCommandWithTriggerResult.h"

@interface OTMLRamStorageWriteCommand : OTMLActionCommandWithTriggerResult

@end

@interface OTMLRamStorageDeleteCommand : OTMLActionCommandWithTriggerResult

@end

@interface OTMLRamStorageCleanCommand : OTMLActionCommandWithTriggerResult

@end


@interface OTMLRamStorageCommand : OTMLActionCommandSet



@end
