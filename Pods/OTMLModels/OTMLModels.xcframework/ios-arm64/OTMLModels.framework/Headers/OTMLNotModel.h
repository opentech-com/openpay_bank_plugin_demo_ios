@class OTMLEvaluableModel;
#import "OTMLEvaluableModel.h"





@interface OTMLNotModel : OTMLEvaluableModel<NSCopying>

    @property(nonatomic, strong) OTMLEvaluableModel* condition;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end