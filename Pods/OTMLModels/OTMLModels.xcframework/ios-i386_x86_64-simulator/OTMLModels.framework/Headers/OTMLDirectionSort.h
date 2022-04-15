typedef enum {
    OTMLDirectionSort_desc = 0,
    OTMLDirectionSort_asc = 1
} OTMLDirectionSort;

@interface OTMLDirectionSortSupport : NSObject

+(OTMLDirectionSort) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLDirectionSort) aValue;

@end
