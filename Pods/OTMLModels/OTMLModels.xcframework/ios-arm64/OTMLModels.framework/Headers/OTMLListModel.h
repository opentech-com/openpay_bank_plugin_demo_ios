@class OTMPColor;
#import "OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_List_did_pull_to_refresh;
extern NSString* const t_List_ready_to_scroll;
extern NSString* const t_List_user_did_scroll_to_bottom;
extern NSString* const t_List_did_scroll_near_bottom;
//All triggers that are allowed by this component
extern NSString* const t_List_reload;
extern NSString* const t_List_apply_filter;
extern NSString* const t_List_append_section;
extern NSString* const t_List_hide_error;
extern NSString* const t_List_show_error;
extern NSString* const t_List_scroll_to_bottom;
extern NSString* const t_List_clear_filtered_items;
extern NSString* const t_List_dismiss_pull_to_refresh_loading;
extern NSString* const t_List_reset_swipe;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_List_filter_by_rule;
extern NSString* const p_List_sort_rows_by_ascending_string;
extern NSString* const p_List_sort_rows_by_descending_string;
extern NSString* const p_List_sort_rows_by_ascending_number;
extern NSString* const p_List_sort_rows_by_descending_number;
extern NSString* const p_List_sort_rows_by_ascending_string_resolved;
extern NSString* const p_List_sort_rows_by_descending_string_resolved;
extern NSString* const p_List_sort_rows_by_ascending_number_resolved;
extern NSString* const p_List_sort_rows_by_descending_number_resolved;
extern NSString* const p_List_data_source;
extern NSString* const p_List_section_index;
extern NSString* const p_List_section_datasource;
extern NSString* const p_List_has_more_pages;
extern NSString* const p_List_invalidate_item_section_index;
extern NSString* const p_List_invalidate_item_row_index;
extern NSString* const p_List_add_filtered_item_section_index;
extern NSString* const p_List_add_filtered_item_row_index;
extern NSString* const p_List_delete_item_section_index;
extern NSString* const p_List_delete_item_row_index;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_List_otml_ds_model_index;
extern NSString* const f_List_number_total_rows;
extern NSString* const f_List_number_visible_rows;

@interface OTMLListModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) NSString* data_source;


@property(nonatomic, assign) BOOL dynamic_load;


/**
Define the expected row height.
Is suggested to define a resonable row height in order to allow the list to improve preparation and scroll performance
*/
@property(nonatomic, assign) NSInteger expected_row_height;


@property(nonatomic, strong) OTMPColor* loading_color;


/**
If the List defines a max_height and the height is setted as "wrap", the list will extend its height up to the max_height, a list-level scroll will be added only if total height exceed max-height
*/
@property(nonatomic, assign) NSInteger max_height;


@property(nonatomic, strong) NSString* multipage_error_cgid;


@property(nonatomic, strong) NSString* multipage_loading_cgid;


@property(nonatomic, assign) BOOL pull_to_refresh;


@property(nonatomic, strong) OTMPColor* pull_to_refresh_loading_color;


@property(nonatomic, strong) OTMPColor* separator_color;


@property(nonatomic, assign) BOOL separator_enabled;


/**
separator padding. It must be in form of top, left, bottm, right separed with";".
Default value is 0;0;0;0.
@note Only left and right is supported
*/
@property(nonatomic, strong) NSString* separator_padding;


@property(nonatomic, strong) NSString* sort_rows_by_ascending_number;


@property(nonatomic, strong) NSString* sort_rows_by_ascending_number_resolved;


@property(nonatomic, strong) NSString* sort_rows_by_ascending_string;


@property(nonatomic, strong) NSString* sort_rows_by_ascending_string_resolved;


@property(nonatomic, strong) NSString* sort_rows_by_descending_number;


@property(nonatomic, strong) NSString* sort_rows_by_descending_number_resolved;


@property(nonatomic, strong) NSString* sort_rows_by_descending_string;


@property(nonatomic, strong) NSString* sort_rows_by_descending_string_resolved;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end