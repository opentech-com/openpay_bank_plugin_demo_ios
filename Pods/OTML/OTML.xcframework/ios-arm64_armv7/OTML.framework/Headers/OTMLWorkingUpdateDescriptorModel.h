//
//  OTMLWorkingUpdateDescriptorModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 27/08/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLAbstractUpdateDescriptorModel.h"
#import "OTMLCurrentDecriptorModel.h"
#import "OTMLDownloadedDescriptorModel.h"
#import "OTMLStorableDescriptorModel.h"

@interface OTMLWorkingUpdateDescriptorModel : OTMLStorableDescriptorModel

-(id)initWithCurrent:(OTMLCurrentDecriptorModel *)aCurrentDescriptor andDownloaded:(OTMLDownloadedDescriptorModel*)downloadedDescriptor;
-(BOOL)upgradeWorkingToReady;

@end
