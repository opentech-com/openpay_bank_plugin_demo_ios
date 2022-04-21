typedef enum {
    OTMLTextInputCasing_unchanged = 0,
    OTMLTextInputCasing_uppercase = 1,
    OTMLTextInputCasing_lowercase = 2
} OTMLTextInputCasing;

@interface OTMLTextInputCasingSupport : NSObject

+(OTMLTextInputCasing) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLTextInputCasing) aValue;

@end
