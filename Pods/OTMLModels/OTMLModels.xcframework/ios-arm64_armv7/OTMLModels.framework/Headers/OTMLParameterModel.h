#import <objc/runtime.h>
@class OTMLConditionModel;
#import <TBXML/TBXML.h>
#import "OTMLParameterMode.h"
@class OTMLParametersModel;
#import "OTMLParameterType.h"





@interface OTMLParameterModel : NSObject<NSCopying>

    @property(nonatomic, strong) OTMLConditionModel* condition;


@property(nonatomic, strong) NSString* customMode;


@property(nonatomic, strong) NSString* flagforsrc;


@property(nonatomic, assign) OTMLParameterMode mode;


@property(nonatomic, strong) NSString* name;


@property(nonatomic, strong) OTMLParametersModel* parameters;


@property(nonatomic, assign) BOOL sensitive;


@property(nonatomic, strong) NSString* srcid;


@property(nonatomic, assign) OTMLParameterType type;


@property(nonatomic, strong) NSString* validFor;


@property(nonatomic, assign) BOOL validate;


@property(nonatomic, strong) NSString* value;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end