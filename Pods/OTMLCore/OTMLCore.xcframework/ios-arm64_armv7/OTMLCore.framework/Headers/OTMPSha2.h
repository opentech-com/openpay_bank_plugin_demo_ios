//
//  OTMPSha2.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//


@interface OTMPSha2 : NSObject

+(NSData *) sha256ByteDigestForData:(NSData*) aData;
+(NSString *) sha256HexByteDigestForData:(NSData*) aData;

@end
