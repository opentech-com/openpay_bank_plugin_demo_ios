//
//  ShowSensitiveViewProtocol.h
//  OTML
//
//  Created by Alessandro Ruggeri on 30/08/11.
//  Copyright 2011 Opentech ENG. All rights reserved.
//

@protocol OTMPShowHideViewProtocol <NSObject>

@optional
-(void)atHideView:(UIView*) aView;

@optional
-(void)atShowView:(UIView*) aView;

@end
