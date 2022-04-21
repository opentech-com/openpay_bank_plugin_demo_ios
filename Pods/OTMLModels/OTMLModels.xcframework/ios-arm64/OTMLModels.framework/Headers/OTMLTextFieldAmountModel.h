#import "OTMLTextFieldModel.h"




//All parameters that are accepted in INPUT by this component
extern NSString* const p_TextFieldAmount_locale;
extern NSString* const p_TextFieldAmount_max_int_digits;
extern NSString* const p_TextFieldAmount_max_cent_digits;
extern NSString* const p_TextFieldAmount_currency;
extern NSString* const p_TextFieldAmount_amount;
extern NSString* const p_TextFieldAmount_prefix_text;
extern NSString* const p_TextFieldAmount_postfix_text;
extern NSString* const p_TextFieldAmount_min_amount;
extern NSString* const p_TextFieldAmount_max_amount;
extern NSString* const p_TextFieldAmount_min_amount_exceeded_error_text;
extern NSString* const p_TextFieldAmount_max_amount_exceeded_error_text;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_TextFieldAmount_amount;

@interface OTMLTextFieldAmountModel : OTMLTextFieldModel<NSCopying>

    /**
    Validato durante la digitazione non esisteranno mai numeri non conformi
    */
    @property(nonatomic, assign) NSInteger max_cent_digits;


/**
Validato durante la digitazione non esisteranno mai numeri non conformi
*/
@property(nonatomic, assign) NSInteger max_int_digits;


@property(nonatomic, strong) NSString* postfix_text;


@property(nonatomic, strong) NSString* prefix_text;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end