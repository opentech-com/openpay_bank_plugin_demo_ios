#import "OTMLLinearContainerModel.h"
#import "OTMLNetworkRequestType.h"
#import "OTMLContentHandlingStrategy.h"
#import "OTMLDynamicContainerLocalLoadingMode.h"


//All triggers that are allowed by this component
extern NSString* const t_DynamicLinearContainer_on_network_ok_response;
extern NSString* const t_DynamicLinearContainer_did_network_ok_response;
extern NSString* const t_DynamicLinearContainer_on_network_ko_response;
//All triggers that are allowed by this component
extern NSString* const t_DynamicLinearContainer_refresh_with_fade;
extern NSString* const t_DynamicLinearContainer_refresh;
extern NSString* const t_DynamicLinearContainer_refresh_if_necessary;
extern NSString* const t_DynamicLinearContainer_clear;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_DynamicLinearContainer_network_target;
extern NSString* const p_DynamicLinearContainer_local_loading_mode;
extern NSString* const p_DynamicLinearContainer_content_handling_strategy;

@interface OTMLDynamicLinearContainerModel : OTMLLinearContainerModel<NSCopying>

    @property(nonatomic, assign) OTMLContentHandlingStrategy content_handling_strategy;


@property(nonatomic, assign) BOOL continue_requests_when_detached;


@property(nonatomic, assign) OTMLNetworkRequestType http_type;


@property(nonatomic, assign) OTMLDynamicContainerLocalLoadingMode local_loading_mode;


@property(nonatomic, strong) NSString* network_params;


@property(nonatomic, strong) NSString* network_target;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end