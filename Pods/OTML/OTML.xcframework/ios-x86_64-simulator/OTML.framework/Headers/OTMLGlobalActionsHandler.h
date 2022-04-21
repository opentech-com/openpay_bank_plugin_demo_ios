//
//  OTMLGlobalActionsHandler.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 22/01/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLViewController.h"
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@interface OTMLGlobalActionsHandler : NSObject <OTMLRestartAppAwareProtocol>

+(OTMLGlobalActionsHandler*) sharedHandler;
+(void) configureWithGlobaActions:(NSMutableArray*) aMutArrOfActionsWithGlobalTriggers;
+(void) configureWithGlobaActionsModels:(NSArray*) actionModels;
-(BOOL) performActionWithTrigger:(NSString*)aTrigger;

@property NSMutableDictionary<NSString*,NSString*>* hashmap;

@end
