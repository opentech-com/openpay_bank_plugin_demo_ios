//
//  MPCache.h
//  OTML
//
//  Created by epavoni on 18/07/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

@protocol OTMPCache <NSObject>

-(id) objectForKey:(id) aKey;
-(BOOL) setObject:(id) anObject forKey:(id) aKey;
-(void) drain;

@end
