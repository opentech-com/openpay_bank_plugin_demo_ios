typedef enum {
    OTMLInputKeyboardType_alphanumeric = 0,
    OTMLInputKeyboardType_alphanumericOnNumber = 1,
    OTMLInputKeyboardType_numericDecimal = 2,
    OTMLInputKeyboardType_numberOnly = 3,
    OTMLInputKeyboardType_phonePad = 4,
    OTMLInputKeyboardType_url = 5,
    OTMLInputKeyboardType_email = 6
} OTMLInputKeyboardType;

@interface OTMLInputKeyboardTypeSupport : NSObject

+(OTMLInputKeyboardType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLInputKeyboardType) aValue;

@end
