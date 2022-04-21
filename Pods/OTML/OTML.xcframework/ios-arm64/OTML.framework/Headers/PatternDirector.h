//
//  PatternDirector.h
//  OTML
//
//  Created by enrico on 29/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import "OTMLEntry.h"
#import "OTMLViewController.h"
#import "OTMLBridgeDelegate.h"
#import "OTMLNewCondition.h"
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>
#import "OTMLNetworkTask.h"
#import <MessageUI/MessageUI.h>
#import "OTMLAdvancedUpdaterManager.h"
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>
#import "PatternDirectorDatasouerce.h"
#import "OTMLMapStackEntry.h"

@class MapStack;
@class OTMLLayoutViewController;
@class OTMLDatasource;
@class OTMLSessionDatasource;
@class OTMLContextContainerViewController;

@protocol OTMLBridgeDelegate;

@interface PatternDirector : NSObject<OTMLRestartAppAwareProtocol>{

}

@property (nonatomic,strong,readonly,nullable) OTMLContextContainerViewController* contextController;

/**
 *  @discussion this method is the hook for container app to define its Viewcontrollers hierarchy.
 *  @warning invocation of this method is mandatory for OTML to work as expected.
 *  @note aDictoinary is supposed to have NSString* ad keys and id<OTMLBridgeDelegate,PatternDirectorDatasouerce> as objects
 */

-(void) setupWithContextsController:(nonnull OTMLContextContainerViewController*) aContextDescriptor;

+ (nonnull instancetype) getInstance;
-(nonnull NSString*) mainContextID;

/**
 @discussion push a DS that was retrieved from manifest datasource section
 @param ds a map with key/datasources
 */
-(void) pushOtmlUpdateDescriptorDatasource:(nonnull NSDictionary*)ds;

-(void) pushOTMLVCWithTarget:(nonnull NSString*)aTarget
                  withParams:(nonnull NSDictionary*) aParameters
          WithOTMLDatasource:(nullable NSDictionary*) aRespDatasource
                      andXML:(nullable OTMLMapStackEntry*) aOTMLEntry
    andPreExecuteActionArray:(nullable NSArray*)preExecuteAction
      andPreStackActionArray:(nullable NSArray*)preStackAction
        andOriginalContextId:(nonnull NSString*) aOriginalContextID;

-(void) perfromDotUpdateWithParams:(nonnull NSDictionary*) parameters inOriginalContext:(nonnull NSString*)aOriginalContextID;

-(nullable OTMLEntry*) entryForKey:(nonnull NSString*) key preferredContextID:(nullable NSString*) aCtxID;

-(nullable OTMLLayout*) layoutComponetGroupForKey:(nonnull NSString*) key  preferredContextID:(nullable NSString*) aCtxID;
-(nullable OTMLNewCondition*) conditionGroupForKey:(nonnull NSString*) key preferredContextID:(nullable NSString*) aCtxID;
-(nullable OTMLParameter*) parameterGroupForKey:(nonnull NSString*) key preferredContextID:(nullable NSString*) aCtxID;


-(nullable OTMLDatasource*) getDataSourceForkey:(nonnull NSString*) key preferredContextID:(nullable NSString*) aCtxID;

-(void) pushStoreDictionaryInStackName:(nonnull NSString *)mapStackName andEnsureAllEntryPushedStackEntry:(nonnull OTMLMapStackEntry*)sessionStoreDSEntries;
-(nullable NSString*)searchMapStackCointainingDsWithKey:(nonnull NSString *)dsKEY;

-(void) popNavigationControllerFromStackWithContextID:(nonnull NSString*)aContextID;

-(nullable OTMLViewController*)getAnyOTMLVC;
-(nullable OTMLViewController*)getOTMLViewForMainContext;
-(nullable OTMLViewController*)getOTMLViewControllerForContext:(nonnull NSString*) aContextID;

-(BOOL) updateStoreDS:(nonnull OTMLDatasource*)aNewDS
              forDSID:(nonnull NSString*)aDSID
   preferredContextID:(nullable NSString*) aCtxID;

-(BOOL) updateStoreDS:(nonnull OTMLDatasource*)aNewDS
              forDSID:(nonnull NSString*)aDSID
  pushIfDoesNotExists:(BOOL) shouldPush
   preferredContextID:(nullable NSString*) aCtxID;


-(BOOL)isAnimationLocked;

-(nullable OTMLMapStackEntry*) unstackedEntryForKey:(nonnull NSString*) key;


-(BOOL) didOTMLEntryBeenPushedOnContext:(nonnull NSString*)aContext;

@end
