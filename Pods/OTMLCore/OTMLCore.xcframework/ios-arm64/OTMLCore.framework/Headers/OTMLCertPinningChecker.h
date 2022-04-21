//
//  OTMLCertPinningChecker.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 25/10/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTMPHTTPSCertificateModel.h"


@interface OTMLCertPinningChecker : NSObject

+(void)addListOfValidCerts:(NSArray<OTMPHTTPSCertificateModel*>*)listOfValidCerts;

-(BOOL)isCertificatePinningValidUsingWhitelist:(NSArray<OTMPHTTPSCertificateModel*>*)listOfValidCerts
                                andCurrentList:(SecTrustRef)serverTrust;

@end
