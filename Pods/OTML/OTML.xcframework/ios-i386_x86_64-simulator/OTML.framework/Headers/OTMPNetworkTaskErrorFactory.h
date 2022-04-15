//
//  OTMPNetworkTaskErrorFactory.h
//  OTML
//
//  Created by Valerio Ferrantelli on 10/05/2019.
//

#import <Foundation/Foundation.h>


@interface OTMPNetworkTaskErrorFactory : NSObject
+(NSError*)getWrongSignError;
+(NSError*)getFilesystemError;
+(NSError *)getNotValidResponseError;

@end

