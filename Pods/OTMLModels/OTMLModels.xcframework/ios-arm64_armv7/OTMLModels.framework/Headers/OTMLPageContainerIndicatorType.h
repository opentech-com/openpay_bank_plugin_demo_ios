typedef enum {
    OTMLPageContainerIndicatorType_bullets = 0,
    OTMLPageContainerIndicatorType_lines = 1,
    OTMLPageContainerIndicatorType_names = 2
} OTMLPageContainerIndicatorType;

@interface OTMLPageContainerIndicatorTypeSupport : NSObject

+(OTMLPageContainerIndicatorType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLPageContainerIndicatorType) aValue;

@end
