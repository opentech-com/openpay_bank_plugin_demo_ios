typedef enum {
    OTMLAuthenticationMode_none = 0,
    OTMLAuthenticationMode_biometric = 1,
    OTMLAuthenticationMode_passcode = 2,
    OTMLAuthenticationMode_passcode_or_biometric = 3
} OTMLAuthenticationMode;

@interface OTMLAuthenticationModeSupport : NSObject

+(OTMLAuthenticationMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLAuthenticationMode) aValue;

@end
