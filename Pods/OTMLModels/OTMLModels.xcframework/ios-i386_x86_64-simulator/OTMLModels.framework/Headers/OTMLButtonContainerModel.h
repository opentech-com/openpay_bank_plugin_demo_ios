#import "OTMLLinearContainerModel.h"


//All triggers that are allowed by this component
extern NSString* const t_ButtonContainer_click;
extern NSString* const t_ButtonContainer_long_press_tick;
extern NSString* const t_ButtonContainer_long_press_started;



@interface OTMLButtonContainerModel : OTMLLinearContainerModel<NSCopying>

    @property(nonatomic, strong) NSString* long_press_trigger_timing;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end