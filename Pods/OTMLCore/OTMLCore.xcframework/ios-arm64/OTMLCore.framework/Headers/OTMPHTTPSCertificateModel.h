//
//  SecureConnectionHttpsValidator.h
//  OTMLFramework
//
//  Created by epavoni on 05/06/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


@interface OTMPHTTPSCertificateModel : NSObject

-(id)initWithFingerprint:(NSString*)aFingerprint forIndex:(CFIndex)aIndex;

@property (strong, nonatomic, readonly) NSString* fingerprint;
@property (assign, nonatomic, readonly) CFIndex index;

@end
