//
//  OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "OTMLParamModeAbstractStrategy.h"


@interface OTMLParameterManipulationParamModes : OTMLParamModeStrategyGroup
@end


@interface OTMLParameterResolveParamMode : OTMLParamModeStrategy
@end

@interface OTMLParameterRefParamMode : OTMLParamModeStrategy
@end

@interface OTMLCustomParamMode : OTMLParamModeStrategy

+(OTMLParamModeStrategy*) customParamModeStrategyFromCMode:(NSString*) aCustomModeStr;

@end
