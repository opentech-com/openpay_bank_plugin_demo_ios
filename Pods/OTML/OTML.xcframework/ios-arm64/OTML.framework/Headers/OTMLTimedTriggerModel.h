//
//  OTMLTimedTriggerModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLDatasource.h"

@interface OTMLTimedTriggerModel : NSObject <NSCoding>

@property (nonatomic, strong) NSDate * creationDate;
@property (nonatomic, assign) double delay;
@property (nonatomic, strong) NSString * timed_trigger_unique_id;
@property (nonatomic, strong) NSString * timed_trigger_type;
@property (nonatomic, strong) NSTimer * associatedTimer;
@property (nonatomic, strong) NSMutableDictionary * timed_triggers_params;


+(OTMLTimedTriggerModel*)loadTimedTriggerWithFullPath:(NSString*)aFullPath;
-(BOOL)saveTimedTrigger;
-(BOOL)deleteTimedTrigger;


-(NSString*)getFullID;

-(NSArray<OTMLDatasource*>*)getDatasourceRapresentation;


//timer management
-(BOOL)isStillAlive;
-(double)getRemainingDelayRespectNow;

-(void)stopTimer;
-(void)startTimerWithDelegate:(NSObject*)aDelegate andSelector:(SEL)delegateSelector;
-(void)postponeTimerBy:(double)secondsToPostpone forDelegate:(NSObject*)aDelegate withSelctor:(SEL)aSelector;

-(void)dispose;

@end
