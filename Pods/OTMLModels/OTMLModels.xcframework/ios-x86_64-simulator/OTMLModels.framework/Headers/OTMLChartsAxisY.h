typedef enum {
    OTMLChartsAxisY_none = 0,
    OTMLChartsAxisY_left_out_side = 1,
    OTMLChartsAxisY_left_inside_side = 2,
    OTMLChartsAxisY_right_out_side = 3,
    OTMLChartsAxisY_right_inside_side = 4,
    OTMLChartsAxisY_both_out_side = 5,
    OTMLChartsAxisY_both_inside_side = 6
} OTMLChartsAxisY;

@interface OTMLChartsAxisYSupport : NSObject

+(OTMLChartsAxisY) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLChartsAxisY) aValue;

@end
