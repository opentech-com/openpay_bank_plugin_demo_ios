typedef enum {
    OTMLContentHandlingStrategy_replace = 0,
    OTMLContentHandlingStrategy_append = 1
} OTMLContentHandlingStrategy;

@interface OTMLContentHandlingStrategySupport : NSObject

+(OTMLContentHandlingStrategy) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLContentHandlingStrategy) aValue;

@end
