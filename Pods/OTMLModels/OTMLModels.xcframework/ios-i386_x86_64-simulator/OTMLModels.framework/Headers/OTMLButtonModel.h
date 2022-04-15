#import "OTMLLabelModel.h"


//All triggers that are allowed by this component
extern NSString* const t_Button_click;
extern NSString* const t_Button_click_from_parameter;
extern NSString* const t_Button_touch;



@interface OTMLButtonModel : OTMLLabelModel<NSCopying>


-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end