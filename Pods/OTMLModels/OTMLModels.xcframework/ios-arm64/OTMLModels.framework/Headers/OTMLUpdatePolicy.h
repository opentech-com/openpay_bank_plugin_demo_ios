typedef enum {
    OTMLUpdatePolicy_synchronous = 0,
    OTMLUpdatePolicy_asynchronous = 1
} OTMLUpdatePolicy;

@interface OTMLUpdatePolicySupport : NSObject

+(OTMLUpdatePolicy) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLUpdatePolicy) aValue;

@end
