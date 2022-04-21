#import "OTMLHintedTextFieldModel.h"


//All triggers that are allowed by this component
extern NSString* const t_HintedTextFieldDynamic_refresh;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_HintedTextFieldDynamic_network_target;

@interface OTMLHintedTextFieldDynamicModel : OTMLHintedTextFieldModel<NSCopying>

    @property(nonatomic, strong) NSString* http_type;


@property(nonatomic, strong) NSString* network_params;


@property(nonatomic, strong) NSString* network_target;


@property(nonatomic, strong) NSString* number_of_elements;


@property(nonatomic, strong) NSString* search_parameter;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end