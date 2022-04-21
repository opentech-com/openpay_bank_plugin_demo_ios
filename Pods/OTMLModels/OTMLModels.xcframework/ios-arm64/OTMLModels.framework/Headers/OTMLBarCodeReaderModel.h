#import "OTMLBarCodeType.h"
#import "OTMLComponentModel.h"
#import "OTMLBarCodeValidator.h"


//All triggers that are allowed by this component
extern NSString* const t_BarCodeReader_barcode_read;
extern NSString* const t_BarCodeReader_camera_error;
extern NSString* const t_BarCodeReader_invalid_barcode_read;
//All triggers that are allowed by this component
extern NSString* const t_BarCodeReader_start_capture;
extern NSString* const t_BarCodeReader_clean_scan_result;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_BarCodeReader_barcode_type;
extern NSString* const p_BarCodeReader_validator;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_BarCodeReader_text;
extern NSString* const f_BarCodeReader_barcode_format;

@interface OTMLBarCodeReaderModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) OTMLBarCodeType barcode_type;


@property(nonatomic, assign) OTMLBarCodeValidator validator;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end