#import "OTMLInputKeyboardType.h"
#import "OTMLTextInputCasing.h"
#import "OTMLAbstractTextComponentModel.h"
#import "OTMLAnchors.h"
#import "OTMLImeAction.h"
#import "OTMLTextCasing.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_TextField_text_changed_from_parameter;
extern NSString* const t_TextField_did_begin_edit;
extern NSString* const t_TextField_did_end_edit;
extern NSString* const t_TextField_text_changed;
extern NSString* const t_TextField_did_clear;
//All triggers that are allowed by this component
extern NSString* const t_TextField_goto_next_textinput;
extern NSString* const t_TextField_goto_prev_textinput;
extern NSString* const t_TextField_on_focus;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_TextField_text_and_cursor_json;
extern NSString* const p_TextField_placeholder;
extern NSString* const p_TextField_color_f;
extern NSString* const p_TextField_color_fe;
extern NSString* const p_TextField_bg_image_f;
extern NSString* const p_TextField_bg_image_fe;
extern NSString* const p_TextField_left_image;
extern NSString* const p_TextField_left_image_p;
extern NSString* const p_TextField_left_image_s;
extern NSString* const p_TextField_left_image_f;
extern NSString* const p_TextField_left_image_d;
extern NSString* const p_TextField_right_image;
extern NSString* const p_TextField_right_image_p;
extern NSString* const p_TextField_right_image_s;
extern NSString* const p_TextField_right_image_f;
extern NSString* const p_TextField_right_image_d;
extern NSString* const p_TextField_input_keyboard_type;

@interface OTMLTextFieldModel : OTMLAbstractTextComponentModel<NSCopying>

    /**
    Allow point size reduction if text does not fit size
    It only make sense if the text container is not wrapping text itself
    */
    @property(nonatomic, assign) BOOL adjustsFontSize;


@property(nonatomic, strong) NSString* custom_done_text;


@property(nonatomic, strong) NSString* custom_next_text;


@property(nonatomic, strong) NSString* custom_prev_text;


/**
In millisecondi
*/
@property(nonatomic, assign) NSInteger delay_time;


@property(nonatomic, assign) BOOL disable_autocomplete;


@property(nonatomic, assign) BOOL disable_keyboard_functionbar;


@property(nonatomic, assign) BOOL enable_clear_button;


@property(nonatomic, assign) BOOL floatingPlaceholder;


@property(nonatomic, assign) NSInteger floating_placeholder_distance;


/**
Action that override enter button on alphanumeric keyboard.
Please specify in description how to handle the page description
*/
@property(nonatomic, assign) OTMLImeAction ime_action;


@property(nonatomic, strong) NSString* ime_action_delegate;


@property(nonatomic, strong) NSString* ime_action_delegate_trigger;


/**
casing that will be re-applied
*/
@property(nonatomic, assign) OTMLTextInputCasing input_enforced_casing;


/**
alphanumeric -> tastiera alfanumerica
alphanumeric -> alfanumerica aperta sui numeri su altre piattaforme rimappata ad alphanumeric
numericDecimal, -> solo numeri e separatore decimali
numberOnly, -> solo numeri senza altri caratteri o simboli
phonePad, -> caratteri per numero di telefono (ovvero numeri, +, # e)
url, -> tastiera alfanumerica ottimizzata per URL/URI
email; -> tastiera alfanumerica ottimizzata per inserimento email (propone anche "@")
Please note that only iOS will handle alphanumericOnNumber accordingly. Other platforms will just open the alphanumeric keyboard.
*/
@property(nonatomic, assign) OTMLInputKeyboardType input_keyboard_type;


/**
Casing applied to placeholder text
*/
@property(nonatomic, assign) OTMLTextCasing input_suggestion_casing;


@property(nonatomic, strong) NSString* input_validator_regex;


/**
viene centrata in verticale e il cursore messo a filo
*/
@property(nonatomic, strong) NSString* left_image;


/**
Maximum number of characters.
It will deny to input a longer text
*/
@property(nonatomic, assign) NSInteger max_chars;


/**
Minimum number of characters.
It will trigger a validation error when text is requested and it is smaller than min_chars.
Please note that an error message must be specified to handle the validation error
*/
@property(nonatomic, assign) NSInteger min_chars;


/**
Se fornito imposta il valore minimo del font (in punti) nel caso adjustsFontSize sia 'true'. Se non fornito (oppure valorizzato come default 0), viene usato come minFontSize le dimensioni del font della textfield - 4. Quando viene utilizzato il default, la sottrazione di 4 garantisce come valore minimo 8 (se ad esempio il font fosse grande 10, il calcolo automatico sottrarrebbe solo 2. Questa imposizione non viene forzata qualora venga esplicitamente fornito un valore > 0)
*/
@property(nonatomic, assign) NSInteger min_font_size;


/**
If offuscable is setted the textfield will use the password mask when the user type the text
*/
@property(nonatomic, assign) BOOL offuscable;


@property(nonatomic, strong) NSString* placeholder;


/**
Casing applied to placeholder text
*/
@property(nonatomic, assign) OTMLTextCasing placeholder_casing;


/**
On Android, if floating_placeholder == false, only the normal color of this font will be used
*/
@property(nonatomic, strong) OTMLFont* placeholder_font_style_name;


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


/**
viene centrata in verticale e il cursore messo a filo
*/
@property(nonatomic, strong) NSString* right_image;


/**
payment_card automatico su base bin. Impone l’inserimento numerico e l’accettazione filtrata di soli caratteri numerici
N(esempio 4) numero arbitrario di gruppi della lunghezza indicata. NON impone il tipo numerico.
N-N-N-N (esempio 4-4-4 oppure 4-5-6-7-8) numero indicato di gruppi della lunghezza indicata. Impone il max_chars (comprensivo di spazi), NON impone il tipo numerico.
*/
@property(nonatomic, strong) NSString* spacing_pattern;


/**
text_and_cursor_json accepts a json composed of 'text' and 'cursor_position', the latter can accept a string number or the values ​​'start' or 'end'
*/
@property(nonatomic, strong) NSString* text_and_cursor_json;


@property(nonatomic, assign) NSInteger text_lines;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end