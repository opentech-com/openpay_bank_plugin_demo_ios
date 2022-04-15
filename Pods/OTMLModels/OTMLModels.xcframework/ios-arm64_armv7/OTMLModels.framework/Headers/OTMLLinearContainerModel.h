@class OTMPColor;
#import "OTMLHorizontalAlignment.h"
#import "OTMLContainerModel.h"
#import "OTMLOrientations.h"
#import "OTMLVerticalAlignment.h"





@interface OTMLLinearContainerModel : OTMLContainerModel<NSCopying>

    @property(nonatomic, assign) BOOL adjust_auto_min_height_for_keyboard;


@property(nonatomic, assign) BOOL auto_min_height_from_parent_scroll_container;


@property(nonatomic, assign) BOOL bg_image_alpha;


@property(nonatomic, assign) OTMLHorizontalAlignment content_align;


@property(nonatomic, assign) OTMLVerticalAlignment content_v_align;


@property(nonatomic, assign) BOOL disable_user_interactivity;


@property(nonatomic, assign) BOOL draggable_sub_component;


@property(nonatomic, strong) NSString* draggable_sub_filename;


@property(nonatomic, strong) OTMPColor* dragging_area_color;


@property(nonatomic, strong) OTMPColor* dragging_border_color;


@property(nonatomic, assign) NSInteger noise_alpha_percent;


@property(nonatomic, strong) NSString* noise_pattern;


@property(nonatomic, assign) OTMLOrientations orientation;


@property(nonatomic, strong) NSString* rounding;


@property(nonatomic, assign) BOOL stopAnimationReload;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end