typedef enum {
    OTMLPopupButtonStyle_accept = 0,
    OTMLPopupButtonStyle_dismiss = 1,
    OTMLPopupButtonStyle_destructive = 2
} OTMLPopupButtonStyle;

@interface OTMLPopupButtonStyleSupport : NSObject

+(OTMLPopupButtonStyle) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLPopupButtonStyle) aValue;

@end
