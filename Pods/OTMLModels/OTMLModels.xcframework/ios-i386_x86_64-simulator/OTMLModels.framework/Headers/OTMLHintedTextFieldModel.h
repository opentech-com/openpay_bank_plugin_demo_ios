@class OTMPColor;
#import "OTMLTextFieldModel.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_HintedTextField_hint_selected;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_HintedTextField_reference_hint_datasource;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_HintedTextField_hint_resp;
extern NSString* const f_HintedTextField_hint_resp1;
extern NSString* const f_HintedTextField_hint_resp2;
extern NSString* const f_HintedTextField_hint_resp3;
extern NSString* const f_HintedTextField_hint_resp4;
extern NSString* const f_HintedTextField_hint_resp5;
extern NSString* const f_HintedTextField_hint_resp6;
extern NSString* const f_HintedTextField_hint_resp7;
extern NSString* const f_HintedTextField_hint_resp8;
extern NSString* const f_HintedTextField_hint_resp9;
extern NSString* const f_HintedTextField_hint_resp10;
extern NSString* const f_HintedTextField_hint_resp11;
extern NSString* const f_HintedTextField_hint_resp12;
extern NSString* const f_HintedTextField_hint_resp13;
extern NSString* const f_HintedTextField_hint_resp14;
extern NSString* const f_HintedTextField_hint_resp15;

@interface OTMLHintedTextFieldModel : OTMLTextFieldModel<NSCopying>

    @property(nonatomic, strong) OTMPColor* hint_bg_color;


@property(nonatomic, strong) OTMPColor* hint_bg_color_row_normal;


@property(nonatomic, strong) OTMPColor* hint_bg_color_row_pressed;


@property(nonatomic, assign) NSInteger hint_bg_height;


@property(nonatomic, strong) NSString* hint_bg_image_row_normal;


@property(nonatomic, strong) NSString* hint_bg_image_row_pressed;


@property(nonatomic, strong) NSString* hint_bg_padding;


@property(nonatomic, strong) NSString* hint_bg_row_padding;


@property(nonatomic, strong) NSString* hint_bgimage;


@property(nonatomic, strong) OTMLFont* hint_highlight_font;


@property(nonatomic, strong) NSString* hint_label_ds_path;


@property(nonatomic, strong) OTMLFont* hint_label_font;


@property(nonatomic, strong) NSString* hint_param_resp10_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp11_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp12_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp13_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp14_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp15_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp1_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp2_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp3_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp4_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp5_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp6_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp7_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp8_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp9_ds_path;


@property(nonatomic, strong) NSString* hint_param_resp_ds_path;


@property(nonatomic, strong) NSString* hint_payload_ds_path;


@property(nonatomic, strong) OTMLFont* hint_payload_font;


@property(nonatomic, assign) NSInteger hint_resp_count;


@property(nonatomic, strong) OTMPColor* hint_separator_row_color;


@property(nonatomic, strong) NSString* hint_separator_row_image;


@property(nonatomic, assign) BOOL hint_separator_row_visible;


@property(nonatomic, strong) NSString* reference_hint_datasource;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end