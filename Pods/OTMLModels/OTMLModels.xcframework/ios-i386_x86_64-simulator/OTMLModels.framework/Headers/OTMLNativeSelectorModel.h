@class OTMPColor;
#import "OTMLHorizontalAlignment.h"
#import "OTMLTextResolutionMode.h"
#import "OTMLComponentModel.h"
#import "OTMLAnchors.h"
#import "OTMLVerticalAlignment.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_NativeSelector_on_focus;
extern NSString* const t_NativeSelector_value_change;
extern NSString* const t_NativeSelector_did_clear;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_NativeSelector_default_picker_index;
extern NSString* const p_NativeSelector_index;
extern NSString* const p_NativeSelector_reference_ds;
extern NSString* const p_NativeSelector_placeholder;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_NativeSelector_index;
extern NSString* const f_NativeSelector_value;
extern NSString* const f_NativeSelector_label;

@interface OTMLNativeSelectorModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) NSString* clear_image;


@property(nonatomic, assign) OTMLHorizontalAlignment content_align;


@property(nonatomic, assign) OTMLVerticalAlignment content_v_align;


@property(nonatomic, strong) NSString* custom_done_text;


@property(nonatomic, strong) NSString* custom_next_text;


@property(nonatomic, strong) NSString* custom_prev_text;


@property(nonatomic, assign) NSInteger default_picker_index;


@property(nonatomic, assign) BOOL enable_clear_button;


@property(nonatomic, assign) BOOL floatingPlaceholder;


@property(nonatomic, assign) NSInteger floating_placeholder_distance;


@property(nonatomic, strong) OTMLFont* font_style_name;


@property(nonatomic, assign) NSInteger index;


/**
Usate questo campo per specificare il campo del DS (con ds_path=this.reference_ds)  da tornare come "text"
*/
@property(nonatomic, strong) NSString* label_ds_path;


@property(nonatomic, strong) OTMPColor* picker_bg_color;


@property(nonatomic, strong) NSString* placeholder;


@property(nonatomic, strong) OTMLFont* placeholder_font_style_name;


@property(nonatomic, strong) NSString* reference_ds;


/**
Defines the keyboard anchor for iPhone4 class display.
If "none" the textfield will not move
If "top" the textfield will keep the offset from top
If "bottom" the textfield will keep the offset from bottom (so from keyboard)
*/
@property(nonatomic, assign) OTMLAnchors responder_anchor;


/**
Defines the offset for iPhone4 class display.
It must be defined not 0 only if responder_anchor is not "none"
*/
@property(nonatomic, assign) NSInteger responder_min_offset;


/**
Defines the offset for iPhone4 class display.
It must be defined not 0 only if responder_anchor is not "none"
*/
@property(nonatomic, assign) NSInteger responder_offset;


@property(nonatomic, assign) OTMLTextResolutionMode text_resolution_mode_label;


@property(nonatomic, assign) OTMLTextResolutionMode text_resolution_mode_value;


/**
Usate questo campo per specificare il campo del DS (con ds_path=this.reference_ds)  da trattare come "value"
*/
@property(nonatomic, strong) NSString* value_ds_path;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end