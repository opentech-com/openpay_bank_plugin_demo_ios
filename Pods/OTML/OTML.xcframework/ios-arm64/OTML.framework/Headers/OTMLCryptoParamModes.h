//
//  OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "OTMLParamModeAbstractStrategy.h"

@interface OTMLCryptoParamModes : OTMLParamModeStrategyGroup
@end

@interface OTMLSha256ParamMode : OTMLParamModeStrategy
@end

@interface OTMLPBKDF2ParamMode : OTMLParamModeStrategy
@end

@interface OTMLRandomNumberParamMode : OTMLParamModeStrategy
@end

@interface OTMLRandomBytesParamMode : OTMLParamModeStrategy
@end

@interface OTMLAESParamMode : OTMLParamModeStrategy
@end

@interface OTMLRSAEncryptParamMode : OTMLParamModeStrategy
@end

@interface OTMLRandomStringMode : OTMLParamModeStrategy
@end

@interface OTMLGetRSAPublicKeyParamMode : OTMLParamModeStrategy
@end

@interface OTMLRSADecryptParamMode : OTMLParamModeStrategy
@end
