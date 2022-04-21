//
//  OTMPKeychainWrapper.h
//  OTMLMTokenAddon
//
//  Created by Valerio Ferrantelli on 18/06/15.
//  Copyright (c) 2015 Opentech. All rights reserved.
//

#import "OTMLDumpableModuleProtocol.h"

typedef enum {
    OTMLInvalidateModeBridge_none = 0,
    OTMLInvalidateModeBridge_passcode_reset = 1,
    OTMLInvalidateModeBridge_passcode_reset_or_fingerset_changed = 2,
    OTMLInvalidateModeBridge_fingerset_changed = 3
} OTMLInvalidateModeBridge;

typedef enum {
    OTMLAuthenticationModeBridge_none = 0,
    OTMLAuthenticationModeBridge_biometric = 1,
    OTMLAuthenticationModeBridge_passcode = 2,
    OTMLAuthenticationModeBridge_passcode_or_biometric = 3
} OTMLAuthenticationModeBridge;


@interface OTMPKeychainWrapper : NSObject <OTMLDumpableModuleProtocol>

@property (nonatomic, strong) NSString* keychainAccessGroup;
@property (nonatomic, strong) NSString* service;
@property (nonatomic, strong) NSString* account;
@property (nonatomic, assign) OTMLInvalidateModeBridge keychainInvalidateMode;
@property (nonatomic, assign) OTMLAuthenticationModeBridge keychainAuthMode;
@property (nonatomic, strong) NSString* touchIDReasonDescription;

@property (nonatomic, assign) BOOL legacyServiceAndAccountNamesMode;

+(void)setQueryTranslationCallback:(OTMLCallback)queryTranslationCallback;


+(NSArray*)listAllValuesInKeychain;

-(NSData*)readWithKey:(NSString*)aKey returnStatus:(OSStatus*)aStatus;
-(BOOL)store:(NSData*)aDataToProtect withKey:(NSString*)aKey returnStatus:(OSStatus*)aStatus;
-(BOOL)deleteWithKey:(NSString*)aKey returnStatus:(OSStatus*)aStatus;

-(NSString*)readStringWithKey:(NSString*)aKey returnStatus:(OSStatus*)aStatus;
-(BOOL)storeString:(NSString*)aDataToProtect withKey:(NSString*)aKey returnStatus:(OSStatus*)aStatus;


/**
 elimina tutte le key relative a service
 */
-(BOOL)cleanallKeysWithReturnStatus:(OSStatus*)aStatus;
-(BOOL)existKey:(NSString*)aKey returnStatus:(OSStatus*)aStatus;

+(void)resetKeychain;
+(BOOL)changeDataProtectionToEntriesWithQuery:(NSDictionary*)query usingProtection:(NSString*)aDataProtection;


@end

