//
//  OTMLStringParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 14/06/17.
//
//
#import "OTMLParamModeAbstractStrategy.h"


@interface OTMLStringParamModes : OTMLParamModeStrategyGroup
@end
@interface OTMLReplaceStringParamMode : OTMLParamModeStrategy
@end
@interface OTMLConcatStringParamMode : OTMLParamModeStrategy
@end
@interface OTMLTrimStringParamMode : OTMLParamModeStrategy
@end
@interface OTMLSplitStringParamMode : OTMLParamModeStrategy
@end
@interface OTMLSubstringStringParamMode : OTMLParamModeStrategy
@end
@interface OTMLBase64EncodeParamMode : OTMLParamModeStrategy
@end
@interface OTMLBase64DecodeParamMode : OTMLParamModeStrategy
@end
@interface OTMLStripDiacriticsStringParamMode : OTMLParamModeStrategy
@end
@interface OTMLQueryStringParamMode : OTMLParamModeStrategy

+ (NSString *) serializeForQueryURLParameters:(NSDictionary<NSString *,id> *)dictionary;

@end
@interface OTMLURLEncodeParamMode : OTMLParamModeStrategy
- (instancetype)initWithEncodeMode:(BOOL)_isEncodeMode;
@end
@interface OTMLChangeCaseStringParamMode : OTMLParamModeStrategy
@end
@interface OTMLLenghtStringParamMode : OTMLParamModeStrategy
@end
@interface OTMLDecomposeURLParamMode : OTMLParamModeStrategy
@end

@interface OTMLCardFormatterParamMode : OTMLParamModeStrategy
@end // payment_card_formatter
@interface OTMLCardTypeParamMode : OTMLParamModeStrategy
@end // payment_card_type
