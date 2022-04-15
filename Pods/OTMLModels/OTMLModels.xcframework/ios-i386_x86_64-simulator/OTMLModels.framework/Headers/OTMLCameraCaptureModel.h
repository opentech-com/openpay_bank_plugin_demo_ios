#import "OTMLCameraCaptureOutputMode.h"
#import "OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_CameraCapture_did_take_picture;
extern NSString* const t_CameraCapture_camera_error;
//All triggers that are allowed by this component
extern NSString* const t_CameraCapture_take_picture;
extern NSString* const t_CameraCapture_switch_camera;
extern NSString* const t_CameraCapture_reset;



@interface OTMLCameraCaptureModel : OTMLComponentModel<NSCopying>

    /**
    A list of semicolon separated image manipulation parameter refs.
    After taking a picture, the component will stop the camera preview and display the picture processed by the FIRST image manipulator.
    */
    @property(nonatomic, strong) NSString* image_manipulation_param_refs;


/**
A list of semicolon separated flagforsrc names to retrieve the processed image.
If empty, for retrocompatibility it will assume the value OTMLCameraCaptureConstants.FALLBACK_FLAGFORSRC
*/
@property(nonatomic, strong) NSString* output_image_flagforsrcs;


@property(nonatomic, assign) OTMLCameraCaptureOutputMode output_mode;


@property(nonatomic, assign) BOOL start_with_front_camera;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end