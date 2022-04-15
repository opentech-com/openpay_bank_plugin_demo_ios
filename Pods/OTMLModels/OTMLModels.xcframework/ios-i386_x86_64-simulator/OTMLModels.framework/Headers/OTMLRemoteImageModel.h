#import "OTMLImageModel.h"


//All triggers that are allowed by this component
extern NSString* const t_RemoteImage_remote_image_loaded;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_RemoteImage_url;
extern NSString* const p_RemoteImage_phonebook_image_id;

@interface OTMLRemoteImageModel : OTMLImageModel<NSCopying>

    @property(nonatomic, strong) NSString* phonebook_image_id;


@property(nonatomic, strong) NSString* url;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end