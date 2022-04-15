//
//  MPShowSensitiveView.h
//  OTML
//
//  Created by Alessandro Ruggeri on 30/08/11.
//  Copyright 2011 Opentech ENG. All rights reserved.
//

#import "OTMPShowHideViewProtocol.h"

@interface OTMPShowHideView : UIView

@property (nonatomic, weak) NSObject<OTMPShowHideViewProtocol>* showDelegate;

@end
