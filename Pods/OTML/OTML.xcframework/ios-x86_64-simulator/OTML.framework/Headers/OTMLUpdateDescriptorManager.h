//
//  OTMLUpdateDescriptorManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


#import "OTMLCurrentDecriptorModel.h"
#import "OTMLDownloadedDescriptorModel.h"
#import "OTMLWorkingUpdateDescriptorModel.h"
#import "OTMLReadyUpdateDescriptorModel.h"

#define OTML_UPDATE_SECTIONS_WORKING_DESCRIPTOR_PATH @"otml_update_working"

@interface OTMLUpdateDescriptorManager : NSObject

+(void)invalidateCurrentDescriptorCache;

+(OTMLCurrentDecriptorModel*)getCurrentDescriptorCached;
+(OTMLCurrentDecriptorModel*)getCurrentDescriptorCopy;

+(OTMLReadyUpdateDescriptorModel*)getReadyDescriptorCopy;

+(void)cleanReadyFolder;
+(void)cleanTmpFolder;
+(void)cleanWorkingFolder;


+(void)__CANCEL_CURRENT_DESCRIPTOR_AND_RESOURCES__;
+(BOOL)isCurrentDescriptorStoredInBundle;

@end
