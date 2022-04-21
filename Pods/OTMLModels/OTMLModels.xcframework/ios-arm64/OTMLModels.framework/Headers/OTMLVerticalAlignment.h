typedef enum {
    OTMLVerticalAlignment_top = 0,
    OTMLVerticalAlignment_middle = 1,
    OTMLVerticalAlignment_down = 2
} OTMLVerticalAlignment;

@interface OTMLVerticalAlignmentSupport : NSObject

+(OTMLVerticalAlignment) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLVerticalAlignment) aValue;

@end
