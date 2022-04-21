//
//  OTMLLayoutViewController.h
//  OTML
//
//  Created by Alessandro Ruggeri on 19/06/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


#import "OTMLParameterToParEntryResolution.h"
#import <OTMLModels/OTMLTriggersConstants.h>
#import "OTMLDatasource.h"
#import "OTMLParameterDataFetcher.h"

@class OTMLComponent;
@class OTMLEntry;
@class OTMLParameter;
@class OTMLParameterEntry;
@class OTMLNewCondition;
@class OTMLMainViewController;

@interface OTMLLayoutViewController : UIViewController<OTMLParameterDataFetcher>{
@protected OTMLEntry* entry;
@protected OTMLComponent* component;
@protected NSDictionary* parameterMap;
    
@protected    BOOL first_shown;

    
@protected NSMutableDictionary* otmlBuffer;
@protected NSMutableDictionary* dynaBinding;
}

@property (nonatomic, strong, nonnull) NSString* contextID;
@property (nonatomic, nullable, weak) OTMLMainViewController* parentMVC;


-(nonnull id) initWithEntry:(nonnull OTMLEntry*) aEntry
          andWithParameters:(nonnull NSDictionary*) aParameterMap;


-(nonnull OTMLEntry*)getEntry;

-(void)setInAnimation:(BOOL)inAnimation;
-(BOOL)inAnimation;
-(BOOL)inAnimationFadePrevious;


-(nullable OTMLParameterEntry*) resolveAsKeyValueParameter:(nonnull OTMLParameter*) aParameter validate:(BOOL)validateNow;

-(nullable OTMLNewCondition*) getConditionRefWithID:(nullable NSString*) aConditionId;
-(nullable OTMLParameter*) getParameterRefWithID:(nullable NSString*)aParameterRefID;

-(void) dismissDinamicBinding;
-(void) assignDynamicBindingForDictionary:(nonnull NSDictionary*) aDictionary;
-(nullable NSString*) findPushedParamValueFromKey:(nullable NSString*) aParametherName;

+(nullable OTMLDatasource*) getElementForKey:(nonnull NSString*) aKey inDatasource:(nonnull OTMLDatasource*) aDatasourceInterface;

-(void) did_showTrigger;
-(void) will_showTrigger;
-(void) will_hideTrigger;
-(void) did_hideTrigger;
-(void)contextMountedTrigger;
-(void)contextUnmountedTrigger;

-(nonnull NSString*)getCurrentEntryName;
-(void)dispose;
-(void)triggerEvent:(nonnull NSString*) anEvent;
-(void)cleanFindComponentIdBuffer;


-(nullable NSString*)valueForCustomEntryAttribute:(nonnull NSString*)aCustomKey;

@end
