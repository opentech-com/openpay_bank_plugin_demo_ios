//
//  OTMPCryptedConfigFilePayloadReader.h
//  Pods
//
//  Created by Silvio D'Angelo on 08/07/2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMPCryptedConfigFilePayload : NSObject

@property (strong) NSString* fileContentHashing;
@property (strong) NSDictionary* otmlPayload;

@end


@interface OTMPCryptedConfigFilePayloadReader : NSObject

-(instancetype) initWithConfigurationErrorDomain:(NSString*) aErrorDOmain;

-(nullable OTMPCryptedConfigFilePayload*) configurationFromCyptedFileAtPath:(NSString*) filePath
                                                           withB64PublicKey:(NSString*) b64PublicKey
                                                                  withB64IV:(NSString*) b64IV
                                                                 withB64Key:(NSString*) b64key
                                                                  withError:(NSError**) anError;


@end

NS_ASSUME_NONNULL_END
