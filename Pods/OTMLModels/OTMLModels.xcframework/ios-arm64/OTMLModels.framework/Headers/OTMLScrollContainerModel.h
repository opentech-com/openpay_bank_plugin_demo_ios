#import "OTMLLinearContainerModel.h"
@class OTMPColor;
#import "OTMLScrollBarType.h"


//All triggers that are allowed by this component
extern NSString* const t_ScrollContainer_did_pull_to_refresh;
extern NSString* const t_ScrollContainer_did_scroll_to_bottom;
extern NSString* const t_ScrollContainer_did_scroll_to_top;
extern NSString* const t_ScrollContainer_can_scroll;
extern NSString* const t_ScrollContainer_cant_scroll;
//All triggers that are allowed by this component
extern NSString* const t_ScrollContainer_dismiss_pull_to_refresh_loading;



@interface OTMLScrollContainerModel : OTMLLinearContainerModel<NSCopying>

    @property(nonatomic, assign) BOOL blink_bar;


@property(nonatomic, assign) BOOL bounce;


@property(nonatomic, assign) NSInteger max_height;


@property(nonatomic, assign) NSInteger max_width;


@property(nonatomic, assign) BOOL pull_to_refresh;


@property(nonatomic, strong) OTMPColor* pull_to_refresh_loading_color;


@property(nonatomic, assign) OTMLScrollBarType scroll_bar_type;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end