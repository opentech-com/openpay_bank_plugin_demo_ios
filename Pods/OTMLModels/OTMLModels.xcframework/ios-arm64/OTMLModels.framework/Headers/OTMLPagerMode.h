typedef enum {
    OTMLPagerMode_panorama = 0,
    OTMLPagerMode_pivot = 1
} OTMLPagerMode;

@interface OTMLPagerModeSupport : NSObject

+(OTMLPagerMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLPagerMode) aValue;

@end
