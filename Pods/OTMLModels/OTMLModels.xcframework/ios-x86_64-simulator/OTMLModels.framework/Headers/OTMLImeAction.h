typedef enum {
    OTMLImeAction_none = 0,
    OTMLImeAction_done = 1,
    OTMLImeAction_next = 2,
    OTMLImeAction_search = 3,
    OTMLImeAction_send = 4,
    OTMLImeAction_go = 5
} OTMLImeAction;

@interface OTMLImeActionSupport : NSObject

+(OTMLImeAction) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLImeAction) aValue;

@end
