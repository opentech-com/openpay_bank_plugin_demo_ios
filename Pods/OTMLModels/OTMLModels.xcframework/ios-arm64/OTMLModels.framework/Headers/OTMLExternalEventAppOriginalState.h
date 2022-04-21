typedef enum {
    OTMLExternalEventAppOriginalState_foreground = 0,
    OTMLExternalEventAppOriginalState_opening = 1,
    OTMLExternalEventAppOriginalState_background = 2
} OTMLExternalEventAppOriginalState;

@interface OTMLExternalEventAppOriginalStateSupport : NSObject

+(OTMLExternalEventAppOriginalState) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLExternalEventAppOriginalState) aValue;

@end
