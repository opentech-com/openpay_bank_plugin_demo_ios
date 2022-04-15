//
//  OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "OTMLParamModeAbstractStrategy.h"


@interface OTMLSecureStorageParamModes : OTMLParamModeStrategyGroup
@end

@interface OTMLSecureStorageReadParamMode : OTMLParamModeStrategy
@end

@interface OTMLFileStorageReadParamMode : OTMLParamModeStrategy
@end

@interface OTMLRamStorageReadParamMode : OTMLParamModeStrategy
@end

@interface OTMLBackupFileParamMode : OTMLParamModeStrategy
@end

