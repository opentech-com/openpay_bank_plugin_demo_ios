typedef enum {
    OTMLChartsType_none = 0,
    OTMLChartsType_linechart_cubiclines = 1,
    OTMLChartsType_barchart = 2,
    OTMLChartsType_candlestickchart = 3
} OTMLChartsType;

@interface OTMLChartsTypeSupport : NSObject

+(OTMLChartsType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLChartsType) aValue;

@end
