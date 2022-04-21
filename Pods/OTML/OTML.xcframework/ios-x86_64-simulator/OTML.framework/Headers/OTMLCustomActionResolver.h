//
//  OTMLCustomActionResolver.h
//  OTMLFramework
//
//  Created by Opentech on 09/01/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLActionCommand.h"
#import "OTMLResolvedAction.h"
#import "OTMLParamModeAbstractStrategy.h"

@protocol OTMLCustomActionResolver <NSObject>

/**
 *  This is the only required method to override if you plan to implement custom actions on the applciation that is using OTMLFramework.
 *      You have to return nil for unknown kind of actions.
 *      You can override a common action kind 
 */
-(OTMLActionCommand*) actionCommandFromResolvedAction:(OTMLResolvedAction*) aResolvedAction;



/**
    those methods are the hook to redefine completely the paramethers resolution. This will not substitute paramMode logic wich is integrated 
 */
@optional
-(BOOL)canResolveParameter:(OTMLParameter*)aParameter;
-(OTMLParameterEntry*)resolveParameter:(OTMLParameter*)aParameter;

/**
 *  This method is required for apps that whant to handle custom param modes (the "cmode" attribute value is the key in this dictionary).
 *  Given a key of NSString type, you should return an object conforms to id<OTMLParamModeStrategy>
 *  The method is called once and the dictionary entries are retained by the framework.
 */
-(NSDictionary<NSString*,OTMLParamModeStrategy*>*) newHandledStrategiesByCustomParamMode;

@end
