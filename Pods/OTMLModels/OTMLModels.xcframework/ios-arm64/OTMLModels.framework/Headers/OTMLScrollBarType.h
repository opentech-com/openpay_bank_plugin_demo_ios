typedef enum {
    OTMLScrollBarType_h = 0,
    OTMLScrollBarType_v = 1,
    OTMLScrollBarType_n = 2
} OTMLScrollBarType;

@interface OTMLScrollBarTypeSupport : NSObject

+(OTMLScrollBarType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLScrollBarType) aValue;

@end
