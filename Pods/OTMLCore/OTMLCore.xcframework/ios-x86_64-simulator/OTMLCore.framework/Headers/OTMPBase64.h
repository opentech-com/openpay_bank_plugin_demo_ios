//
//  MPBase64.h
//  USLA
//
//  Created by enrico on 29/03/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


@interface OTMPBase64 : NSObject

+(NSString*)base64StringToUrlSafeBase64String:(NSString*)notUrlSafeBase64String;
+(NSString*)urlSafeBase64StringToBase64String:(NSString*)urlSafeBase64String;

+(NSString*) base64OfData:(NSData*) aData;
+(NSData*) dataOfBase64String:(NSString*) aString;

@end
