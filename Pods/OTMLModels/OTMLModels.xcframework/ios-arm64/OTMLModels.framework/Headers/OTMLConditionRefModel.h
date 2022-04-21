#import "OTMLEvaluableModel.h"





@interface OTMLConditionRefModel : OTMLEvaluableModel<NSCopying>

    @property(nonatomic, strong) NSString* refId;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end