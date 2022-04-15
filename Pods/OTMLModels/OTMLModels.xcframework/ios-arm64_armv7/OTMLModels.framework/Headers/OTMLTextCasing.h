typedef enum {
    OTMLTextCasing_unchanged = 0,
    OTMLTextCasing_uppercase = 1,
    OTMLTextCasing_lowercase = 2,
    OTMLTextCasing_capitalWords = 3,
    OTMLTextCasing_capitalSentences = 4
} OTMLTextCasing;

@interface OTMLTextCasingSupport : NSObject

+(OTMLTextCasing) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLTextCasing) aValue;

@end
