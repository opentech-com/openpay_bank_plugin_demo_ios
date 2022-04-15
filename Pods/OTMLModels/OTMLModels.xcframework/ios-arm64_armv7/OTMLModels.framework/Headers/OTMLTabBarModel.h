@class OTMPColor;
#import "OTMLComponentModel.h"
#import "OTMLTabbarLabelVisibility.h"


//All triggers that are allowed by this component
extern NSString* const t_TabBar_tab_0_click;
extern NSString* const t_TabBar_tab_1_click;
extern NSString* const t_TabBar_tab_2_click;
extern NSString* const t_TabBar_tab_3_click;
extern NSString* const t_TabBar_tab_4_click;
extern NSString* const t_TabBar_tab_0_click_by_parameter;
extern NSString* const t_TabBar_tab_1_click_by_parameter;
extern NSString* const t_TabBar_tab_2_click_by_parameter;
extern NSString* const t_TabBar_tab_3_click_by_parameter;
extern NSString* const t_TabBar_tab_4_click_by_parameter;
//All triggers that are allowed by this component
extern NSString* const t_TabBar_reload;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_TabBar_button_count;
extern NSString* const p_TabBar_title_param_ref;
extern NSString* const p_TabBar_button_image_n_param_ref;
extern NSString* const p_TabBar_button_image_s_param_ref;
extern NSString* const p_TabBar_font_param_ref;
extern NSString* const p_TabBar_badge_param_ref;
extern NSString* const p_TabBar_current_tab;
extern NSString* const p_TabBar_item_icon_tint_s;
extern NSString* const p_TabBar_item_icon_tint_n;
extern NSString* const p_TabBar_label_visibility;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_TabBar_current_tab;

@interface OTMLTabBarModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) NSString* badge_param_ref;


@property(nonatomic, assign) NSInteger button_count;


@property(nonatomic, strong) NSString* button_image_n_param_ref;


@property(nonatomic, strong) NSString* button_image_s_param_ref;


@property(nonatomic, strong) NSString* font_param_ref;


@property(nonatomic, strong) OTMPColor* item_icon_tint_n;


@property(nonatomic, strong) OTMPColor* item_icon_tint_s;


@property(nonatomic, assign) OTMLTabbarLabelVisibility label_visibility;


/**
Parameter ref che restituisce il titolo per il bottone [i]-esimo (ordinati, il primo in c1-prima tab, secondo in c2-seconda tab ecc.).
*/
@property(nonatomic, strong) NSString* title_param_ref;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end