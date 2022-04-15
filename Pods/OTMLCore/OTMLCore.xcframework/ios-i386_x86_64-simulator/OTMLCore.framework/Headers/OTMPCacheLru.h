//
//  MPCacheLru.h
//  OTML
//
//  Created by epavoni on 18/07/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "OTMPCache.h"

@interface OTMPCacheLru : NSObject <OTMPCache>{
}

-(id) init;
-(id) initWithCacheSize:(NSUInteger) aDesiredSize;
-(void)removeObjectForKey:(id) aKey;
-(void)removeAllObjects;

@end
