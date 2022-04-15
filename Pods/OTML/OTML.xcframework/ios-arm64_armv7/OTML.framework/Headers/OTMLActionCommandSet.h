//
//  ActionCommands.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 25/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLActionCommand.h"
#import "OTMLCustomActionResolver.h"

@interface OTMLActionCommandSet : NSObject<OTMLCustomActionResolver>

-(id) init;
-(id) initForSubClasses;
-(NSDictionary*) actionCommands;
-(OTMLActionCommand*)nonSingletonActionWithType:(NSString *)aType;

@end
