#import "OTMLPagerListContainerV2Model.h"





@interface OTMLPagerListGalleryModel : OTMLPagerListContainerV2Model<NSCopying>

    @property(nonatomic, assign) NSInteger preview_size;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end