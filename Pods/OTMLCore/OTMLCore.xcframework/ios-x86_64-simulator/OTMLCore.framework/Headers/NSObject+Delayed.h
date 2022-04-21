//
//  NSObject+Delayed.h
//  OTMLFramework
//
//  Created by epavoni on 27/02/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

@interface NSObject (Delayed)


typedef NSObject*(^OTMLCallbackWithSelfRef)(NSObject* me, NSObject* param);
typedef NSObject*(^OTMLCallback)(NSObject*param, NSError*error);
typedef void(^OTMLSimpleCallback)(NSObject*param, NSError*error);
typedef void(^OTMLVerySimpleCallback)(void);


- (void)performBlock:(void (^)(void))block afterDelay:(NSTimeInterval)delay;
- (void)performSyncBlockOnMainThread:(void (^)(void))block;
- (void)performAsyncBlockOnMainThread:(void (^)(void))block;
- (void)performAsyncBlockOnMainThread:(void (^)(void))block afterDelay:(NSTimeInterval)delay;

- (void)performEnqueuedSyncBlockOnMainThread:(void (^)(void))block;
- (void)performEnqueuedAsyncBlockOnMainThread:(void (^)(void))block afterDelay:(NSTimeInterval)delay;

@end
