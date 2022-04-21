//
//  OTMLFormatterParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 16/06/17.
//
//

#import "OTMLParamModeAbstractStrategy.h"


@interface OTMLNumberFormatParamMode : OTMLParamModeStrategy
@end

@interface OTMLNumberParseParamMode : OTMLParamModeStrategy
@end

@interface OTMLDateFormatParamMode : OTMLParamModeStrategy
@end

@interface OTMLDateParseParamMode : OTMLParamModeStrategy
@end

@interface OTMLIbanFormatParameterMode : OTMLParamModeStrategy
@end

@interface OTMLParsePhoneNumberParameterMode : OTMLParamModeStrategy
@end


@interface OTMLFormatterParamModes : OTMLParamModeStrategyGroup
@end


