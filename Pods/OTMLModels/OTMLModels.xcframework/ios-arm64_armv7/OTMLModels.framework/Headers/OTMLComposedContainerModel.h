#import "OTMLContainerModel.h"


//All triggers that are allowed by this component
extern NSString* const t_ComposedContainer_did_expand;
extern NSString* const t_ComposedContainer_did_collapse;
extern NSString* const t_ComposedContainer_did_anchor;
extern NSString* const t_ComposedContainer_sliding_started;



@interface OTMLComposedContainerModel : OTMLContainerModel<NSCopying>

    @property(nonatomic, strong) NSString* draggable_group_id;


@property(nonatomic, strong) NSString* main_group_id;


@property(nonatomic, strong) NSString* secondary_group_id;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end