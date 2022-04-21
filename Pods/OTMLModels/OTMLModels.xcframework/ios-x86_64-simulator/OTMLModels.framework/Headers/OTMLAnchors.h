typedef enum {
    OTMLAnchors_bottom = 0,
    OTMLAnchors_top = 1
} OTMLAnchors;

@interface OTMLAnchorsSupport : NSObject

+(OTMLAnchors) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLAnchors) aValue;

@end
