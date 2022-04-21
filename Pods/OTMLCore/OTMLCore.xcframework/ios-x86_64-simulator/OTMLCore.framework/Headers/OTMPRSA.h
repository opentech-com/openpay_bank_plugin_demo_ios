//
//  MPRSA.h
//  USLA
//
//  Created by enrico on 03/04/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

@interface OTMPRSA : NSObject

#pragma mark - Public key RSA

- (id)initWithSecKeyRefPublicKey:(SecKeyRef) aPublicKey;
- (id)initWithPublicKey:(NSData*) aDerPublicKey;
- (NSData *) encryptWithData:(NSData *)content;
- (NSData *) encryptWithData:(NSData *)content withPadding:(SecPadding)aPadding;

/**
 Check an RSA Sign using public certificate.
 @note it will use kSecPaddingPKCS1SHA1, use padding variant to specify a different padding/hashing
 @param content plain content to ckeck
 @param aSign the sign to check
 @see - (BOOL) check:(NSData *)content withSign:(NSData*) aSign padding:(SecPadding)aSecPadding;
 **/
- (BOOL) check:(NSData *)content withSign:(NSData*) aSign;

/**
 Check an RSA Sign using public certificate.
 @param content plain content to ckeck
 @param aSign the sign to check
 @param aSecPadding padding/hashing ONLY kSecPaddingPKCS1SHA1 or kSecPaddingPKCS1SHA256 are currently supported!
 @warning ONLY kSecPaddingPKCS1SHA1 or kSecPaddingPKCS1SHA256 padding/hashing are currently supported!
 **/
- (BOOL) check:(NSData *)content withSign:(NSData*) aSign withPadding:(SecPadding)aSecPadding;


#pragma mark - Private key RSA

- (id)initWithSecKeyRefPrivateKey:(SecKeyRef) aPrivateKey;
- (id)initWithPrivateKey:(NSData*) aP12DataPrivateKey withPassword:(NSString*)aPassword;
- (NSData *) decryptWithData:(NSData *)content;
- (NSData *) decryptWithData:(NSData *)content withPadding:(SecPadding)aPadding;
/**
 Sign with RSA using private certificate.
 @note it will use kSecPaddingPKCS1SHA1, use padding variant to specify a different padding/hashing
 @param content plain content to sign
 @see - (NSData*) sign:(NSData *)content withPadding:(SecPadding)aSecPadding;
 **/
- (NSData*) sign:(NSData *)content;

/**
 Sign with RSA using private certificate.
 @note it will use kSecPaddingPKCS1SHA1, use padding variant to specify a different padding/hashing
 @param content plain content to sign
 @param aSecPadding padding/hashing ONLY kSecPaddingPKCS1SHA1 or kSecPaddingPKCS1SHA256 are currently supported!
 @warning ONLY kSecPaddingPKCS1SHA1 or kSecPaddingPKCS1SHA256 padding/hashing are currently supported!
 **/
- (NSData*) sign:(NSData *)content withPadding:(SecPadding)aSecPadding;


#pragma mark keychain keypair management
-(BOOL)readKeyPairWithID:(NSString*)aKeyPairID;
-(BOOL)deleteKeyPairWithID:(NSString*)aKeyPairID;
-(BOOL)generateKeyPairWithID:(NSString*)aKeyPairID size:(int)sizeInBits;



#pragma mark - RSA Utils
-(NSData*)publicKeyToDER;


@end
