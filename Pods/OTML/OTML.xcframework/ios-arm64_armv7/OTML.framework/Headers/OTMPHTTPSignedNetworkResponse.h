//
//  OTMPHTTPSignedNetworkResponse.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTHTTPResponse.h"

@interface OTMPHTTPSignedNetworkResponse : OTHTTPResponse

@property (nonatomic, assign) int nonce;

-(BOOL)checkSign;
-(NSString*)getSign;

@end
