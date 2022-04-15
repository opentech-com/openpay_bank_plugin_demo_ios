//
//  OTMLExternalEventAstractProcessor.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 26/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLExternalEventModel.h"

@interface OTMLExternalEventAbstractProcessor : NSObject

-(BOOL)processExternalEvent:(OTMLExternalEventModel*)anEvent;
-(void)preProcessExternalEvent:(OTMLExternalEventModel*)anEvent;

//for customExternalEventModel
-(OTMLExternalEventModel*) prepareExternalEventModelForEventWithPayload:(NSObject*) aPayload withApplication:(UIApplication *)aApplication;
-(OTMLConcreteEventModel*) prepareConcreteEventModelForEventWithPayload:(NSObject*) aPayload withApplication:(UIApplication *)aApplication andExternalEventModel:(OTMLExternalEventModel*) aEventModel;

@end
