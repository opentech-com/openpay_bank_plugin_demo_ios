@class OTMPColor;
#import "OTMLContainerModel.h"
#import "OTMLPageContainerIndicatorType.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_PagerListContainer_page_changed;
extern NSString* const t_PagerListContainer_page_changed_from_parameter;
extern NSString* const t_PagerListContainer_ready_to_scroll;
extern NSString* const t_PagerListContainer_ready_to_scroll_first_page;
extern NSString* const t_PagerListContainer_ready_to_scroll_last_page;
//All triggers that are allowed by this component
extern NSString* const t_PagerListContainer_goto_next_page;
extern NSString* const t_PagerListContainer_goto_prev_page;
extern NSString* const t_PagerListContainer_reload;
extern NSString* const t_PagerListContainer_reload_keep_position;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_PagerListContainer_current_page;
extern NSString* const p_PagerListContainer_swipe_enabled;
extern NSString* const p_PagerListContainer_hide_page_indicator;
extern NSString* const p_PagerListContainer_filter_by_rule;
extern NSString* const p_PagerListContainer_data_source;
extern NSString* const p_PagerListContainer_indicator_color;
extern NSString* const p_PagerListContainer_current_indicator_color;
extern NSString* const p_PagerListContainer_indicator_height;
extern NSString* const p_PagerListContainer_manual_hide_indicator;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_PagerListContainer_current_page;
extern NSString* const f_PagerListContainer_pages_count;
extern NSString* const f_PagerListContainer_has_prev_page;
extern NSString* const f_PagerListContainer_has_next_page;

@interface OTMLPagerListContainerModel : OTMLContainerModel<NSCopying>

    @property(nonatomic, assign) BOOL bounce;


@property(nonatomic, strong) OTMPColor* current_indicator_color;


@property(nonatomic, strong) NSString* data_source;


@property(nonatomic, assign) BOOL hide_page_indicator;


@property(nonatomic, strong) OTMPColor* indicator_bg_color;


@property(nonatomic, strong) OTMPColor* indicator_color;


@property(nonatomic, assign) NSInteger indicator_height;


@property(nonatomic, assign) NSInteger indicator_size;


@property(nonatomic, assign) OTMLPageContainerIndicatorType indicator_type;


@property(nonatomic, assign) NSInteger max_indicators;


@property(nonatomic, assign) BOOL overlay_indicator;


@property(nonatomic, assign) BOOL page_indicator_on_bottom;


@property(nonatomic, assign) BOOL swipe_enabled;


@property(nonatomic, strong) OTMLFont* text_indicator_font_style;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end