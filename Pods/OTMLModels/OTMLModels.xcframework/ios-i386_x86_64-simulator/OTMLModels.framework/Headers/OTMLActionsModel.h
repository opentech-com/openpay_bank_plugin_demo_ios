#import <objc/runtime.h>
#import <TBXML/TBXML.h>
#import "OTMLActionModel.h"





@interface OTMLActionsModel : NSObject<NSCopying>

    @property(nonatomic, strong) NSArray* actions;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end