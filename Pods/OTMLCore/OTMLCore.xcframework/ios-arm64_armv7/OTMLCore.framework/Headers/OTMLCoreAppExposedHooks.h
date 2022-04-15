//
//  OTMLCoreAppExposedHooks.h
//  OTMLCore
//
//  Created by Cristiano Calicchia on 14/03/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMLCoreAppExposedHooks : NSObject

@property (nonatomic, copy, nullable) UIApplication*(^sharedApplicationHandler)(void);
@property NSString* serverBaseContextPath;
@property (nonatomic, copy, nullable) BOOL(^sharedApplicationOpenUrlHandler)(NSURL* _Nullable url);


+ (OTMLCoreAppExposedHooks*) getInstance;

@end

NS_ASSUME_NONNULL_END
