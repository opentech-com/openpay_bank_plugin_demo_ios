#import "OTMLCartesianPointSelectionMode.h"
@class OTMPColor;
#import "OTMLCartesianGridLineType.h"
#import "OTMLComponentModel.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_LineChart_did_select_point;
extern NSString* const t_LineChart_did_select_point_from_parameter;
//All triggers that are allowed by this component
extern NSString* const t_LineChart_refresh;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_LineChart_bullet_modulo;
extern NSString* const p_LineChart_ds_path;
extern NSString* const p_LineChart_x_value_param_ref;
extern NSString* const p_LineChart_y_value_param_ref;
extern NSString* const p_LineChart_x_label_param_ref;
extern NSString* const p_LineChart_y_label_param_ref;
extern NSString* const p_LineChart_point_description_param_ref;
extern NSString* const p_LineChart_selected_point_index;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_LineChart_selected_point_index;
extern NSString* const f_LineChart_x_selected_value;
extern NSString* const f_LineChart_y_selected_value;
extern NSString* const f_LineChart_x_selected_label;
extern NSString* const f_LineChart_y_selected_label;
extern NSString* const f_LineChart_point_selected_description;

@interface OTMLLineChartModel : OTMLComponentModel<NSCopying>

    /**
    @discussion  axis_bg_color the color of the axis area containing the labels
    @note optional
    */
    @property(nonatomic, strong) OTMPColor* axis_bg_color;


/**
@discussion  indicator_bg_color the axis line color
@note optional
*/
@property(nonatomic, strong) OTMPColor* axis_line_color;


@property(nonatomic, assign) NSInteger axis_line_thickness;


@property(nonatomic, assign) OTMLCartesianGridLineType axis_line_type;


@property(nonatomic, strong) OTMLFont* balloon_font;


/**
@discussion  bullet_modulo draw a point every bullet_modulo points
@note optional
*/
@property(nonatomic, assign) NSInteger bullet_modulo;


/**
@discussion  ds_path the path in use to determine the points. Each ds element in ds_path is a point and will be passed as [i] ds to component Parameter Ref.
@note The points will be sorted in ascending order with respect to their x value before drawing.
@note required
*/
@property(nonatomic, strong) NSString* ds_path;


/**
The padding of the graph drawing area.
Default value is 0;0;0;0.
@note optional
*/
@property(nonatomic, strong) NSString* graph_drawing_padding;


@property(nonatomic, strong) OTMPColor* horizontal_gridlines_color;


/**
@discussion  horizontal_gridlines_number the number of horizontal gridlines to draw. Must be 2 or more if given. One gridlines will be on the minimum value,
one gridlines will be on the maximum value, and the space in between will contain (horizontal_gridlines_number - 2) equi-distant gridlines.
Requires interpolate_y_labels to be set to true.
@note optional
*/
@property(nonatomic, assign) NSInteger horizontal_gridlines_number;


@property(nonatomic, assign) NSInteger horizontal_gridlines_thickness;


@property(nonatomic, assign) OTMLCartesianGridLineType horizontal_gridlines_type;


@property(nonatomic, strong) NSString* image_arrow;


/**
@discussion  image_bullet_n the normal image in use for the graph point in the graph line.
@note optional
*/
@property(nonatomic, strong) NSString* image_bullet_n;


/**
@discussion  image_bullet_p the pressed image in use for the graph point in the graph line.
@note optional
*/
@property(nonatomic, strong) NSString* image_bullet_p;


@property(nonatomic, strong) NSString* image_popup;


/**
@discussion  initial_max_x initial maximum x value
@note optional
*/
@property(nonatomic, assign) float initial_max_x;


/**
@discussion  initial_max_y initial maximum y value
@note optional
*/
@property(nonatomic, assign) float initial_max_y;


/**
@discussion  initial_min_x initial minimum x value
@note optional
*/
@property(nonatomic, assign) float initial_min_x;


/**
@discussion  initial_min_y initial minimum y value
@note optional
*/
@property(nonatomic, assign) float initial_min_y;


/**
@discussion  initial_x_enabled if true the initial x range will be from initial_min_x to initial_max_x. If false it will be automatically calculated
@note optional
*/
@property(nonatomic, assign) BOOL initial_x_enabled;


/**
@discussion  initial_y_enabled if true the initial y range will be from initial_min_y to initial_max_y. If false it will be automatically calculated
@note optional
*/
@property(nonatomic, assign) BOOL initial_y_enabled;


/**
@discussion  inter_point_stacked_color the color of the area below the line between each point pair. Can be a gradient.
This will be overlayed with stacked area color.
@note optional
*/
@property(nonatomic, strong) OTMPColor* inter_point_stacked_color;


