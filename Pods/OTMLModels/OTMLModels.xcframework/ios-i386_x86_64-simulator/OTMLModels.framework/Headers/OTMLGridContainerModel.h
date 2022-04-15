#import "OTMLContainerModel.h"
#import "OTMLOrientations.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_GridContainer_number_of_blocks;

@interface OTMLGridContainerModel : OTMLContainerModel<NSCopying>

    @property(nonatomic, assign) OTMLOrientations disposition;


@property(nonatomic, assign) NSInteger number_of_blocks;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end