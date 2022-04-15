typedef enum {
    OTMLCameraCaptureOutputMode_max_resolution = 0,
    OTMLCameraCaptureOutputMode_match_preview = 1
} OTMLCameraCaptureOutputMode;

@interface OTMLCameraCaptureOutputModeSupport : NSObject

+(OTMLCameraCaptureOutputMode) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLCameraCaptureOutputMode) aValue;

@end
