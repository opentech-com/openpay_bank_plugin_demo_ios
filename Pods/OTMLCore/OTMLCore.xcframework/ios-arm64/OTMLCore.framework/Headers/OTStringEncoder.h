//
//  OTStringEncoder.h
//  OTMLCore
//
//  Created by Valerio Ferrantelli on 31/07/18.
//

#import <Foundation/Foundation.h>

@interface OTStringEncoder : NSObject

+(NSString*)urlDecodeString:(NSString*)encodedString;
+(NSString*)urlEncodeString:(NSString*)unencodedString;

+(NSString*)urlEncodeStringFormBody:(NSString*)unencodedString;

@end
