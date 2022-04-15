#import "OTMLComponentModel.h"


//All triggers that are allowed by this component
extern NSString* const t_BollettinoHandler_text_changed;


//All parameters that are accepted in INPUT by this component
extern NSString* const p_BollettinoHandler_text;
//All parameters that are accepted in OUTPUT by this component
extern NSString* const f_BollettinoHandler_text;
extern NSString* const f_BollettinoHandler_conto_corrente;
extern NSString* const f_BollettinoHandler_importo;
extern NSString* const f_BollettinoHandler_codice_bollettino;
extern NSString* const f_BollettinoHandler_is_896;
extern NSString* const f_BollettinoHandler_is_674;

@interface OTMLBollettinoHandlerModel : OTMLComponentModel<NSCopying>


-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end