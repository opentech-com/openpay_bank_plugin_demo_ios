//
//  OTMLUpdaterConfiguration.h
//  OTML_iOS_Framework_pod
//
//  Created by Valerio Ferrantelli on 16/07/18.
//

@interface OTMLUpdaterConfiguration : NSObject


@property (nonatomic, strong) NSString * RSAPublicKey;
@property (nonatomic, strong) NSString * baseUrl;
@property (nonatomic, strong) NSString * AESFileEncryptionKey;
@property (nonatomic, strong) NSString * AESFileEncryptionIV;

@property (nonatomic, strong) NSString * bundleBasePath;
@property (nonatomic, strong) NSString * filesystemBasePath;

@property (nonatomic, strong) NSString * mapsBundleBasePath;
@property (nonatomic, strong) NSString * mapsFilesystemBasePath;

+(OTMLUpdaterConfiguration*)currentConfiguration;
+(void)setCurrentConfiguration:(OTMLUpdaterConfiguration*)aConf;

@end
