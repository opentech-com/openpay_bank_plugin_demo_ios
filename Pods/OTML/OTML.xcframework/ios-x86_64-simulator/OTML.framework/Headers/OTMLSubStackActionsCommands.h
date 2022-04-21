//
//  OTMLSubStackActions.h
//  OTMLFramework
//
//  Created by Enrico on 05/05/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLActionCommandSet.h"
#import "OTMLExternalEventModel.h"

@interface RemoveExternalEventBean : NSObject

-(nonnull instancetype) initWithTarget:(nullable NSString*)aTarget type:(nullable NSString*)aType;
-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use initWithTarget:type: instead")));

@property (nonatomic, readonly) BOOL removeByID;
@property (nonatomic, readonly) BOOL removeByType;
@property (nonatomic, readonly) BOOL removeAll;
@property (nonatomic, readonly) NSString* __nonnull idToRemove;
@property (nonatomic, readonly) OTMLExternalEventType typeToRemove;

@end

@interface RemoveExternalEventCommand : OTMLActionCommand
@end

//@interface RemoveSubStackDSCommand : OTMLActionCommand
//@end

@interface OTMLSubStackActionsCommands: OTMLActionCommandSet
@end
