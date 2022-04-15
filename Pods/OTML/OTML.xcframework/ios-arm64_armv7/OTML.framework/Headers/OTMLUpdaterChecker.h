//
//  OTMLUpdaterChecker.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLDownloadedDescriptorModel.h"

//param: is update needed
typedef void(^OTMLUpdaterCheckerCallback)(NSNumber*param, NSError*error);

@interface OTMLUpdaterChecker : NSObject

@property (nonatomic, readonly, strong) OTMLDownloadedDescriptorModel * downloadedDescriptor;
@property (nonatomic, readonly, assign) BOOL isBlockingUpdate;

-(void)checkUpdatesWithCompletationkBlock:(OTMLUpdaterCheckerCallback)completationBlock;

@end
