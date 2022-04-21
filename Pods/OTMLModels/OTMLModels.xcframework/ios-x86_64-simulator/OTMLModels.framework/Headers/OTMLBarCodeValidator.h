typedef enum {
    OTMLBarCodeValidator_any = 0,
    OTMLBarCodeValidator_bollettino = 1
} OTMLBarCodeValidator;

@interface OTMLBarCodeValidatorSupport : NSObject

+(OTMLBarCodeValidator) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLBarCodeValidator) aValue;

@end
