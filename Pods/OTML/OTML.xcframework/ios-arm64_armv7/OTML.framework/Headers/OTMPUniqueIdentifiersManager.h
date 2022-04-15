//
//  OTMPUniqueIdentifiersManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 18/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


@interface OTMPUniqueIdentifiersManager : NSObject


+(NSString*) getIdentifierForVendor;
+(NSString*) generateUUID;

+(NSString*) generateFilePersistentUUID;

+(NSString*) generateKeychainPersistentCryptoHashedVariantSaltedIDFVWithLegacyFileAccess;
+(NSString*) generateKeychainPersistentCryptoHashedVariantSaltedIDFV;


+(NSString*) generateOtmlIDLevel0;
+(NSString*) generateOtmlIDLevel1;
+(NSString*) generateOtmlIDLevel2;
+(NSString*) generateOtmlIDLevel3;

+(void) setUserIdForOtmlIDLevel2:(NSString*)aUserId;
+(void) resetUserIdForOtmlIDLevel2;

+(NSString *)cryptoHashString:(NSString *)stringToHash
                     withSalt:(NSString*)aSalt;

@end
