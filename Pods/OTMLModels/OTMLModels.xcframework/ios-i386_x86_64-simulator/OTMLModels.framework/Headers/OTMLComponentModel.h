#import <objc/runtime.h>
@class OTMPColor;
#import <TBXML/TBXML.h>
#import "OTMLVisibility.h"
#import "OTMLComponentErrorMode.h"
@class OTMLParametersModel;
@class OTMLActionsModel;


//All triggers that are allowed by this component
extern NSString* const t_Component_otml_component_did_enter_in_error_state;
extern NSString* const t_Component_otml_component_did_exit_from_error_state;
extern NSString* const t_Component_did_show;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_Component_ios_no_animation;
extern NSString* const p_Component_component_name;
extern NSString* const p_Component_animation;
extern NSString* const p_Component_width;
extern NSString* const p_Component_height;
extern NSString* const p_Component_padding;
extern NSString* const p_Component_margin;
extern NSString* const p_Component_visibility;
extern NSString* const p_Component_add_event_observer;
extern NSString* const p_Component_add_and_init_event_observer;
extern NSString* const p_Component_remove_event_observer;
extern NSString* const p_Component_otml_validationexception_error_message;
extern NSString* const p_Component_bg_image_n;
extern NSString* const p_Component_bg_image_p;
extern NSString* const p_Component_bg_image_s;
extern NSString* const p_Component_bg_image_sp;
extern NSString* const p_Component_bg_image_d;
extern NSString* const p_Component_bg_image_sd;
extern NSString* const p_Component_bg_image_ne;
extern NSString* const p_Component_bg_image_pe;
extern NSString* const p_Component_bg_image_se;
extern NSString* const p_Component_bg_image_spe;
extern NSString* const p_Component_color_n;
extern NSString* const p_Component_color_p;
extern NSString* const p_Component_color_s;
extern NSString* const p_Component_color_sp;
extern NSString* const p_Component_color_d;
extern NSString* const p_Component_color_sd;
extern NSString* const p_Component_color_ne;
extern NSString* const p_Component_color_pe;
extern NSString* const p_Component_color_se;
extern NSString* const p_Component_color_spe;
extern NSString* const p_Component_error;
extern NSString* const p_Component_error_delegate;
extern NSString* const p_Component_enabled;
extern NSString* const p_Component_selected;
extern NSString* const p_Component_disabled_alpha;
extern NSString* const p_Component_fill_factor;
extern NSString* const p_Component_accessibility_disabled;
extern NSString* const p_Component_accessibility_hint;
extern NSString* const p_Component_accessibility_text;
extern NSString* const p_Component_voiceover_group;
extern NSString* const p_Component_accessibility_index;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_Component_error;
extern NSString* const f_Component_visibility;
extern NSString* const f_Component_resolved_row;
extern NSString* const f_Component_resolved_section;
extern NSString* const f_Component_selected;
extern NSString* const f_Component_enabled;
extern NSString* const f_Component_is_in_error_state;

@interface OTMLComponentModel : NSObject<NSCopying>

    /**
    Accessibility status. true when disabled
    @return Accessibility status.
    */
    @property(nonatomic, assign) BOOL accessibility_disabled;


/**
Accessibility Hint for VoiceOver
@return The Accessibility Hint
*/
@property(nonatomic, strong) NSString* accessibility_hint;


/**
Accessibility index
@return The Accessibility Index
*/
@property(nonatomic, strong) NSString* accessibility_index;


/**
Accessibility Text for VoiceOver
@return The Accessibility Text
*/
@property(nonatomic, strong) NSString* accessibility_text;


/**
@return List of actions
*/
@property(nonatomic, strong) OTMLActionsModel* actions;


/**
Background image in disabled state.
It can embed a b64 image
@return The Pressed Background Image
*/
@property(nonatomic, strong) NSString* bg_image_d;


/**
Background image in normal state.
It can embed a b64 image
@return The Background Image
*/
@property(nonatomic, strong) NSString* bg_image_n;


/**
Background image in error + normal state.
It can embed a b64 image
@return The error + normal Background Image
*/
@property(nonatomic, strong) NSString* bg_image_ne;


