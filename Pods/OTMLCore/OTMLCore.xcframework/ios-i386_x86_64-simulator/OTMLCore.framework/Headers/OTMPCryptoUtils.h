//
//  OTMPCryptoUtils.h
//  OMV
//
//  Created by epavoni on 08/04/14.
//  Copyright (c) 2014 Opentech. All rights reserved.
//


@interface OTMPCryptoUtils : NSObject

/**
 Generate random byte array and return as NSData.
 @param sizeInByte expected size in Byte
 @warning Throws Security Exception if unable to generate a valid byte array
 **/
+(NSData*)getRandom:(unsigned int)sizeInByte;

+(unsigned int)getRandomUnsignedInt;

/**
 Perform a Xor of a pair of NSData and returns the result or nil if an error occurred
 @warning input data must not be nil and must have the same lenght
 **/
+(NSData*)xorData:(NSData*)aData withData:(NSData*)anotherData;

/** Returns hexadecimal string of NSData.
 @note Empty string if data is empty.
 **/
+ (NSString *)hexadecimalStringOfData:(NSData*)aData;

/** Returns NSData from hexadecimal string.
 @note nil if string empty, nil or not hex.
 **/
+(NSData*)dataFromHexadecimalString:(NSString*)aString;

@end
