//
//  OTMPNetworkHmacSigningConfiguration.h
//  OTML
//
//  Created by Cristiano Calicchia on 24/05/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMPNetworkHmacSigningConfiguration : NSObject

@property NSString* hmac_key_base_base64;
@property NSString* hmac_key_salt_a_base64;
@property NSString* hmac_key_salt_b_base64;

@property (nonatomic, copy, nullable) NSData* (^hmacStoredKeyHandler)(void);

+ (OTMPNetworkHmacSigningConfiguration*)getInstance;

@end

NS_ASSUME_NONNULL_END
