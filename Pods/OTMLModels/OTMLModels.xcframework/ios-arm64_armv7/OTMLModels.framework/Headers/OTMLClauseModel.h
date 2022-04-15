#import "OTMLEvaluableModel.h"
#import "OTMLParameterModel.h"
#import "OTMLClauseTypes.h"





@interface OTMLClauseModel : OTMLEvaluableModel<NSCopying>

    @property(nonatomic, strong) NSArray* param;


@property(nonatomic, assign) OTMLClauseTypes type;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end