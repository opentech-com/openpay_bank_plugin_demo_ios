//
//  OTMLPlatformProperties.h
//  OTML
//
//  Created by Silvio D'Angelo on 07/09/2018.
//

#import <Foundation/Foundation.h>

@interface OTMLPlatformProperties : NSObject

+(nonnull NSString *) getAndroidPlatformPrefix;
+(nonnull NSString *) getIosPlatformPrefix;
+(nonnull NSString *) getWPPlatformPrefix;
+(nonnull NSString *) getEvaluatedTopPlatformPrefix;
+(nonnull NSString *) getSkippedTopPlatformPrefix;

@end