/**
@discussion  interpolate_x_labels if false (default) the x labels will be resolved with the real point data. If true, the x labels will be resolved with interpolated data,
according to vertical_gridlines_number, the min/max values and scale_x_values_to_zero.
@note optional
*/
@property(nonatomic, assign) BOOL interpolate_x_labels;


/**
@discussion  interpolate_y_labels if false (default) the y labels will be resolved with the real point data. If true, the y labels will be resolved with interpolated data,
according to horizontal_gridlines_number, the min/max values and scale_y_values_to_zero.
@note optional
*/
@property(nonatomic, assign) BOOL interpolate_y_labels;


/**
@discussion  line_color the color in use for the graph line. Cannot be a gradient.
@note required
*/
@property(nonatomic, strong) OTMPColor* line_color;


/**
@discussion  line_thickness the thickness of the graph line.
@note required
*/
@property(nonatomic, assign) NSInteger line_thickness;


@property(nonatomic, assign) OTMLCartesianGridLineType line_type;


/**
@discussion  line_vertical_color the vertical line color in use for the graph points
@note optional
*/
@property(nonatomic, strong) OTMPColor* line_vertical_color;


@property(nonatomic, assign) NSInteger line_vertical_thickness;


@property(nonatomic, assign) OTMLCartesianGridLineType line_vertical_type;


/**
@discussion  point_description_param_ref the Parameter ref that will return a description of the point. The Parameter Ref will be resolved using a ds element [i] from ds_path.
@note optional, required only if the graph is interactive
*/
@property(nonatomic, strong) NSString* point_description_param_ref;


@property(nonatomic, assign) OTMLCartesianPointSelectionMode point_selection_mode;


/**
@discussion  scale_x_values_to_zero if true, the values will be scaled so that the graph will include also the 0 x value. Also, will always draw the X axis corresponding to the 0 value.
If false, the scale is automatically determined according to the min and max x values.
@note optional
*/
@property(nonatomic, assign) BOOL scale_x_values_to_zero;


/**
@discussion  scale_y_values_to_zero if true, the values will be scaled so that the graph will include also the 0 y value. Also, will always draw the Y axis corresponding to the 0 value.
If false, the scale is automatically determined according to the min and max y values.
@note optional
*/
@property(nonatomic, assign) BOOL scale_y_values_to_zero;


@property(nonatomic, strong) OTMPColor* selected_point_line_color;


@property(nonatomic, assign) NSInteger selected_point_line_thickness;


@property(nonatomic, assign) OTMLCartesianGridLineType selected_point_line_type;


/**
@discussion  stacked_area_color the color of the area below the line. Can be a gradient.
@note optional
*/
@property(nonatomic, strong) OTMPColor* stacked_area_color;


/**
@discussion  vertical_gridlines_number the number of vertical gridlines to draw. Must be 2 or more if given. One gridlines will be on the minimum value,
one gridlines will be on the maximum value, and the space in between will contain (vertical_gridlines_number - 2) equi-distant gridlines.
Requires interpolate_x_labels to be set to true.
@note optional
*/
@property(nonatomic, assign) NSInteger vertical_gridlines_number;


@property(nonatomic, strong) OTMLFont* x_axis_font;


/**
@discussion  x_axis_modulo draw a label on the x axis every x_axis_modulo points, starting from the left-most point
@note optional
*/
@property(nonatomic, assign) NSInteger x_axis_modulo;


/**
@discussion  x_label_axis_distance the distance between the top edge of the x label and the x axis
@note optional
*/
@property(nonatomic, assign) float x_label_axis_distance;


/**
@discussion  x_label_param_ref the Parameter ref that will return each slice x axis value label. The Parameter Ref will be resolved using a ds element [i] from ds_path.
@note required
*/
@property(nonatomic, strong) NSString* x_label_param_ref;


/**
@discussion  x_value_param_ref the Parameter ref that will return each slice x axis value. The Parameter Ref will be resolved using a ds element [i] from ds_path.
If not given, the index of the point will be used.
@note optional
*/
@property(nonatomic, strong) NSString* x_value_param_ref;


@property(nonatomic, strong) OTMLFont* y_axis_font;


/**
@discussion  y_axis_modulo draw a label on the y axis every y_axis_modulo points, starting from the bottom-most point
@note optional
*/
@property(nonatomic, assign) NSInteger y_axis_modulo;


/**
@discussion  y_label_axis_distance the distance between the right edge of the y label and the y axis
@note optional
*/
@property(nonatomic, assign) float y_label_axis_distance;


/**
@discussion  y_label_param_ref the Parameter ref that will return each slice y axis value label. The Parameter Ref will be resolved using a ds element [i] from ds_path.
@note required
*/
@property(nonatomic, strong) NSString* y_label_param_ref;


/**
@discussion  y_value_param_ref the Parameter ref that will return each slice y axis value. The Parameter Ref will be resolved using a ds element [i] from ds_path.
@note required
*/
@property(nonatomic, strong) NSString* y_value_param_ref;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end