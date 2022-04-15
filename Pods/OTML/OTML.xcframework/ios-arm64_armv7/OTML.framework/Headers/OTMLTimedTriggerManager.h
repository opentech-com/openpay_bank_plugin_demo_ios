//
//  OTMLTimedTriggerManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLTimedTriggerModel.h"
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>


@interface OTMLTimedTriggerManager : NSObject <OTMLRestartAppAwareProtocol>

-(OTMLTimedTriggerModel*)removeTimedTriggerWithFullID:(NSString*)aTimedTriggerFullID;
-(void)scheduleTimedTriggerWithModel:(OTMLTimedTriggerModel*)aTimedTrigger;
-(OTMLTimedTriggerModel*)postponeTimedTriggerWithFullID:(NSString*)aTimedTriggerFullID forSeconds:(double)secondsToPostpone;

-(OTMLTimedTriggerModel*)timedTriggerWithFullID:(NSString*)aTimedTriggerFullID;

-(void)pauseActiveTimedTriggers;
-(void)playActiveTimedTriggers;
-(void)processExpiredTimedTriggers;

-(void)loadSavedTimedTrigger;

+(OTMLTimedTriggerManager*)getInstance;

@end
