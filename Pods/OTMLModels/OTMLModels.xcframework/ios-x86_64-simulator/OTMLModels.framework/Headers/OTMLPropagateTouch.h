typedef enum {
    OTMLPropagateTouch_all = 0,
    OTMLPropagateTouch_none = 1,
    OTMLPropagateTouch_components = 2,
    OTMLPropagateTouch_containers = 3,
    OTMLPropagateTouch_by_id = 4
} OTMLPropagateTouch;

@interface OTMLPropagateTouchSupport : NSObject

+(OTMLPropagateTouch) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLPropagateTouch) aValue;

@end
