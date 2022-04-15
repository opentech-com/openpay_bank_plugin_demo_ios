typedef enum {
    OTMLImageSlideshowAnimationTypes_none = 0,
    OTMLImageSlideshowAnimationTypes_enter_from_left = 1,
    OTMLImageSlideshowAnimationTypes_enter_from_right = 2,
    OTMLImageSlideshowAnimationTypes_enter_from_top = 3,
    OTMLImageSlideshowAnimationTypes_enter_from_bottom = 4,
    OTMLImageSlideshowAnimationTypes_exit_to_left = 5,
    OTMLImageSlideshowAnimationTypes_exit_to_right = 6,
    OTMLImageSlideshowAnimationTypes_exit_to_top = 7,
    OTMLImageSlideshowAnimationTypes_exit_to_bottom = 8,
    OTMLImageSlideshowAnimationTypes_fade_in = 9,
    OTMLImageSlideshowAnimationTypes_fade_out = 10,
    OTMLImageSlideshowAnimationTypes_fade_in_out = 11
} OTMLImageSlideshowAnimationTypes;

@interface OTMLImageSlideshowAnimationTypesSupport : NSObject

+(OTMLImageSlideshowAnimationTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLImageSlideshowAnimationTypes) aValue;

@end
