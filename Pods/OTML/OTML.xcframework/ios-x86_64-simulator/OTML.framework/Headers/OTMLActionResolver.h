//
//  OTMLActionResolver.h
//  OTMLFramework
//
//  Created by Opentech on 09/01/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

@class OTMLAction;
@class OTMLViewController;
@class OTMLParameter;
@class OTMLParameterEntry;
@class OTMLResolvedAction;

@interface OTMLResolvedActionDirectivity : NSObject

@property (strong, nonatomic, readonly) OTMLResolvedAction* resolvedAction;
@property (nonatomic, readonly) BOOL actionExecutesOnRestart;
@property (nonatomic, readonly) BOOL actionTriggeredValidationException;
@property (strong, nonatomic, readonly) OTMLViewController* targetController;

+(OTMLResolvedActionDirectivity*)noAction;
+(OTMLResolvedActionDirectivity*)skipForValidationExcepion;
+(OTMLResolvedActionDirectivity*)skipForOnRestart;

- (id)initWithResolvedAction:(OTMLResolvedAction*) aResolvedAction actionTriggeredValidationException:(BOOL)actionTriggeredValidationException actionExecutesOnRestart:(BOOL) actionExecutesOnRestart targetController:(OTMLViewController*) aTargetController;

@end


@interface OTMLActionResolver : NSObject

+(void) setupCustomActionResolvers:(NSArray*) aOTMLCustomActionResolverArray;
+(OTMLActionResolver*) getInstance;
-(BOOL) performAction:(OTMLAction*) aAction withOTMLVC:(OTMLViewController*) aOTMLvc;

-(OTMLResolvedActionDirectivity*)resolveAction:(OTMLAction*)aAction onOtmlViewController:(OTMLViewController*)origOTMLVC;
-(BOOL)executeResolvedAction:(OTMLResolvedAction*)the_action onOtmlViewController:(OTMLViewController*)aOTMLvc;

-(BOOL)postHandle:(OTMLAction*)aAction;

-(BOOL)canResolveParameter:(OTMLParameter*)aParameter;
-(OTMLParameterEntry*)resolveParameter:(OTMLParameter*)aParameter;

@end
