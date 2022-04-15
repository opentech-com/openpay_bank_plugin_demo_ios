#import "OTMLEvaluableModel.h"
#import "EvaluableGeneralFactory.h"





@interface OTMLOrModel : OTMLEvaluableModel<NSCopying>

    @property(nonatomic, strong) NSArray* conditions;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end