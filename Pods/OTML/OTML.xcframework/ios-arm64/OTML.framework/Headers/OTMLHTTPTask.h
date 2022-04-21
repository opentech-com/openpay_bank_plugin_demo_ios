//
//  OTMLHTTPTask.h
//  OTML
//
//  Created by Cristiano Calicchia on 20/05/21.
//

#import <Foundation/Foundation.h>
#import "OTHTTPTask.h"
#import "OTMLNetworkResponse.h"
#import "OTMPNetworkTaskErrorFactory.h"

#define HEADER_PACKAGE_PREFIX @"X-OTSC-BUNDLE"

NS_ASSUME_NONNULL_BEGIN

@interface OTMLHTTPTask  : OTHTTPTask<OTHTTPResponse*>

-(void)repackageBundleHeaders:(NSMutableDictionary<NSString*, NSString*>*)aHeaders;

@end

NS_ASSUME_NONNULL_END
