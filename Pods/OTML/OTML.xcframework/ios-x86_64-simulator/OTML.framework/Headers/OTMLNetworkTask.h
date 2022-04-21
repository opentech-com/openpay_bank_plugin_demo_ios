//
//  OTMLNetworkTask.h
//  OTML
//
//  Created by Valerio Ferrantelli on 10/05/2019.
//

#import <Foundation/Foundation.h>
#import "OTMLHTTPTask.h"
#import "OTMLNetworkResponse.h"
#import "OTMPNetworkTaskErrorFactory.h"


@interface OTMLNetworkTask : OTMLHTTPTask

@property (nonatomic, retain) NSString* cacheTag;
@property (assign, nonatomic) int requestID;
@property (assign, nonatomic) BOOL isAPrefetchNetworkInteraction;
@property (assign, nonatomic) BOOL isStackStackManagementDisabled;
@property (nonatomic, retain) NSString* originalContextID;
@property (nonatomic, assign) BOOL showWaitView;
@property (nonatomic, retain) NSDictionary* actionParams;

+(long long) getServerTimestampOffset;

+(void) updateServerTimestampOffsetWith:(OTHTTPResponse*)response;

@end

