typedef enum {
    OTMLRedirectionPolicy_host = 0,
    OTMLRedirectionPolicy_no = 1,
    OTMLRedirectionPolicy_yes = 2
} OTMLRedirectionPolicy;

@interface OTMLRedirectionPolicySupport : NSObject

+(OTMLRedirectionPolicy) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLRedirectionPolicy) aValue;

@end
