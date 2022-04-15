@class OTMPColor;
#import "OTMLComponentModel.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_ProgressBar_value;
extern NSString* const p_ProgressBar_max_value;
extern NSString* const p_ProgressBar_min_value;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_ProgressBar_value;

@interface OTMLProgressBarModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) NSString* content_image;


@property(nonatomic, strong) OTMPColor* empty_color_e;


@property(nonatomic, strong) OTMPColor* empty_color_s;


@property(nonatomic, strong) OTMPColor* fill_color_e;


@property(nonatomic, strong) OTMPColor* fill_color_s;


@property(nonatomic, assign) BOOL fill_direction;


@property(nonatomic, strong) NSString* image_separator;


@property(nonatomic, assign) NSInteger max_value;


@property(nonatomic, assign) NSInteger min_value;


@property(nonatomic, assign) NSInteger minimum_fill_size;


@property(nonatomic, assign) NSInteger percent;


@property(nonatomic, assign) NSInteger value;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end