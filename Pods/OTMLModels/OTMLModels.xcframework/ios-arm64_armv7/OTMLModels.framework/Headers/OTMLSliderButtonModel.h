#import "OTMLComponentModel.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_SliderButton_slide_all_right_and_released;
extern NSString* const t_SliderButton_slide_all_left;
extern NSString* const t_SliderButton_slide_all_right;
//All triggers that are allowed by this component
extern NSString* const t_SliderButton_reset;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_SliderButton_image_button;
extern NSString* const p_SliderButton_image_background;
extern NSString* const p_SliderButton_image_background_progress_button;
extern NSString* const p_SliderButton_font_style_button_left_position;
extern NSString* const p_SliderButton_text_button_left_position;
extern NSString* const p_SliderButton_font_style_button_right_position_released;
extern NSString* const p_SliderButton_text_button_right_position_released;
extern NSString* const p_SliderButton_font_style_button_right_position;
extern NSString* const p_SliderButton_text_button_right_position;
extern NSString* const p_SliderButton_font_style_button_move_position;
extern NSString* const p_SliderButton_text_button_move_position;

@interface OTMLSliderButtonModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) BOOL blocked_after_slide_all_right;


@property(nonatomic, strong) OTMLFont* font_style_button_left_position;


@property(nonatomic, strong) OTMLFont* font_style_button_move_position;


@property(nonatomic, strong) OTMLFont* font_style_button_right_position;


@property(nonatomic, strong) OTMLFont* font_style_button_right_position_released;


@property(nonatomic, strong) NSString* image_background;


@property(nonatomic, strong) NSString* image_background_progress_button;


@property(nonatomic, strong) NSString* image_button;


@property(nonatomic, strong) NSString* text_button_left_position;


@property(nonatomic, strong) NSString* text_button_move_position;


@property(nonatomic, strong) NSString* text_button_right_position;


@property(nonatomic, strong) NSString* text_button_right_position_released;


@property(nonatomic, assign) NSInteger text_fade_animation_duration;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end