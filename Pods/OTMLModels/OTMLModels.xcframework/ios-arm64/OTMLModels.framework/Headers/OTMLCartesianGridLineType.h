typedef enum {
    OTMLCartesianGridLineType_none = 0,
    OTMLCartesianGridLineType_continuous = 1,
    OTMLCartesianGridLineType_dashed = 2
} OTMLCartesianGridLineType;

@interface OTMLCartesianGridLineTypeSupport : NSObject

+(OTMLCartesianGridLineType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLCartesianGridLineType) aValue;

@end