/**
Background image in pressed state.
It can embed a b64 image
@return The Pressed Background Image
*/
@property(nonatomic, strong) NSString* bg_image_p;


/**
Background image in error + pressed state.
It can embed a b64 image
@return The error + pressed Background Image
*/
@property(nonatomic, strong) NSString* bg_image_pe;


/**
Background image in selected state.
It can embed a b64 image
@return The Pressed Background Image
*/
@property(nonatomic, strong) NSString* bg_image_s;


/**
Background image in selected disabled  state.
It can embed a b64 image
@return The Pressed Background Image
*/
@property(nonatomic, strong) NSString* bg_image_sd;


/**
Background image in error + selected state.
It can embed a b64 image
@return The error + selected Background Image
*/
@property(nonatomic, strong) NSString* bg_image_se;


/**
Background image in selected pressed state.
It can embed a b64 image
@return The Pressed Background Image
*/
@property(nonatomic, strong) NSString* bg_image_sp;


/**
Background image in error + selected + pressed state.
It can embed a b64 image
@return The normal + selected + pressed Background Image
*/
@property(nonatomic, strong) NSString* bg_image_spe;


/**
WP Border normal state
@return The Border Color
*/
@property(nonatomic, strong) OTMPColor* border_color_n;


/**
WP Borderthickness
@return The Border Color
*/
@property(nonatomic, assign) float border_thickness;


/**
If true (default) the component will clips its content.
It should be kept usually true, please use carefully.
@return The ability to Clip Content
*/
@property(nonatomic, assign) BOOL clip_content;


/**
Background color in disabled state.
It can be a "normal" color in form of RRGGBB.AAA where
RR is Red (0-FF)
GG is Green (0-FF)
BB is Blue (0-FF)
AAA is Alpha (0-100, where 0 is transparent, 100 is fully visible)
@return The Pressed Background Color
*/
@property(nonatomic, strong) OTMPColor* color_d;


/**
Background color in normal state.
It can be a "normal" color in form of RRGGBB.AAA where
RR is Red (0-FF)
GG is Green (0-FF)
BB is Blue (0-FF)
AAA is Alpha (0-100, where 0 is transparent, 100 is fully visible).
It can also be a color array in form of ...
@return The Background Color
*/
@property(nonatomic, strong) OTMPColor* color_n;


/**
Background color in error + normal state.
@return The error + normal Background color
*/
@property(nonatomic, strong) OTMPColor* color_ne;


/**
Background color in pressed state.
It can be a "normal" color in form of RRGGBB.AAA where
RR is Red (0-FF)
GG is Green (0-FF)
BB is Blue (0-FF)
AAA is Alpha (0-100, where 0 is transparent, 100 is fully visible)
@return The Pressed Background Color
*/
@property(nonatomic, strong) OTMPColor* color_p;


/**
Background color in error + pressed state.
@return The error + pressed Background color
*/
@property(nonatomic, strong) OTMPColor* color_pe;


/**
Background color in selected state.
It can be a "normal" color in form of RRGGBB.AAA where
RR is Red (0-FF)
GG is Green (0-FF)
BB is Blue (0-FF)
AAA is Alpha (0-100, where 0 is transparent, 100 is fully visible)
@return The Selected Bakground Color
*/
@property(nonatomic, strong) OTMPColor* color_s;


/**
Background color in selected disabled state.
It can be a "normal" color in form of RRGGBB.AAA where
RR is Red (0-FF)
GG is Green (0-FF)
BB is Blue (0-FF)
AAA is Alpha (0-100, where 0 is transparent, 100 is fully visible)
@return The Pressed Background Color
*/
@property(nonatomic, strong) OTMPColor* color_sd;


/**
Background color in error + selected state.
@return The error + selected Background color
*/
@property(nonatomic, strong) OTMPColor* color_se;


/**
Background color in selected pressed state.
It can be a "normal" color in form of RRGGBB.AAA where
RR is Red (0-FF)
GG is Green (0-FF)
BB is Blue (0-FF)
AAA is Alpha (0-100, where 0 is transparent, 100 is fully visible)
@return The Pressed Background Color
*/
@property(nonatomic, strong) OTMPColor* color_sp;


