//
//  OTMLDelegate.h
//  OTMLFramework
//
//  Created by Enrico Pavoni on 23/02/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLParameterEntry.h"
#import "OTMLViewController.h"

@interface OTMLTriggerDelegate : NSObject

- (nullable instancetype)initWithParameters:(nonnull NSArray<OTMLParameterEntry*>*) resolvedParameters
              inOtmlViewController:(nullable OTMLViewController*)aOTVC
      delegateComponentParameterID:(nonnull NSString*) aDelegateComponentParameterID
        delegateContextParameterID:(nonnull NSString*) aDelegateContextParameterID;

- (nullable instancetype)initWithDictionary:(nonnull NSDictionary<NSString*, NSString*>*) parameters
              inOtmlViewController:(nullable OTMLViewController*)aOTVC
      delegateComponentParameterID:(nonnull NSString*) aDelegateComponentParameterID
        delegateContextParameterID:(nonnull NSString*) aDelegateContextParameterID;

-(void)triggerDelegate:(nonnull NSString*)event;

@end
