//
//  OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "OTMLParamModeAbstractStrategy.h"


@interface OTMLNetworkUtilParamModes : OTMLParamModeStrategyGroup
@end

@interface OTMLBasicAuthHeaderParamMode : OTMLParamModeStrategy
@end

@interface OTMLCacheEtagListParameterMode : OTMLParamModeStrategy
@end
