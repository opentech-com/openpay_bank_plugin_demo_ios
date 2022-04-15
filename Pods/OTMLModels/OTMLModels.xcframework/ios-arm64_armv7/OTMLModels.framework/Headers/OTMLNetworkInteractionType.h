typedef enum {
    OTMLNetworkInteractionType_post = 0,
    OTMLNetworkInteractionType_get = 1,
    OTMLNetworkInteractionType_put = 2,
    OTMLNetworkInteractionType_delete = 3,
    OTMLNetworkInteractionType_head = 4,
    OTMLNetworkInteractionType_patch = 5
} OTMLNetworkInteractionType;

@interface OTMLNetworkInteractionTypeSupport : NSObject

+(OTMLNetworkInteractionType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLNetworkInteractionType) aValue;

@end
