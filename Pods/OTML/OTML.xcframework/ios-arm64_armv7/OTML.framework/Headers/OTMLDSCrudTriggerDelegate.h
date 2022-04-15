//
//  OTMLDelegateDSCrud.h
//  OTMLFramework
//
//  Created by Enrico Pavoni on 23/02/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLTriggerDelegate.h"

@interface OTMLDSCrudTriggerDelegate : OTMLTriggerDelegate

- (nullable instancetype)initWithParameters:(nonnull NSArray<OTMLParameterEntry*>*) resolvedParameters
                       inOtmlViewController:(nullable OTMLViewController*)aOTVC;

- (nullable instancetype)initWithDictionary:(nonnull NSDictionary*) parameters
                       inOtmlViewController:(nullable OTMLViewController*)aOTVC;

-(void)triggerOK;
-(void)triggerKo;

@end
