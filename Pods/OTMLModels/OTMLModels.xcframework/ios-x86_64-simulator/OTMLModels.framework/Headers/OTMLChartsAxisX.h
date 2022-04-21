typedef enum {
    OTMLChartsAxisX_none = 0,
    OTMLChartsAxisX_top = 1,
    OTMLChartsAxisX_bottom = 2,
    OTMLChartsAxisX_both_sided = 3,
    OTMLChartsAxisX_top_inside = 4,
    OTMLChartsAxisX_bottom_inside = 5
} OTMLChartsAxisX;

@interface OTMLChartsAxisXSupport : NSObject

+(OTMLChartsAxisX) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLChartsAxisX) aValue;

@end
