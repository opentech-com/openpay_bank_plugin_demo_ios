#import "OTMLAbstractTextComponentModel.h"
#import "OTMLTextCasing.h"


//All triggers that are allowed by this component
extern NSString* const t_Label_did_click_link;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_Label_adjusts_font_size;
extern NSString* const p_Label_max_lines;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_Label_last_clicked_link;

@interface OTMLLabelModel : OTMLAbstractTextComponentModel<NSCopying>

    /**
    Allow point size reduction if text does not fit size
    It only make sense if the text container is not wrapping text itself
    */
    @property(nonatomic, assign) BOOL adjustsFontSize;


/**
Defining a blik_color the textfield will blink to this color during text change
*/
@property(nonatomic, strong) NSString* blink_color;


/**
attiva gestione link, se attivo anche enable_rick_text (trigger ai link, ....)
*/
@property(nonatomic, assign) BOOL enable_links;


/**
attiva gestione tag html (bold, link, ....)
*/
@property(nonatomic, assign) BOOL enable_rich_text;


@property(nonatomic, assign) BOOL ignore_system_font_resizing;


/**
Show at most this many text lines. If the text is longer, it will be truncated at the end with an ellipsis character (...)
*/
@property(nonatomic, assign) NSInteger max_lines;


/**
Propagate the press to another component. Please use it only on Label
*/
@property(nonatomic, strong) NSString* pressed_for;


/**
casing that will be re-applied
*/
@property(nonatomic, assign) OTMLTextCasing text_casing;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end