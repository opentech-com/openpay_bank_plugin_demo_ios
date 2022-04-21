typedef enum {
    OTMLPopupButtonPosition_end = 0,
    OTMLPopupButtonPosition_start = 1
} OTMLPopupButtonPosition;

@interface OTMLPopupButtonPositionSupport : NSObject

+(OTMLPopupButtonPosition) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLPopupButtonPosition) aValue;

@end
