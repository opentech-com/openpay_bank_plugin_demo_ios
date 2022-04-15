//
//  OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "OTMLParamModeAbstractStrategy.h"


@interface OTMLDSParamModes : OTMLParamModeStrategyGroup
@end

@interface OTMLDSToJsonParamMode : OTMLParamModeStrategy
@end

@interface OTMLDSMinMaxParamMode : OTMLParamModeStrategy
- (instancetype)initWithMode:(BOOL)maxMode;
@end

@interface OTMLDSSearchParamMode : OTMLParamModeStrategy
@end
