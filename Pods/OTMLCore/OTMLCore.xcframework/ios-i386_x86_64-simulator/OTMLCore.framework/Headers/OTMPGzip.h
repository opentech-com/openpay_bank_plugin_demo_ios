//
//  OTMPGzip.h
//  OTMLFramework
//
//  Created by epavoni on 14/07/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//


@interface OTMPGzip : NSObject

/**
 @discussion 
 Inflate (gunzip) libz wrapper
 @param data
 data to inflate
 @return 
 original data
 **/
+ (NSData *)gzipInflate:(NSData*) data;

/**
 @discussion 
 Deflate (gzip) libz wrapper
 @param original
 data to deflate
 @return 
 compressed data
 **/
+ (NSData *)gzipDeflate:(NSData*) original;

@end
