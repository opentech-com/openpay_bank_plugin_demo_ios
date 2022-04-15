//
//  OTMPSecureFileHandler.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 20/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMPFileHandler.h"

/**
 Cifra e Decifra automaticamente il file.
 **/
@interface OTMPSecureFileHandler : OTMPFileHandler


-(void)setAESKey:(nonnull NSData*)aKey andIV:(nonnull NSData*)aIV;
-(BOOL)copyAndEncryptFileWithFullPath:(nullable NSString *)srcPath
                       toDestFullPath:(nullable NSString *)destPath;

@end
