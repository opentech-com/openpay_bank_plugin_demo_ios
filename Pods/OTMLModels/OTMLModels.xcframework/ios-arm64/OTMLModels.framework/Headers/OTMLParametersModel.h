#import <objc/runtime.h>
#import <TBXML/TBXML.h>
#import "OTMLParameterModel.h"





@interface OTMLParametersModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* parameters;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end