#import <objc/runtime.h>
#import <TBXML/TBXML.h>
@class OTMLComponentModel;
@class OTMLActionsModel;





@interface OTMLLayoutModel : NSObject<NSCopying>

    @property(nonatomic, strong) OTMLActionsModel* actions;


@property(nonatomic, strong) OTMLComponentModel* rootComponent;


@property(nonatomic, strong) NSString* tag;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end