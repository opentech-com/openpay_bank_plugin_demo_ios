typedef enum {
    OTMLTextResolutionMode_language_manager = 0,
    OTMLTextResolutionMode_literal = 1,
    OTMLTextResolutionMode_resolve_value = 2
} OTMLTextResolutionMode;

@interface OTMLTextResolutionModeSupport : NSObject

+(OTMLTextResolutionMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLTextResolutionMode) aValue;

@end
