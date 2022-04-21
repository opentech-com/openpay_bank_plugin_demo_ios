#import "OTMLNetworkInteractionType.h"
#import "OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_WebView_did_finish_load;
//All triggers that are allowed by this component
extern NSString* const t_WebView_refresh;
extern NSString* const t_WebView_refresh_if_necessary;
extern NSString* const t_WebView_back;
extern NSString* const t_WebView_forward;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_WebView_source;
extern NSString* const p_WebView_html_text;
extern NSString* const p_WebView_navigation_filter_regex_pattern;
extern NSString* const p_WebView_html_text_base_url;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_WebView_can_go_back;
extern NSString* const f_WebView_can_go_forward;

@interface OTMLWebViewModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) BOOL auto_load;


@property(nonatomic, assign) BOOL fixed_size;


@property(nonatomic, assign) BOOL has_otml_js_bridge;


@property(nonatomic, strong) NSString* html_text;


@property(nonatomic, assign) OTMLNetworkInteractionType http_type;


@property(nonatomic, strong) NSString* network_params;


@property(nonatomic, strong) NSString* source;


@property(nonatomic, strong) NSString* zoom;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end