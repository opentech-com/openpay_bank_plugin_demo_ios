#import "OTMLComponentModel.h"
#import "OTMLChartsAxisY.h"
#import "OTMLChartsType.h"
@class OTMLFont;
#import "OTMLChartsAxisX.h"
#import "OTMLChartsPaintType.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_Chart_ds_path;
extern NSString* const p_Chart_x_value_param_ref;
extern NSString* const p_Chart_y_value_param_ref;
extern NSString* const p_Chart_items_label_param_ref;
extern NSString* const p_Chart_group_param_ref;
extern NSString* const p_Chart_x_label_param_ref;
extern NSString* const p_Chart_y_label_param_ref;
extern NSString* const p_Chart_shadow_h_value_param_ref;
extern NSString* const p_Chart_shadow_l_value_param_ref;
extern NSString* const p_Chart_open_value_param_ref;
extern NSString* const p_Chart_close_value_param_ref;

@interface OTMLChartModel : OTMLComponentModel<NSCopying>

    /**
    @discussion  axis_font font axis  .
    @note optional
    */
    @property(nonatomic, strong) OTMLFont* axis_font;


/**
@discussion  axis_x position axis x .
@note optional
*/
@property(nonatomic, assign) OTMLChartsAxisX axis_x;


/**
@discussion  axis_x_granularity
@note optional
*/
@property(nonatomic, assign) float axis_x_granularity;


/**
@discussion  axis_x label visible axis x .
@note optional
*/
@property(nonatomic, assign) BOOL axis_x_label_visible;


/**
@discussion  axis_x label maxWidth axis x .
@note optional
*/
@property(nonatomic, assign) float axis_x_min_value;


/**
@discussion  axis_x visible axis x .
@note optional
*/
@property(nonatomic, assign) BOOL axis_x_visible;


/**
@discussion  axis_y position axis y .
@note optional
*/
@property(nonatomic, assign) OTMLChartsAxisY axis_y;


/**
@discussion  axis_y_granularity
@note optional
*/
@property(nonatomic, assign) float axis_y_granularity;


/**
@discussion  axis_x label maxWidth axis y .
@note optional
*/
@property(nonatomic, assign) NSInteger axis_y_label_maxwidth;


/**
@discussion  axis_x label minWidth axis y .
@note optional
*/
@property(nonatomic, assign) NSInteger axis_y_label_minwidth;


/**
@discussion  axis_x label visible axis y .
@note optional
*/
@property(nonatomic, assign) BOOL axis_y_label_visible;


/**
@discussion  axis_x label minWidth axis y .
@note optional
*/
@property(nonatomic, assign) float axis_y_min_value;


/**
@discussion  axis_x visible axis y .
@note optional
*/
@property(nonatomic, assign) BOOL axis_y_visible;


@property(nonatomic, assign) OTMLChartsType charts_type;


/**
@discussion  close_value_param_ref The Parameter Ref will be resolved using a ds element [i] from ds_path for candle graph.
@note optional
*/
@property(nonatomic, strong) NSString* close_value_param_ref;


/**
@discussion  colors  attribute that will return list colors for used items (separator ";")
 su bar ogni i-esimo colore è inserito in ogni i-esimo barEntry di ogni gruppo (oppure gli elementi sono colorati ciclicamente).
 su candle colors[0]shadowColor , colors[1]decreasingColor , colors[2]increasingColor , colors[3]neutralColor
 @note required
*/
@property(nonatomic, strong) NSString* colors;


/**
@discussion  draw_grid_x draw grid in axis   .
@note optional
*/
@property(nonatomic, assign) BOOL draw_grid_x;


/**
@discussion  draw_grid_y draw grid in axis  .
@note optional
*/
@property(nonatomic, assign) BOOL draw_grid_y;


/**
@discussion  draw_label_value draw label single value .
@note optional
*/
@property(nonatomic, assign) BOOL draw_label_value;


/**
@discussion  ds_path the path in use to determine the points. Each ds element in ds_path is a point and will be passed as [i] ds to component Parameter Ref.
@note required
*/
@property(nonatomic, strong) NSString* ds_path;


/**
@discussion  group_param_ref the Parameter ref that will return each group value element belongs. The Parameter Ref will be resolved using a ds element [i] from ds_path.
@note required
*/
@property(nonatomic, strong) NSString* group_param_ref;


/**
@discussion  itemWidth
sul barcode spessore del bar.
sul candle spessore shadow
 @note required
*/
@property(nonatomic, assign) float itemWidth;


/**
@discussion  axis_font font draw element  .
@note optional
*/
@property(nonatomic, strong) OTMLFont* items_font;


/**
@discussion  items_label_param_ref the Parameter ref that will return each value draw above elements.
@note optional
*/
@property(nonatomic, strong) NSString* items_label_param_ref;


@property(nonatomic, assign) NSInteger label_x_num;


@property(nonatomic, assign) BOOL label_x_num_force;


@property(nonatomic, assign) NSInteger label_y_num;


@property(nonatomic, assign) BOOL label_y_num_force;


/**
@discussion  open_value_param_ref The Parameter Ref will be resolved using a ds element [i] from ds_path for candle graph.
@note optional
*/
@property(nonatomic, strong) NSString* open_value_param_ref;


/**
@discussion  paint_type_chart_decreasing type of color for candle if decreasing.
@note optional
*/
@property(nonatomic, assign) OTMLChartsPaintType paint_type_chart_decreasing;


/**
@discussion  paint_type_chart_decreasing  type of color for candle if increasing.
 @note optional
*/
@property(nonatomic, assign) OTMLChartsPaintType paint_type_chart_increasing;


/**
@discussion  shadow_h_value_param_ref The Parameter Ref will be resolved using a ds element [i] from ds_path for candle graph.
@note required
*/
@property(nonatomic, strong) NSString* shadow_h_value_param_ref;


/**
@discussion  shadow_l_value_param_ref The Parameter Ref will be resolved using a ds element [i] from ds_path for candle graph.
@note optional
*/
@property(nonatomic, strong) NSString* shadow_l_value_param_ref;


/**
@discussion  x_label_param_ref the Parameter ref that will return what write in axis x  (independent of chart elements).
@note optional
*/
@property(nonatomic, strong) NSString* x_label_param_ref;


/**
@discussion  x_value_param_ref the Parameter ref that will return each  x axis value of element. The Parameter Ref will be resolved using a ds element [i] from ds_path.
@note optional
*/
@property(nonatomic, strong) NSString* x_value_param_ref;


/**
@discussion  y_label_param_ref the Parameter ref that will return what write in axis y  (independent of chart elements).
@note optional
*/
@property(nonatomic, strong) NSString* y_label_param_ref;


/**
@discussion  y_value_param_ref the Parameter ref that will return each slice y axis value of element. The Parameter Ref will be resolved using a ds element [i] from ds_path.
@note optional
*/
@property(nonatomic, strong) NSString* y_value_param_ref;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end