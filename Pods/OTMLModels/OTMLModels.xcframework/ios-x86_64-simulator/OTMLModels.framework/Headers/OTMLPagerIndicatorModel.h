@class OTMPColor;
#import "OTMLComponentModel.h"
#import "OTMLPageContainerIndicatorType.h"
@class OTMLFont;




//All parameters that are accepted in INPUT by this component
extern NSString* const p_PagerIndicator_indicator_color;
extern NSString* const p_PagerIndicator_current_indicator_color;

@interface OTMLPagerIndicatorModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) OTMPColor* current_indicator_color;


@property(nonatomic, assign) BOOL disable_user_interaction;


@property(nonatomic, strong) OTMPColor* indicator_color;


@property(nonatomic, assign) NSInteger indicator_size;


@property(nonatomic, assign) OTMLPageContainerIndicatorType indicator_type;


@property(nonatomic, assign) NSInteger max_indicators;


@property(nonatomic, strong) OTMLFont* text_indicator_font_style;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end