#import "OTMLNetworkInteractionType.h"
@class OTMPColor;
#import "OTMLComponentModel.h"
#import "OTMLMapTypes.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_GeoMap_on_network_ok_response;
extern NSString* const t_GeoMap_on_network_ko_response;
extern NSString* const t_GeoMap_poi_selected;
extern NSString* const t_GeoMap_poi_selected_from_parameter;
extern NSString* const t_GeoMap_show_user_location_did_complete;
extern NSString* const t_GeoMap_map_center_did_change;
extern NSString* const t_GeoMap_map_center_did_change_from_parameter;
extern NSString* const t_GeoMap_map_center_will_change;
extern NSString* const t_GeoMap_map_take_b64_screenshot_done;
//All triggers that are allowed by this component
extern NSString* const t_GeoMap_reload_map_objects;
extern NSString* const t_GeoMap_refresh;
extern NSString* const t_GeoMap_center_my_position;
extern NSString* const t_GeoMap_center_my_position_and_pois;
extern NSString* const t_GeoMap_otml_map_take_b64_screenshot;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_GeoMap_map_type;
extern NSString* const p_GeoMap_enable_polyline_draw;
extern NSString* const p_GeoMap_center_latitude;
extern NSString* const p_GeoMap_center_longitude;
extern NSString* const p_GeoMap_zoom_level;
extern NSString* const p_GeoMap_poi_selected;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_GeoMap_otml_selected_poi_index;
extern NSString* const f_GeoMap_latitude;
extern NSString* const f_GeoMap_longitude;
extern NSString* const f_GeoMap_center_latitude;
extern NSString* const f_GeoMap_center_longitude;
extern NSString* const f_GeoMap_zoom_level;
extern NSString* const f_GeoMap_otml_map_center_polyline_index;
extern NSString* const f_GeoMap_otml_map_center_polyline_group_index;
extern NSString* const f_GeoMap_otml_map_last_b64_screenshot;

@interface OTMLGeoMapModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) float center_latitude;


@property(nonatomic, assign) float center_longitude;


@property(nonatomic, assign) BOOL clusterize_pois;


@property(nonatomic, strong) NSString* description_path;


@property(nonatomic, assign) BOOL enable_polyline_draw;


@property(nonatomic, assign) OTMLNetworkInteractionType http_type;


@property(nonatomic, strong) NSString* image_manipulation_param_ref;


@property(nonatomic, strong) NSString* imagename_path;


@property(nonatomic, strong) NSString* imagename_selected_path;


@property(nonatomic, strong) NSString* latitude_path;


@property(nonatomic, strong) OTMPColor* loading_color;


@property(nonatomic, strong) NSString* longitude_path;


@property(nonatomic, assign) OTMLMapTypes map_type;


@property(nonatomic, strong) NSString* marker_image_default;


@property(nonatomic, strong) NSString* marker_image_selected_default;


@property(nonatomic, assign) NSInteger minimum_zoom_level_to_draw_polyline;


@property(nonatomic, strong) NSString* multiselection_font;


@property(nonatomic, strong) NSString* multiselection_highlited_bg_color;


@property(nonatomic, strong) NSString* multiselection_normal_bg_color;


@property(nonatomic, strong) NSString* multiselection_pin_image_name;


@property(nonatomic, strong) NSString* network_params;


@property(nonatomic, strong) NSString* network_target;


@property(nonatomic, strong) NSString* normal_arrow;


@property(nonatomic, strong) NSString* poi_number_path;


@property(nonatomic, strong) NSString* polyline_reference_ds;


@property(nonatomic, strong) NSString* pressed_arrow;


@property(nonatomic, strong) NSString* reference_poi_datasource;


@property(nonatomic, assign) BOOL scroll_enabled;


@property(nonatomic, strong) NSString* search_description_datasource;


@property(nonatomic, strong) OTMLFont* search_description_font;


@property(nonatomic, assign) BOOL show_user_location;


@property(nonatomic, strong) NSString* show_user_location_button_n;


@property(nonatomic, strong) NSString* show_user_location_button_p;


@property(nonatomic, assign) NSInteger show_user_location_precision;


@property(nonatomic, assign) NSInteger show_user_location_zoom_level;


@property(nonatomic, assign) BOOL zoom_enabled;


@property(nonatomic, assign) NSInteger zoom_level;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end