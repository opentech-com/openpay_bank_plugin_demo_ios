typedef enum {
    OTMLAnimationTypes_none = 0,
    OTMLAnimationTypes_flip_horizontal_left = 1,
    OTMLAnimationTypes_flip_horizontal_right = 2,
    OTMLAnimationTypes_curl_up = 3,
    OTMLAnimationTypes_curl_down = 4,
    OTMLAnimationTypes_linear_vertical_top_bottom = 5,
    OTMLAnimationTypes_linear_vertical_bottom_top = 6,
    OTMLAnimationTypes_linear_horizontal_right_left = 7,
    OTMLAnimationTypes_linear_horizontal_left_right = 8
} OTMLAnimationTypes;

@interface OTMLAnimationTypesSupport : NSObject

+(OTMLAnimationTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLAnimationTypes) aValue;

@end
