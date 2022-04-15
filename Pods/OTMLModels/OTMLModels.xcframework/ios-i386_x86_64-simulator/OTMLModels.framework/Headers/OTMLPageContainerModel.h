@class OTMPColor;
#import "OTMLFrameContainerModel.h"
#import "OTMLPageContainerIndicatorType.h"
@class OTMLFont;


//All triggers that are allowed by this component
extern NSString* const t_PageContainer_page_changed;
//All triggers that are allowed by this component
extern NSString* const t_PageContainer_goto_next_page;
extern NSString* const t_PageContainer_goto_prev_page;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_PageContainer_current_page;
extern NSString* const p_PageContainer_swipe_enabled;
extern NSString* const p_PageContainer_hide_page_indicator;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_PageContainer_current_page;
extern NSString* const f_PageContainer_content_page_id;
extern NSString* const f_PageContainer_current_page_zero_based;
extern NSString* const f_PageContainer_pages_count;
extern NSString* const f_PageContainer_has_prev_page;
extern NSString* const f_PageContainer_has_next_page;

@interface OTMLPageContainerModel : OTMLFrameContainerModel<NSCopying>

    @property(nonatomic, assign) BOOL bounce;


@property(nonatomic, strong) OTMPColor* current_indicator_color;


@property(nonatomic, assign) BOOL hide_page_indicator;


@property(nonatomic, strong) OTMPColor* indicator_bg_color;


@property(nonatomic, strong) OTMPColor* indicator_color;


@property(nonatomic, assign) NSInteger indicator_height;


@property(nonatomic, assign) NSInteger indicator_size;


@property(nonatomic, assign) NSInteger indicator_top_padding;


@property(nonatomic, assign) OTMLPageContainerIndicatorType indicator_type;


@property(nonatomic, strong) NSString* indicator_width;


@property(nonatomic, assign) NSInteger max_indicators;


@property(nonatomic, assign) BOOL overlay_indicator;


@property(nonatomic, assign) BOOL page_indicator_on_bottom;


@property(nonatomic, strong) NSString* scroll_bg;


@property(nonatomic, strong) OTMPColor* shadow_color;


@property(nonatomic, assign) BOOL swipe_enabled;


@property(nonatomic, assign) NSInteger tab_bottom_padding;


@property(nonatomic, assign) NSInteger tab_top_padding;


@property(nonatomic, strong) OTMLFont* text_indicator_font_style;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end