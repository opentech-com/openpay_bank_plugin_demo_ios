//
//  OTMLUpdateManifestSection.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLUpdateSection.h"
#import "OTMLStyleElement.h"
#import "OTMLPadding.h"
#import "OTMLSignedFile.h"
#import "OTMLUpdTraceModel.h"
#import "OTMLHTTPTask.h"

@class OTMLManifestAbstractResource;

@protocol OTMLUpdateManifestSectionResourceDownloadDelegate <NSObject>

-(void)resourcesDownloadDidStart;
-(void)resourceHasDownloadedWithGlobalPercentage:(float)percent;
-(void)resourcesDownloadDidFinishWithError:(NSError*)anError;

@end

@interface OTMLUpdateManifestSection : OTMLUpdateSection


@property (nonatomic, strong, readonly)  NSDictionary<NSString*,OTMLManifestAbstractResource*>* nameToResourceLookupTable;
@property (nonatomic, strong) OTMLUpdTraceModel * traceModel;


-(void)filterResourcesToBeDownloadedUsingCurrentManifestSection:(OTMLUpdateManifestSection *)aCurrentManifestSection;
-(void)downloadModifiedAndMissingResourcesWithDelegate:(NSObject<OTMLUpdateManifestSectionResourceDownloadDelegate>*)aDelegate;

-(NSMutableDictionary*)generateHashToResourceLookupTable;
+(NSMutableArray*)generateHashListFromFileList:(NSArray*)currentFilesList;


@end


