//
//  OTMLSecureStorageCommand.h
//  Pods
//
//  Created by Valerio Ferrantelli on 06/02/17.
//
//

#import "OTMLActionCommandSet.h"
#import "OTMLActionCommandWithTriggerResult.h"

@interface OTMLSecureStorageWriteCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLSecureStorageDeleteCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLSecureStorageCleanCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLSecureStorageReadCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLRSAKeyPairGenerationCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLBackupValuePutCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLBackupValueDeleteValueCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLBackupValueDeleteFileCommand : OTMLActionCommandWithTriggerResult
@end

@interface OTMLBackupValueDeleteAllFilesCommand : OTMLActionCommandWithTriggerResult
@end


@interface OTMLSecureStorageCommand : OTMLActionCommandSet

+(NSString*)getAccount;
+(NSString*)doRead:(NSString*)key;
+(BOOL)doExists:(NSString*)key;

@end
