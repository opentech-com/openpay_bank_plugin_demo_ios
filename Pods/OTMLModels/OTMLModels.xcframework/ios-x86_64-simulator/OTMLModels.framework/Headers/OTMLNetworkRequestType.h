typedef enum {
    OTMLNetworkRequestType_post = 0,
    OTMLNetworkRequestType_get = 1,
    OTMLNetworkRequestType_raw_post = 2
} OTMLNetworkRequestType;

@interface OTMLNetworkRequestTypeSupport : NSObject

+(OTMLNetworkRequestType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLNetworkRequestType) aValue;

@end
