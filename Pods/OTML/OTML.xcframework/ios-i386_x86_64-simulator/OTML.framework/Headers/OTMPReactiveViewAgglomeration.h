//
//  OTMPReactiveViewAgglomeration.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 04/02/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//


@protocol OTMPReactiveViewAgglomeration
@required
-(void) didReceiveTap;

@optional
-(void) didReceiveTouchDown;
-(void) didReceiveTouchCancel;
-(void) didReceiveDragEnter;
-(void) didReceiveDragExit;
@end
