#import "OTMLImageContentScale.h"
#import "OTMLHorizontalAlignment.h"
#import "OTMLComponentModel.h"
#import "OTMLVerticalAlignment.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_Image_image_n;
extern NSString* const p_Image_image_d;
extern NSString* const p_Image_image_p;
extern NSString* const p_Image_image_s;
extern NSString* const p_Image_image_sp;
extern NSString* const p_Image_content_scale;

@interface OTMLImageModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) OTMLHorizontalAlignment content_align;


/**
describe how to scale the image content
*/
@property(nonatomic, assign) OTMLImageContentScale content_scale;


@property(nonatomic, assign) OTMLVerticalAlignment content_v_align;


/**
image in disabled state
*/
@property(nonatomic, strong) NSString* image_d;


/**
image in normal state
*/
@property(nonatomic, strong) NSString* image_n;


/**
image in pressed state
*/
@property(nonatomic, strong) NSString* image_p;


/**
image in selected state
*/
@property(nonatomic, strong) NSString* image_s;


/**
image in selected + pressed state
*/
@property(nonatomic, strong) NSString* image_sp;


/**
repeat the image (eg. as a texture)
*/
@property(nonatomic, assign) BOOL repeat;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end