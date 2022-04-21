typedef enum {
    OTMLSize_medium = 0,
    OTMLSize_small = 1,
    OTMLSize_large = 2
} OTMLSize;

@interface OTMLSizeSupport : NSObject

+(OTMLSize) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLSize) aValue;

@end
