#import <objc/runtime.h>
#import <TBXML/TBXML.h>
#import "OTMLDatasourceModel.h"





@interface OTMLDatasourcesModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* datasources;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end