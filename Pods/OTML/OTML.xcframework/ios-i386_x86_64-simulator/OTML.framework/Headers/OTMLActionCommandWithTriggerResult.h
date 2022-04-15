//
//  OTMLActionCommandWithTriggerResult.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/09/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLActionCommand.h"


@interface OTMLActionCommandWithTriggerResult : OTMLActionCommand

@property (nonatomic, strong) OTMLViewController * viewController;
@property (nonatomic, strong) NSString * delegateContext;
@property (nonatomic, strong) NSString * delegateComponent;

-(void)triggerEvent:(NSString*)aEvent;

@end
