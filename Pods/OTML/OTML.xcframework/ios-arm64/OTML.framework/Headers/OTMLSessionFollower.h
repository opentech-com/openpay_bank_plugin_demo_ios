//
//  OTMLSessionFollower.h
//  OTMLFramework
//
//  Created by epavoni on 07/11/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "OTMLAction.h"
#import "OTMLRestartAppAwareProtocol.h"

@interface OTMLSessionFollower : NSObject <OTMLRestartAppAwareProtocol>

@property(nonatomic, assign) NSTimeInterval interactionInterval;
@property(nonatomic, assign) NSTimeInterval backgroundInterval;

-(BOOL) isInactive;

+(instancetype) getInstance;

-(void) markUIInteraction;

-(void) appInForeground;
-(void) appInBackground;

-(void) startTrack;
-(void) stopTrack;

@end
