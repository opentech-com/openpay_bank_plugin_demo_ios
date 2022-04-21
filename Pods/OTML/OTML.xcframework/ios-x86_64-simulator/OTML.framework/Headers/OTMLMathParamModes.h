//
//  OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "OTMLParamModeAbstractStrategy.h"

@interface OTMLMathParamModes : OTMLParamModeStrategyGroup
@end

@interface OTMLMultiplicationParamMode : OTMLParamModeStrategy
@end

@interface OTMLSummationParamMode : OTMLParamModeStrategy
@end

@interface OTMLDivisionParamMode : OTMLParamModeStrategy
@end

@interface OTMLSubtractionParamMode : OTMLParamModeStrategy
@end

@interface OTMLPercentageAddParamMode : OTMLParamModeStrategy
@end

@interface OTMLPercentageSubtractParamMode : OTMLParamModeStrategy
@end

@interface OTMLModuloParamMode : OTMLParamModeStrategy
@end

@interface OTMLDecimalPartParamMode : OTMLParamModeStrategy
@end

@interface OTMLIntegerPartParamMode : OTMLParamModeStrategy
@end

@interface OTMLRoundingParamMode : OTMLParamModeStrategy
@end

@interface OTMLDateAddFieldParamMode : OTMLParamModeStrategy
@end

@interface OTMLLuhnChecksumDigitParamMode : OTMLParamModeStrategy
@end
