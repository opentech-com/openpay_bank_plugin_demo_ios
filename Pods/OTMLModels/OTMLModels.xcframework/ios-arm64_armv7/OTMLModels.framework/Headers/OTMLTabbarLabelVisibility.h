typedef enum {
    OTMLTabbarLabelVisibility_auto = 0,
    OTMLTabbarLabelVisibility_selected = 1,
    OTMLTabbarLabelVisibility_labeled = 2,
    OTMLTabbarLabelVisibility_unlabeled = 3
} OTMLTabbarLabelVisibility;

@interface OTMLTabbarLabelVisibilitySupport : NSObject

+(OTMLTabbarLabelVisibility) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLTabbarLabelVisibility) aValue;

@end
