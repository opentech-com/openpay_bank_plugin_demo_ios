//
//  OTMPSessionActionFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 16/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import <OTMLCore/OTMLRestartAppAwareProtocol.h>
#import "OTMLHTTPTask.h"

@interface OTMPNetworkSessionFactory : NSObject <NSURLSessionDelegate, OTMLRestartAppAwareProtocol, NSURLSessionDataDelegate>

+(instancetype) getInstance;

+(NSURLSession*)generateFireAndForgetBackgroundSession;

-(NSURLSession*)getOTMLSession;
-(NSURLSession*)getUpdaterSession;
-(NSURLSession*)getDownloaderSession;
-(NSURLSession*)getTraceSession;
-(NSURLSession *)getRestSession;

-(void)resetCookiesForSession:(NSURLSession*)aSession includingPersistentCookies:(BOOL)includePersistent;
-(void)abortAllTasksInSession:(NSURLSession*)session;
-(void)addTask:(NSURLSessionTask *)aTask forNetworkTask:(OTMLHTTPTask*)networkTask;

@end
