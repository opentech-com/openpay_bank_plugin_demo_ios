@class OTMPColor;
#import "OTMLComponentModel.h"
#import "OTMLSize.h"





@interface OTMLLoadingModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) OTMPColor* color;


@property(nonatomic, assign) OTMLSize native_animation_size;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end