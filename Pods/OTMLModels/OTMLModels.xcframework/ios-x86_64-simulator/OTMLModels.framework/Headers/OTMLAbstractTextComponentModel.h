#import "OTMLHorizontalAlignment.h"
#import "OTMLComponentModel.h"
#import "OTMLVerticalAlignment.h"
@class OTMLFont;




//All parameters that are accepted in INPUT by this component
extern NSString* const p_AbstractTextComponent_font_style_name;
extern NSString* const p_AbstractTextComponent_text;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_AbstractTextComponent_text;

@interface OTMLAbstractTextComponentModel : OTMLComponentModel<NSCopying>

    /**
    Horizontal text alignment.
    Please keep in mind that this is useful whenever the text component is bigger than text (eg. has no value when with is wrap)
    */
    @property(nonatomic, assign) OTMLHorizontalAlignment content_align;


@property(nonatomic, assign) OTMLVerticalAlignment content_v_align;


/**
Font style to be used for (main) text
*/
@property(nonatomic, strong) OTMLFont* font_style_name;


@property(nonatomic, assign) BOOL notify_privacy;


@property(nonatomic, strong) NSString* text;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end