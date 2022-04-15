#import <objc/runtime.h>
#import <TBXML/TBXML.h>
@class OTMLMapEntryModel;





@interface OTMLMapElementModel : NSObject<NSCopying>

    @property(nonatomic, strong) OTMLMapEntryModel* entry;


@property(nonatomic, strong) NSString* key;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end