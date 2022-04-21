//
//  OTMLUbiquitousKeyValueStoreBridge.h
//  OTML
//
//  Created by Silvio D'Angelo on 16/04/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMLUbiquitousKeyValueStoreBridge : NSObject

+(instancetype) sharedInstance;

/**
 This method is supposed to be called as soon as possible during youe application's lifecycle
 */
-(void) synchronyze;

-(void) backupValuePutKey:(NSString*) key withWalue:(NSString*) value;

-(void) backupValueDeleteValue:(NSString*) value withKey:(NSString*) key;
-(void) backupValueDeleteKey:(NSString*) key;

-(void) backupValueDeleteAllKeys;

-(NSString*) readJsonArraySerializedBackupValuesWithKey:(NSString*) key;


@end

NS_ASSUME_NONNULL_END
