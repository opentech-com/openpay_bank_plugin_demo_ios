#import "OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_CheckBox_click;
extern NSString* const t_CheckBox_unchecked;
extern NSString* const t_CheckBox_checked;
extern NSString* const t_CheckBox_click_from_parameter;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_CheckBox_checked;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_CheckBox_checked;

@interface OTMLCheckBoxModel : OTMLComponentModel<NSCopying>

    /**
    Define if the checkbox default is checked or not.
    */
    @property(nonatomic, assign) BOOL checked;


/**
checked image for disabled state
*/
@property(nonatomic, strong) NSString* checked_image_d;


/**
checked image for normal state
*/
@property(nonatomic, strong) NSString* checked_image_n;


/**
checked image for pressed state
*/
@property(nonatomic, strong) NSString* checked_image_p;


/**
UN-checked image for disabled state
*/
@property(nonatomic, strong) NSString* unchecked_image_d;


/**
UN-checked image for normal state
*/
@property(nonatomic, strong) NSString* unchecked_image_n;


/**
UN-checked image for normal state
*/
@property(nonatomic, strong) NSString* unchecked_image_p;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end