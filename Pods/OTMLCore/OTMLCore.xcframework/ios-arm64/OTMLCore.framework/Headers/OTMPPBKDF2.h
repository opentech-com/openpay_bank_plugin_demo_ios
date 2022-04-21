
//
//  OTMPPBKDF2.h
//  OMV
//
//  Created by epavoni on 03/04/14.
//  Copyright (c) 2014 Opentech. All rights reserved.
//

@interface OTMPPBKDF2 : NSObject
/**
 @discussion
 Performs PBKDF2-SHA256
 @param aPasswordData 
 the password as NSData
 @param aSalt 
 the salt as NSData
 @param aSize 
 the expected size.
 @param aRoundCount 
 the PBKDF2 round count
 @note passwordData is transformed in NSString as hexadecimalStringOfData
 @note size cannot exceed 4096
 @note round shall be between 1 and 100000000 (excluded)
 @note both password and salt shall be not null and not empty
 @return the PBKDF2-SHA256
 */
+(nullable NSData*)pbkdf2OfPasswordDataCastingToHexadecimal:(nonnull NSData*)aPasswordData
                                                   withSalt:(nonnull NSData*)aSalt
                                              expectingSize:(unsigned int)aSize
                                            performingRound:(unsigned int)aRoundCount;

+(nullable NSData*)pbkdf2OfPasswordData:(nonnull NSData*)aPassword
                               withSalt:(nonnull NSData*)aSalt
                          expectingSize:(unsigned int)aSize
                        performingRound:(unsigned int)aRoundCount;
/**
 @discussion
 Performs PBKDF2-SHA256
 @param aPassword 
 the password as NSString
 @param aSalt 
 the salt as NSData
 @param aSize 
 the expected size.
 @param aRoundCount 
 the PBKDF2 round count
 @note 
 size cannot exceed 4096
 @note 
 round shall be between 1 and 100000000 (excluded)
 @note 
 both password and salt shall be not null and not empty
 @return 
 the PBKDF2-SHA256
 */
+(nullable NSData*)pbkdf2OfPassword:(nonnull NSString*)aPassword
                           withSalt:(nonnull NSData*)aSalt
                      expectingSize:(unsigned int)aSize
                    performingRound:(unsigned int)aRoundCount;

@end
