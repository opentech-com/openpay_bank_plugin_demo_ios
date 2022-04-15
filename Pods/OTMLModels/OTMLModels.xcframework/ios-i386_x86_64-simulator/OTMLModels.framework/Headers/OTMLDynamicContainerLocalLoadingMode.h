typedef enum {
    OTMLDynamicContainerLocalLoadingMode_storage = 0,
    OTMLDynamicContainerLocalLoadingMode_mapstack = 1
} OTMLDynamicContainerLocalLoadingMode;

@interface OTMLDynamicContainerLocalLoadingModeSupport : NSObject

+(OTMLDynamicContainerLocalLoadingMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLDynamicContainerLocalLoadingMode) aValue;

@end
