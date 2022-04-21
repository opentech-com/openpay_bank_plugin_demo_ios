typedef enum {
    OTMLChartsPaintType_fill = 0,
    OTMLChartsPaintType_stroke = 1,
    OTMLChartsPaintType_fill_and_stroke = 2
} OTMLChartsPaintType;

@interface OTMLChartsPaintTypeSupport : NSObject

+(OTMLChartsPaintType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLChartsPaintType) aValue;

@end
