typedef enum {
    OTMLInvalidateMode_none = 0,
    OTMLInvalidateMode_passcode_reset = 1,
    OTMLInvalidateMode_passcode_reset_or_fingerset_changed = 2,
    OTMLInvalidateMode_fingerset_changed = 3
} OTMLInvalidateMode;

@interface OTMLInvalidateModeSupport : NSObject

+(OTMLInvalidateMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLInvalidateMode) aValue;

@end
