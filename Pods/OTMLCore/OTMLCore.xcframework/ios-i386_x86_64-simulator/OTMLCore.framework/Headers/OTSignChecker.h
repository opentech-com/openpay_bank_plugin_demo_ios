//
//  OTMLSignChecker.h
//  OTMLFramework
//
//  Created by epavoni on 22/11/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


@interface OTSignChecker : NSObject

-(instancetype)initWithPublicKey:(NSString*)b64PublicKey;
-(BOOL) isB64Sign:(NSString*)aSign validForData:(NSData*)aData;
-(BOOL) isSign:(NSData*)aSign validForData:(NSData*)aData;

@end
