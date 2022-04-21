//
//  OTMLSubStack.h
//  OTMLFramework
//
//  Created by Enrico on 28/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@class OTMLDatasource;
@class OTMLExternalEventModel;
@class RemoveExternalEventBean;

@interface OTMLSubStack : NSObject

+ (nonnull instancetype)sharedInstance;

-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use sharedInstance instead")));

#pragma mark - ds retrival
/**
 Retutns a substack ds
 @param aID the id of the ds to find
 */
-(nullable OTMLDatasource*) getDatasourceWithID:(nullable NSString*) aID;
-(nullable OTMLDatasource*) getDatasourceWithExternalEventIdentifier:(nullable NSString*) aID;

/** If You need to make public other method to insert or remove, ensure to expose method that is eventually forwarded in main thread **/

#pragma mark - public event handling methods
/**
 Put an event to the substack. This make the substack observe the event up to it is processed = true
 @param event the event
 */
-(void)putEvent:(nonnull OTMLExternalEventModel*) event;

/**
 Remove events from substack and make the substack stop observing them
 @param removeralBean Re removalConfiguration
 */
-(void)removeEventMatchingWith:(nonnull RemoveExternalEventBean*)removeralBean;

#pragma mark - public genericDS handling methods

/**
 Put a genericDS to the substack.
 @param genericDS the DS to put.
 @note the DS key must be the DS name
 */
-(void)putGenericDS:(nonnull OTMLDatasource*) genericDS;

/**
 Remove generic DS from substack
 @param aID an event id to remove. If nil all suitable genericDS are target of the removal
 
 @note: if aID is specified, only this one is removed. If aID is nil substack removes all the generic DS
 @note: empty "" is NOT nil, and it will not produce a removerall
 */
-(void)removeGenericDSMatchingWithDsIdOrNil:(nullable NSString*)aID;

-(nonnull NSDictionary*) toDictionaryDescription;

@end