/**
Background color in error + selected + pressed state.
@return The normal + selected + pressed Background color
*/
@property(nonatomic, strong) OTMPColor* color_spe;


/**
Define a component name.
@return the Component Name
*/
@property(nonatomic, strong) NSString* component_name;


/**
Define a corner radius.
Must be a non negative integer value expressing the radius in virtual pixel
@return The corner radius
*/
@property(nonatomic, assign) NSInteger corner_radius;


@property(nonatomic, assign) NSInteger disabled_alpha;


/**
If true (default) the component will be enabled.
@return The Enabled state of Component
*/
@property(nonatomic, assign) BOOL enabled;


/**
Define a delegate component for error handling.
@return the delegate component id
*/
@property(nonatomic, strong) NSString* error_delegate;


/**
The error mode for the component
@return The error mode
*/
@property(nonatomic, assign) OTMLComponentErrorMode error_mode;


/**
Component fill factor.
It must be an integer >=0.
Whenever a component with fill_factor>0 is inside a container that is greater than the sum of its content (referring to its horizontal or vertical orientation),
the empty space is distributed to component with fill_factor>0 according to its factor weight.
@return The Component fill factor.
*/
@property(nonatomic, assign) NSInteger fill_factor;


/**
Component height. It can be "wrap" or "fill" or an integer, positive [number] (virtual pixel).
Only in iOS variants it can be [number]%.
It should be 0 if using fill_factor>0 inside an vertical (v) container
@return The Component height
*/
@property(nonatomic, strong) NSString* height;


@property(nonatomic, assign) BOOL is_keyboard_anchored;


/**
Component margin (spacing outside its references). It must be in form of top, left, bottm, right separed with";".
Default value is 0;0;0;0.
@return The Component margin
*/
@property(nonatomic, strong) NSString* margin;


@property(nonatomic, assign) NSInteger min_height;


/**
It must be defined if you want to ask the component for output parameters (via flagforsrc)
or if you want to update this component.
@return The component id.
*/
@property(nonatomic, strong) NSString* otmlID;


/**
Message to be presented to the user when the validation condition fails. (eg. minimum length in textfield)
@return The valitation exception message
*/
@property(nonatomic, strong) NSString* otml_validationexception_error_message;


/**
Component padding (spacing inside its references). It must be in form of top, left, bottm, right separed with";".
Default value is 0;0;0;0.
@return The Component padding
*/
@property(nonatomic, strong) NSString* padding;


/**
@return List of parameters
*/
@property(nonatomic, strong) OTMLParametersModel* parameters;


@property(nonatomic, assign) BOOL selected;


/**
It can define a selection group id.
When selected (use an update action for this) it will de-select any other sibling component (other childs to the same parent component).
@return The Group ID
*/
@property(nonatomic, strong) NSString* selection_group;


@property(nonatomic, strong) NSString* style_behaviour;


@property(nonatomic, strong) NSString* style_class;


@property(nonatomic, strong) NSString* style_id;


/**
Defines the set of valid plaforms (eg. iOS, Android, iPhone ...) using ";" as separator
@return The platform for whom the component is valid for
*/
@property(nonatomic, strong) NSString* valid_for;


/**
Component visibility.
When "visible" it can be seen.
When "invisible" it hold its space but is hidden.
When "collapsed" it does not hold its space, and is hidden.
Default value is "visible".
NOTE In iOS and WP implementations it actually holds its width and have 0 height. Moreover in iOS implementation it should not be used together with a bg_image
@return The Component visibility
*/
@property(nonatomic, assign) OTMLVisibility visibility;


/**
VoiceOver group.
NOTE Only for iOS
@return The Voiceover Group
*/
@property(nonatomic, strong) NSString* voiceover_group;


/**
Component width. It can be "wrap" or "fill" or an integer, positive [number] (virtual pixel).
Only in iOS variants it can be [number]%.
It should be 0 if using fill_factor >0 inside an horizontal (h) container
@return The Component width
*/
@property(nonatomic, strong) NSString* width;


/**
Component zIndex. It must be between 0 and 10.
Default value is 0.
@return The Component zIndex
*/
@property(nonatomic, assign) NSInteger z_index;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end