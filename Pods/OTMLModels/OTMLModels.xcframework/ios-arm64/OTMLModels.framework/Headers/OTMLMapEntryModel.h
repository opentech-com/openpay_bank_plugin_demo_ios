#import <objc/runtime.h>
#import <TBXML/TBXML.h>
@class OTMLDatasourcesModel;
#import "OTMLAnimationTypes.h"
@class OTMLParametersModel;
@class OTMLConditionsModel;
@class OTMLLayoutModel;





@interface OTMLMapEntryModel : NSObject<NSCopying>

    @property(nonatomic, assign) OTMLAnimationTypes animation_type;


@property(nonatomic, strong) NSString* canGoBack;


@property(nonatomic, strong) OTMLConditionsModel* conditions;


@property(nonatomic, strong) OTMLDatasourcesModel* datasources;


@property(nonatomic, assign) BOOL ignore_context_animations;


@property(nonatomic, assign) BOOL in_animation;


@property(nonatomic, assign) BOOL in_animation_fade_previous;


@property(nonatomic, strong) OTMLLayoutModel* layout;


@property(nonatomic, strong) OTMLParametersModel* parameters;


@property(nonatomic, strong) NSString* script;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end