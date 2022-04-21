//
//  OTMLLongPressTimersModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 24/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

@protocol OTMLLongPressDelegate <NSObject>

-(void)longPressEventDidTick:(int)tickCount;
-(void)longPressEventDidDetected;

@end

@interface OTMLLongPressManager : NSObject

-(void)start;
-(void)stop;
-(instancetype)initWithTimerDescription:(NSString*)timerDescrition;
-(void)addDelegate:(NSObject<OTMLLongPressDelegate>*)aDelegate;

@end
