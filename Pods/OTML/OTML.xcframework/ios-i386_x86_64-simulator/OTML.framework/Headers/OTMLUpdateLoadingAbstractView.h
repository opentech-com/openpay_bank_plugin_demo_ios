//
//  OTMLUpdateLoadingAbstractView.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 09/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

@protocol OTMLUpdateLoadingAbstractView

typedef enum {
    OTMLUpdateProgressState_checking_updates_start = 0,
    OTMLUpdateProgressState_updating,
    OTMLUpdateProgressState_updating_done
} OTMLUpdateProgressState;


-(void)setupOTMLProgressView:(NSObject*)genericParams;
-(void)setOTMLUpdateProgressState:(OTMLUpdateProgressState)theState;
-(void)setOTMLUpdateProgressPercent:(float)newProgress;

@end
