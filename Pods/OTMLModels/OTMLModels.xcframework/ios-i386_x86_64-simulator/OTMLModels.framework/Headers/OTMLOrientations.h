typedef enum {
    OTMLOrientations_v = 0,
    OTMLOrientations_h = 1
} OTMLOrientations;

@interface OTMLOrientationsSupport : NSObject

+(OTMLOrientations) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLOrientations) aValue;

@end
