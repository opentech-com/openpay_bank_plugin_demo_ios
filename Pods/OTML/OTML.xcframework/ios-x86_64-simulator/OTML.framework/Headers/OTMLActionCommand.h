//
//  OTMLActionCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 25/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLResolvedAction.h"
#import "OTMLViewController.h"
#import "OTMLComponent.h"

@interface OTMLActionCommand : NSObject{
    NSDictionary* paramethers;
}

/**
 *   the Command will be executed. DEfault implementation is a no-op.
 */
-(void) executeResolvedAction:(OTMLResolvedAction*) aAction
             onViewController:(OTMLViewController*) aNestingVC;

@end
