//
//  OTMLContextInstances.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 23/06/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLBridgeDelegate.h"
#import "PatternDirectorDatasouerce.h"
#import "OTMLMainViewController.h"

@class OTMPOrderedDictionary;


@interface OTMLMainViewControllerInstancesBasket : NSObject


/** adds a context meant to be used in mainStack.
 @param aContextVC the context to add in mainStack contexts
 */
-(void)addContextToMainStack:(nonnull OTMLMainViewController*)aContextVC withStackIdentifier:(nonnull NSString*)aMainStackID;

/** adds a context meant to be used in headStack.
 @param aContextVC the context to add in headStack contexts
 */
-(void)addContextToHeadStack:(nonnull OTMLMainViewController*)aContextVC withStackIdentifier:(nonnull NSString*)aHeadStackID;

/** adds a context meant to be used in tailStack.
 @param aContextVC the context to add in tailStack contexts
 */
-(void)addContextToTailStack:(nonnull OTMLMainViewController*)aContextVC withStackIdentifier:(nonnull NSString*)aTailStackID;

/**return all the contexts in Main Stack OR id a context in head/tail having the specified groupID. grupID @"main" fetch from main stack
 @return all the contexts in Main Stack. Can be empty if no context added yet
 */
-(nullable NSMutableArray<OTMLMainViewController*>*) contextsForGroup:(nullable NSString*)aGroupID;

/**return all the contexts in Main Stack
 @return all the contexts in Main Stack. Can be empty if no context added yet
 */
-(nonnull OTMPOrderedDictionary<NSString*, NSMutableArray<OTMLMainViewController*>*>*) contextsInMainStack;

/**return all the contexts in Main Stack
 @return all the contexts in Main Stack. Can be empty if no context added yet
 */
-(nonnull OTMPOrderedDictionary<NSString*, NSMutableArray<OTMLMainViewController*>*>*) contexsInTailStack;

/**return all the contexts in Main Stack
 @return all the contexts in Main Stack. Can be empty if no context added yet
 */
-(nonnull OTMPOrderedDictionary<NSString*, NSMutableArray<OTMLMainViewController*>*>*) contexsInHeadStack;


@end
