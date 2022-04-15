#import "OTMLBarCodeFormat.h"
#import "OTMLComponentModel.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_BarCodeGenerator_barcode_generation_did_fail;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_BarCodeGenerator_text;
extern NSString* const p_BarCodeGenerator_barcode_format;
extern NSString* const p_BarCodeGenerator_text_font_style_name;

@interface OTMLBarCodeGeneratorModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) OTMLBarCodeFormat barcode_format;


@property(nonatomic, assign) BOOL rotate;


@property(nonatomic, strong) OTMLFont* text_font_style_name;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end