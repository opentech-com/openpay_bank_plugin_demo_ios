typedef enum {
    OTMLComponentErrorMode_self_full = 0,
    OTMLComponentErrorMode_self_bg = 1,
    OTMLComponentErrorMode_none = 2
} OTMLComponentErrorMode;

@interface OTMLComponentErrorModeSupport : NSObject

+(OTMLComponentErrorMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLComponentErrorMode) aValue;

@end
