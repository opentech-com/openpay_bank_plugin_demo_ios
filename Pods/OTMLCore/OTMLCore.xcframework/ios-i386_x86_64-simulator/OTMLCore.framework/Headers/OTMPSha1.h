//
//  MPSha1.h
//  USLA
//
//  Created by enrico on 16/03/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

@interface OTMPSha1 : NSObject

+(NSData *) sha1ByteDigestForData:(NSData*) aData;
+(NSString*) sha1Hex8ByteStringDigestForData:(NSData*) aData;
+(NSString*) sha1Hex20ByteStringDigestForData:(NSData*) aData;
+(NSData *) sha1first:(NSUInteger)lenght bytesDigestForData:(NSData*) aData;
@end
