typedef enum {
    OTMLMapTypes_roads = 0,
    OTMLMapTypes_sat = 1,
    OTMLMapTypes_hybrid = 2
} OTMLMapTypes;

@interface OTMLMapTypesSupport : NSObject

+(OTMLMapTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLMapTypes) aValue;

@end
