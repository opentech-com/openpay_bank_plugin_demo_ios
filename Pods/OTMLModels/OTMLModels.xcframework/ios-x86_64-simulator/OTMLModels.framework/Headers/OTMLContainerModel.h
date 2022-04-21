#import "ComponentGeneralFactory.h"
#import "OTMLPropagateTouch.h"
#import "OTMLComponentModel.h"





@interface OTMLContainerModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) BOOL consider_as_group_for_voice_over;


@property(nonatomic, assign) OTMLPropagateTouch propagate_disabled;


@property(nonatomic, strong) NSString* propagate_disabled_list;


@property(nonatomic, assign) OTMLPropagateTouch propagate_pressed;


@property(nonatomic, strong) NSString* propagate_pressed_list;


@property(nonatomic, assign) OTMLPropagateTouch propagate_selected;


@property(nonatomic, strong) NSString* propagate_selected_list;


@property(nonatomic, strong) NSArray* subComponents;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end