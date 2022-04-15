//
//  OTMLSimpleObfuscator.h
//  Pods
//
//  Created by Silvio D'Angelo on 19/12/2019.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMLSimpleObfuscator : NSObject

+(NSString*) clearStringFromRaw:(NSString*) raw;
+(NSString*) rawStringFromClear:(NSString*) clear;

@end

NS_ASSUME_NONNULL_END
