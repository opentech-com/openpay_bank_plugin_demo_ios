//
//  OTMLMapStackEntry.h
//  OTML
//
//  Created by epavoni on 29/08/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

@class OTMLEntry;
@class OTMLLayout;
@class OTMLDatasource;
@class OTMLNewCondition;
@class OTMLParameter;
#import <OTMLModels/OTMLMapElementsModel.h>
#import <OTMLModels/OTMLDatasourcesModel.h>
#import <OTMLModels/OTMLConditionsModel.h>
#import <OTMLModels/OTMLComponentGroupsModel.h>
#import <OTMLModels/OTMLComponentGroupModel.h>
#import <OTMLModels/OTMLActionsModel.h>

@interface OTMLMapStackEntry : NSObject<NSCopying>{
    BOOL mark;
    BOOL lightMark;
    BOOL staticMap;
    NSString* markID;
    NSString* contextID;
    NSDictionary* baseMap;
    NSDictionary* baseGroups;
    NSDictionary* baseDataSource;
    NSDictionary<NSString*, OTMLNewCondition*>* conditionGroup;
    NSDictionary<NSString*, OTMLParameter*>* parameterGroup;
    NSMutableDictionary* storeDataSource;
}

@property (nonatomic, retain) NSString* _Nonnull markTargetID;
@property (nonatomic, retain) NSArray* _Nonnull markTagIDS;
@property (nonatomic, readonly) NSString* _Nonnull markID;
@property (nonatomic, strong) NSString* _Nonnull contextID;


+(nonnull OTMLMapStackEntry*) newNavigationMarkWIthContext:(nonnull NSString*)aContextID
                                                 andTarget:(nonnull NSString*)aTarget;

-(nonnull instancetype) initWithDatasource:(nonnull NSDictionary*)aDictionary;
-(nonnull instancetype) initWithBaseMap:(nonnull NSString*) aBaseMap;
-(nonnull instancetype) initWithBaseMapData:(nonnull NSData*) aBaseMapData;
-(nonnull instancetype) initWithBaseMapData:(nonnull NSData*) aBaseMapData targetContext:(nonnull NSString*)aContext;

-(nonnull id)initWithMarkID:(nonnull NSString*) aMarkID isLightMark:(BOOL) isaLightMark;
-(nonnull id)initWithMapStackEntry:(nonnull OTMLMapStackEntry*)aMapStackEntry;
-(nonnull OTMLEntry*)newEntryWithID:(nonnull NSString*) aID;
-(nonnull OTMLEntry*)newFirstEntry;
-(nonnull OTMLLayout*)newLayoutFromComponentGroupWithID:(nonnull NSString*) aID;

-(nonnull OTMLDatasource*)newDatasourceWithID:(nonnull NSString*) aID;

-(nonnull NSMutableDictionary*) getStroreDictionary;
-(nonnull NSDictionary*) getDatasourceMap;
-(nonnull NSDictionary<NSString*, OTMLNewCondition*>*)getConditionGroupMap;
-(nonnull NSDictionary<NSString*, OTMLParameter*>*)getParameterGroupMap;
-(nullable OTMLNewCondition*) newConditionFromGroupWithID:(nonnull NSString*) aID;
-(nullable OTMLParameter*) newParameterFromGroupWithID:(nonnull NSString*) aID;

-(BOOL) isMark;
-(BOOL) isLightMark;
-(BOOL) isNavigationMark;
-(void) dispose;

@end
