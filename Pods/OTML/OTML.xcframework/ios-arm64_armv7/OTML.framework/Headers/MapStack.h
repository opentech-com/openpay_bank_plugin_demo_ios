//
//  MapStack.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



@class OTMLEntry;
@class OTMLLayout;
@class OTMLDatasource;
@class OTMLResourceLoader;

#import "OTMLMapStackEntry.h"
#import "OTMLNewCondition.h"

@interface MapStack : NSObject

-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use initWitKey: or initWithKey:andValue: instead")));

/**
 init the MapStack using the given aMainContextID
 @param aStackName theStackName
 @param aMainContextID the context id to be returned as default
 */
-(nonnull instancetype) initWithName:(nonnull NSString*)aStackName
             andDefaultMainContextID:(nonnull NSString*)aMainContextID;
/**
 init the MapStack using the given aMainContextID.
 NOTE: Added for test purposes
 @param aStackName theStackName
 @param aMainContextID the context id to be returned as default
 @param rl Resource Loader to use for resource loading.
 */
-(nonnull instancetype)initWithName:(nonnull NSString *)aStackName
            andDefaultMainContextID:(nonnull NSString *)aMainContextID
                     resourceLoader:(nonnull OTMLResourceLoader*) rl;

@property (nonatomic, readonly) NSString* _Nonnull stackName;


-(BOOL) containsMarkWithID:(nonnull NSString*) aMarkID;


-(nullable OTMLEntry*)getEntryWithID:(nonnull NSString*) aID;
-(nullable OTMLLayout*)getLayoutFromComponentGroupWithID:(nonnull NSString*) aID;
-(nullable OTMLDatasource*)getDatasourceWithID:(nonnull NSString*) aID;
-(nullable OTMLNewCondition*) getConditionFromGroupWithID:(nonnull NSString*) aID;
-(nullable OTMLParameter*) getParameterFromGroupWithID:(nonnull NSString*) aID;

-(BOOL) pushMap:(nonnull NSString*)aMapName
  withContextID:(nonnull NSString*)aContextID;
-(nonnull NSString*) topContextID;
-(nullable NSMutableDictionary*) popKeepWithContext:(nullable NSString*) aMarkID keepingEntry:(nullable OTMLMapStackEntry*) aKeepEntry;
-(nullable NSMutableDictionary*) popRemoveWithContext:(nullable NSString*) aMarkID keepingEntry:(nullable OTMLMapStackEntry*) aKeepEntry;
-(unsigned int) popKeep:(nullable NSString*) aMarkID;
-(unsigned int) popRemove:(nullable NSString*) aMarkID;
-(unsigned int) popKeep:(nullable NSString*) aMarkID keepingEntry:(nullable OTMLMapStackEntry*) aKeepEntry;
-(unsigned int) popRemove:(nullable NSString*) aMarkID keepingEntry:(nullable OTMLMapStackEntry*) aKeepEntry;
-(nonnull NSMutableDictionary*)removeLastNavMarkKeepingEntries:(BOOL)keepingEntries;
-(BOOL) pushStackEntry:(nonnull OTMLMapStackEntry*) aOTMLMapStackEntry;

/**
 this method pushes the store dictionary included in the aOTMLMapStackEntry ONLY IF IT IS ALREADY PRESENT IN STACK.
 @note: if it is pushed is removed from the former aOTMLMapStackEntry, otherwise it is left in aOTMLMapStackEntry itself.
 @note: you should either: push the aOTMLMapStackEntry that have already cleaned up store ds or ensure to push the store ds elements otherwise.
 */
-(void)pushStoreDictionaryAndFilterStackEntry:(nonnull OTMLMapStackEntry*) aOTMLMapStackEntry;
-(void)pushStoreDictionaryAndEnsureAllEntryPushedStackEntry:(nonnull OTMLMapStackEntry*) aOTMLMapStackEntry;
-(BOOL) popMarkOnlyNavigation:(BOOL) popOnlyNavigation;
-(nonnull NSMutableDictionary*) popMarkOnlyNavigation:(BOOL) popOnlyNavigation withContext:(nullable NSString*)aContext;
-(BOOL)updateStoreDS:(nullable OTMLDatasource*)aNewDS forDSID:(nonnull NSString*)aDSID;
-(BOOL)updateStoreDS:(nullable OTMLDatasource*)aNewDS forDSID:(nonnull NSString*)aDSID pushIfDoesNotExists:(BOOL) shouldPush;

-(nonnull NSMutableDictionary*)gobackWithDirectiveComponents:(nonnull NSArray*) directivitySplittedByDot
                                                keepingEntry:(nullable OTMLMapStackEntry*) akeepingEntry;
-(BOOL) pushStackEntryBelowNavMark:(nonnull OTMLMapStackEntry*) aOTMLMapStackEntry;

/**
 * @param aMapName the xml name
 * @return OTMLMapStackEntry a map entry directly from disk or bundle. The map and its DS are not pushed into stack
 */
+(nullable OTMLMapStackEntry*)getUnstackedEntryWithMap:(nonnull NSString*) aMapName;

@end
