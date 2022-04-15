//
//  RestartAppAwareProtocol.h
//  OTMLFramework
//
//  Created by epavoni on 03/03/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//


@protocol OTMLRestartAppAwareProtocol <NSObject>

@optional
-(void)willRestart;
-(void)doRestart;
-(void)onOTMLUpdate;

@end
