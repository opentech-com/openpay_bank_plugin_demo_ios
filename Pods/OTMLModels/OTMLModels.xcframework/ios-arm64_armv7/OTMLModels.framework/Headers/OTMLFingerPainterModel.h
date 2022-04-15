@class OTMPColor;
#import "OTMLComponentModel.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_FingerPainter_did_start_drawing;
//All triggers that are allowed by this component
extern NSString* const t_FingerPainter_reset;


//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_FingerPainter_paint;
extern NSString* const f_FingerPainter_has_drawing;

@interface OTMLFingerPainterModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) NSInteger bitmap_width;


@property(nonatomic, strong) OTMLFont* font_style_name;


@property(nonatomic, strong) OTMPColor* stroke_color;


@property(nonatomic, assign) NSInteger stroke_width;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end