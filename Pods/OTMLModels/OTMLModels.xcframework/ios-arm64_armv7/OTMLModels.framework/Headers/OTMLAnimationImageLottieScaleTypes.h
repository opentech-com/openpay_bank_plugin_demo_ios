typedef enum {
    OTMLAnimationImageLottieScaleTypes_none = 0,
    OTMLAnimationImageLottieScaleTypes_fit_center = 1,
    OTMLAnimationImageLottieScaleTypes_fit_xy = 2,
    OTMLAnimationImageLottieScaleTypes_center = 3,
    OTMLAnimationImageLottieScaleTypes_center_crop = 4,
    OTMLAnimationImageLottieScaleTypes_center_inside = 5,
    OTMLAnimationImageLottieScaleTypes_fit_end = 6,
    OTMLAnimationImageLottieScaleTypes_fit_start = 7,
    OTMLAnimationImageLottieScaleTypes_matrix = 8
} OTMLAnimationImageLottieScaleTypes;

@interface OTMLAnimationImageLottieScaleTypesSupport : NSObject

+(OTMLAnimationImageLottieScaleTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLAnimationImageLottieScaleTypes) aValue;

@end
