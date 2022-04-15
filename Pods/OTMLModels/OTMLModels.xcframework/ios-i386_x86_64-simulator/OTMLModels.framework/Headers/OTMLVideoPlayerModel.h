#import "OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_VideoPlayer_play;
extern NSString* const t_VideoPlayer_stop;
extern NSString* const t_VideoPlayer_pause;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_VideoPlayer_meta_data_ds;

@interface OTMLVideoPlayerModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, strong) NSString* base_addr_path;


@property(nonatomic, strong) NSString* fragments_path;


@property(nonatomic, strong) NSString* full_label;


@property(nonatomic, assign) BOOL play_on_load;


@property(nonatomic, strong) NSString* signature_path;


@property(nonatomic, strong) NSString* wrap_label;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end