#import <objc/runtime.h>
#import <TBXML/TBXML.h>
#import "OTMLComponentGroupModel.h"





@interface OTMLComponentGroupsModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* component_groups;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end