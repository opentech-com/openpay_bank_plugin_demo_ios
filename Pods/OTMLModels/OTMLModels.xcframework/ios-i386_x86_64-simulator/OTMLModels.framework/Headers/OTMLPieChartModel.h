@class OTMPColor;
#import "OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_PieChart_refresh;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_PieChart_ds_path;
extern NSString* const p_PieChart_value_param_ref;
extern NSString* const p_PieChart_slice_color_param_ref;

@interface OTMLPieChartModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) BOOL arc;


@property(nonatomic, assign) float arc_width;


/**
@discussion  ds_path the path in use to determine the slices. Each ds element in ds_path is a slice and will be passed as [i] ds to component Parameter Ref
@note required
*/
@property(nonatomic, strong) NSString* ds_path;


/**
@discussion  slice_color_param_ref the Parameter ref that will return each slice color. The Parameter Ref will be resolved using a ds element [i] from ds_path.
@note required
*/
@property(nonatomic, strong) NSString* slice_color_param_ref;


@property(nonatomic, strong) OTMPColor* stroke_color;


@property(nonatomic, assign) float stroke_width;


/**
@discussion  value_param_ref the Parameter ref that will return each slice value. The Parameter Ref will be resolved using a ds element [i] from ds_path.
@note required
*/
@property(nonatomic, strong) NSString* value_param_ref;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end