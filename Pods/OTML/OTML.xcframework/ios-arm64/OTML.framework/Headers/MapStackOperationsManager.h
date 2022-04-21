//
//  MapStackOperationsManager.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 23/12/15.
//  Copyright © 2015 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTMLContextContainerViewController.h"
#import "MapStack.h"

@interface MapStackOperationsManager : NSObject

+(OTMLMapStackEntry*)performStackDirectivities:(NSString*) aStackDirectivities
                                    onMapStack:(MapStack*) aMapStack
                        withResponseDatasource:(NSDictionary*)aRespDatasource
                                 withPutTarget:(NSString*) aTarget
                                   withNavMark:(BOOL)isForPost
                          withOTMLPiggibackMap:(OTMLMapStackEntry*) aPiggibackEntry
                                 withContextID:(NSString*)aContextID
                             skipBackAnimation:(BOOL)shouldSkipBackAnimation
                            withUIStackHandler:(OTMLContextContainerViewController*) aContextsController;

+(void) performPopOperationwithContextID:(NSString*) aContextID
                              onMapStack:(MapStack*) targetStack
                      withUIStackHandler:(OTMLContextContainerViewController*) aContextsController;

@end
