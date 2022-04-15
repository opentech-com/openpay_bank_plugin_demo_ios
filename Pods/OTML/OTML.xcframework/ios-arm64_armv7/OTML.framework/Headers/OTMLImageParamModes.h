//
//  OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "OTMLParamModeAbstractStrategy.h"

@class OTMLImage;

@interface OTMLImageParamModes : OTMLParamModeStrategyGroup
@end

@interface OTMLImageManipulationParamMode : OTMLParamModeStrategy<OTMLAsyncParamModeStrategy, OTMLNotSingletonParamModeStrategy>

@property(nonatomic, retain) OTMLImage* srcUIImage;

@end

@interface OTMLImageSizeParamMode : OTMLParamModeStrategy
@end

@interface OTMLDimensionToPxParamMode : OTMLParamModeStrategy
@end

@interface OTMLPxToDimensionParamMode : OTMLParamModeStrategy
@end

@interface OTMLImageFromTextParamMode : OTMLParamModeStrategy
@end

