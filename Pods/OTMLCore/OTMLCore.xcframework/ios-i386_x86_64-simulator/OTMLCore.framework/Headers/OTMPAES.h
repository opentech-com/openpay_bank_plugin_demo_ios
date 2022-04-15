//
//  OTMPAES512.h
//  OMV
//
//  Created by epavoni on 03/04/14.
//  Copyright (c) 2014 Opentech. All rights reserved.
//

@interface OTMPAES : NSObject

+(NSData*)aesEncryptData:(NSData*)aData WithBytesKey:(NSData*)aKey withBytesIV:(NSData*)aIV;
+(NSData*)aesDecryptData:(NSData*)aData WithBytesKey:(NSData*)aKey withBytesIV:(NSData*)aIV;

@end
