typedef enum {
    OTMLSortableTypes_string = 0,
    OTMLSortableTypes_integer = 1,
    OTMLSortableTypes_decimal = 2,
    OTMLSortableTypes_date = 3
} OTMLSortableTypes;

@interface OTMLSortableTypesSupport : NSObject

+(OTMLSortableTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLSortableTypes) aValue;

@end
