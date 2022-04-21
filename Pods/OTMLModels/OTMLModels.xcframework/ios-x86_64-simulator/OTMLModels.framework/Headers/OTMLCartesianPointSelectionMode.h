typedef enum {
    OTMLCartesianPointSelectionMode_none = 0,
    OTMLCartesianPointSelectionMode_line = 1,
    OTMLCartesianPointSelectionMode_balloon = 2
} OTMLCartesianPointSelectionMode;

@interface OTMLCartesianPointSelectionModeSupport : NSObject

+(OTMLCartesianPointSelectionMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLCartesianPointSelectionMode) aValue;

@end
