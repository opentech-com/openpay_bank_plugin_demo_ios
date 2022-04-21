typedef enum {
    OTMLImageContentScale_none = 0,
    OTMLImageContentScale_fill = 1,
    OTMLImageContentScale_fit = 2
} OTMLImageContentScale;

@interface OTMLImageContentScaleSupport : NSObject

+(OTMLImageContentScale) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLImageContentScale) aValue;

@end
