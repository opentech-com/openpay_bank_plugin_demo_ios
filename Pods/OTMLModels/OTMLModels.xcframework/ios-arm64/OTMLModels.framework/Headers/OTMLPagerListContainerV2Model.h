#import "OTMLContainerModel.h"


//All triggers that are allowed by this component
extern NSString* const t_PagerListContainerV2_page_changed;
extern NSString* const t_PagerListContainerV2_page_changed_from_parameter;
extern NSString* const t_PagerListContainerV2_ready_to_scroll;
extern NSString* const t_PagerListContainerV2_ready_to_scroll_first_page;
extern NSString* const t_PagerListContainerV2_ready_to_scroll_last_page;
//All triggers that are allowed by this component
extern NSString* const t_PagerListContainerV2_goto_next_page;
extern NSString* const t_PagerListContainerV2_goto_prev_page;
extern NSString* const t_PagerListContainerV2_reload;
extern NSString* const t_PagerListContainerV2_reload_keep_position;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_PagerListContainerV2_current_page;
extern NSString* const p_PagerListContainerV2_swipe_enabled;
extern NSString* const p_PagerListContainerV2_filter_by_rule;
extern NSString* const p_PagerListContainerV2_data_source;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_PagerListContainerV2_current_page;
extern NSString* const f_PagerListContainerV2_pages_count;
extern NSString* const f_PagerListContainerV2_has_prev_page;
extern NSString* const f_PagerListContainerV2_has_next_page;

@interface OTMLPagerListContainerV2Model : OTMLContainerModel<NSCopying>

    @property(nonatomic, assign) BOOL bounce;


@property(nonatomic, strong) NSString* data_source;


@property(nonatomic, strong) NSString* pager_indicator_id;


@property(nonatomic, assign) BOOL swipe_enabled;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end