typedef enum {
    OTMLHorizontalAlignment_left = 0,
    OTMLHorizontalAlignment_center = 1,
    OTMLHorizontalAlignment_right = 2
} OTMLHorizontalAlignment;

@interface OTMLHorizontalAlignmentSupport : NSObject

+(OTMLHorizontalAlignment) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLHorizontalAlignment) aValue;

@end
