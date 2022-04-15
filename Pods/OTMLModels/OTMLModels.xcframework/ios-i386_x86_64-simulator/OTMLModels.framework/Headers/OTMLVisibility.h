typedef enum {
    OTMLVisibility_visible = 0,
    OTMLVisibility_collapsed = 1,
    OTMLVisibility_invisible = 2,
    OTMLVisibility_collapsed_h = 3,
    OTMLVisibility_collapsed_both = 4,
    OTMLVisibility_collapsed_v = 5
} OTMLVisibility;

@interface OTMLVisibilitySupport : NSObject

+(OTMLVisibility) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLVisibility) aValue;

@end
