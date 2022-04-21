//
//  OTMLNetworkRelatedActionCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 25/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLActionCommand.h"
#import "OTMLActionCommandSet.h"



@interface OTMLRawPostRequestBean : NSObject

@property (nonatomic, readonly) NSString* target;
@property (nonatomic, readonly) NSString* cacheTag;
@property (nonatomic, readonly) BOOL shouldPrefetch;
@property (nonatomic, readonly) BOOL shouldSkipLoading;
@property (nonatomic, readonly) BOOL shouldSkipCache;
@property (nonatomic, readonly) BOOL shouldDisableStackManagement;
@property (nonatomic, readonly) NSData* body;
@property (nonatomic, readonly) NSDictionary* additionalHeaders;
@property (nonatomic, readonly) NSString* originalContextID;

-(instancetype)init __attribute__((unavailable("Init not available. Please use OTMLImage +otmlImageFromDescriprion: to build an OTMLImage")));

-(instancetype)initWithTarget:(NSString*)target
                     cacheTag:(NSString*) cacheTag
                     prefetch:(BOOL)shouldPrefetch
                  skipLoading:(BOOL)shouldSkipLoading
                    skipCache:(BOOL)shouldSkipCache
       disableStackManagement:(BOOL)shouldDisableStackManagement
                         body:(NSData*)body
            additionalHeaders:(NSDictionary*)additionalHeaders
          inOriginalContextID:(NSString*)originalContextID;

+(OTMLRawPostRequestBean *)rawPostBeanWithAction:(OTMLResolvedAction *)aAction;

+(OTMLRawPostRequestBean *)rawPostBeanWithTarget:(NSString*) target
                                  withParameters:(NSDictionary<NSString*,NSString*>*)parameters
                             withSourceComponent:(OTMLComponent*)sourceComponent;
@end
@interface OTMLNetworkRelatedActionCommand : OTMLActionCommandSet
@end
@interface OTMLPrefetchCommand : OTMLActionCommand
@end
@interface OTMLInvalidateSessionDSHashes : OTMLActionCommand
@end
@interface OTMLCacheCommand : OTMLActionCommand
@end
@interface OTMLAddWebviewCookieCommand : OTMLActionCommand
@end
@interface OTMLNavigationRelatedCommand : OTMLActionCommand
@end
@interface OTMLRawPostCommand : OTMLActionCommand
@end
@interface OTMLJavascriptCommand : OTMLActionCommand
@end
@interface OMTLIdLvL2SetUserIdCommand : OTMLActionCommand
@end
@interface OMTLIdLvL2ResetUserIdCommand : OTMLActionCommand
@end

