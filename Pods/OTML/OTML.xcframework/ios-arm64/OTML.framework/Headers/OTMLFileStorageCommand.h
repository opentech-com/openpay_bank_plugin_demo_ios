//
//  OTMLSecureStorageCommand.h
//  Pods
//
//  Created by Valerio Ferrantelli on 06/02/17.
//
//

#import "OTMLActionCommandSet.h"
#import "OTMLActionCommandWithTriggerResult.h"

@interface OTMLFileStorageWriteCommand : OTMLActionCommandWithTriggerResult

@end

@interface OTMLFileStorageDeleteCommand : OTMLActionCommandWithTriggerResult

@end

@interface OTMLFileStorageCleanCommand : OTMLActionCommandWithTriggerResult

@end

@interface OTMLFileStorageReadCommand : OTMLActionCommandWithTriggerResult

@end

@interface OTMLFileStorageCommand : OTMLActionCommandSet



@end
