#import <objc/runtime.h>
@class OTMLComponentGroupsModel;
#import <TBXML/TBXML.h>
@class OTMLDatasourcesModel;
@class OTMLMapElementsModel;
@class OTMLParametersModel;
@class OTMLConditionsModel;
@class OTMLActionsModel;





@interface OTMLMapModel : NSObject<NSCopying>

    @property(nonatomic, strong) OTMLActionsModel* app_actions;


@property(nonatomic, strong) OTMLComponentGroupsModel* componentGroups;


@property(nonatomic, strong) OTMLConditionsModel* conditions;


@property(nonatomic, strong) OTMLDatasourcesModel* datasources;


@property(nonatomic, strong) OTMLMapElementsModel* elements;


@property(nonatomic, strong) NSString* name;


@property(nonatomic, strong) OTMLParametersModel* parameters;


@property(nonatomic, strong) NSString* version;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end