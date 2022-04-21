//
//  OTMLUpdaterDownloader.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTMLUpdateManifestSection.h"
#import "OTMLAdvancedUpdaterManager.h"
#import "OTMLDownloadedDescriptorModel.h"

typedef void(^OTMLUpdaterDownloaderCallback)(NSError*error);

@interface OTMLUpdaterDownloader : NSObject <OTMLUpdateManifestSectionResourceDownloadDelegate>

@property (nonatomic, weak) OTMLAdvancedUpdaterDelegateBase * otmlUpdaterDelegate;


-(instancetype)initWithDownloadedDescriptor:(OTMLDownloadedDescriptorModel*)aModel;
-(void)performContentDownloadWithCompletationkBlock:(OTMLUpdaterDownloaderCallback)completationBlock;


@end
