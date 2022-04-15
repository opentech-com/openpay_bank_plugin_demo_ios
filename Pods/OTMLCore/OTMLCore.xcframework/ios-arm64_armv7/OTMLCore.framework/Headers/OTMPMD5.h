//
//  MD5.h
//  OTML
//
//  Created by epavoni on 09/06/09.
//  Copyright 2009 Opentech. All rights reserved.
//


@interface OTMPMD5 : NSObject {

}

+(NSData*) md5OfData:(NSData*)aData;
+(NSString*) md5DigiestOf:(NSString*) stringToHash;
+(NSString*) md5DigiestOfData:(NSData*) dataToHash;

@end
