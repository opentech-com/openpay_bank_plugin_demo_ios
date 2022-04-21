#import <objc/runtime.h>
#import <TBXML/TBXML.h>
#import "OTMLDatasourceElementModel.h"





@interface OTMLDatasourceElementModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* elements;


@property(nonatomic, strong) NSString* key;


@property(nonatomic, strong) NSString* val;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end