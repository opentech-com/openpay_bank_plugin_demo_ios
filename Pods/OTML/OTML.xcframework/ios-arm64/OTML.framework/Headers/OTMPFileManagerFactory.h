//
//  OTMPFileManagerFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import <OTMLCore/OTMPFileHandler.h>
#import <OTMLCore/OTMPSecureFileHandler.h>
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>
#import <OTMLCore/OTMLDumpableModuleProtocol.h>


@interface OTMPFileManagerConfiguration : NSObject

@property (nonatomic, strong, nonnull) NSString * fileVersion;
@property (nonatomic, strong, nonnull) NSString * pathPrefix;
@property (nonatomic, strong, nonnull) NSData * aesKey;
@property (nonatomic, strong, nonnull) NSData * aesIV;
@property (nonatomic, strong, nonnull) NSString * appGroup;

@end

@interface OTMPFileManagerFactory : NSObject <OTMLDumpableModuleProtocol>

+(void)setupFileManagerConfiguration:(nonnull OTMPFileManagerConfiguration*)aConfiguration;

+(nonnull NSString*)getAppSpecificFolder;
+(nonnull NSString*)getSettingsFolder;
+(nonnull NSString*)getOTMLStoreFolder;
+(nonnull NSString*)getDSFolder;
+(nonnull NSString*)getDocsFolder;
+(nonnull NSString*)getTimerTriggerFolder;
+(nonnull NSString*)getTraceFolder;
+(nonnull NSString*)getExternalEventsFolder;
+(nonnull NSString*)getCurrentUpdateFolder;
+(nonnull NSString*)getTempUpdateFolder;
+(nonnull NSString*)getWorkingUpdateFolder;
+(nonnull NSString*)getReadyUpdateFolder;
+(nonnull NSString*)getReliableQueueFolder;
+(nonnull NSString*)getInBundleCurrentUpdateFolder;
+(nonnull NSString*)getDownloadsFolder;
+(nonnull NSString *)getOTMLSDKBasePath;
+(nonnull NSString*)getFileStorageFolder;
+(nonnull NSString*)getProcessedFolderWithName:(nullable NSString*)folder;



/** app_support folder factory **/
+(nonnull OTMPFileHandler*)basicFileManager;
+(nonnull OTMPSecureFileHandler*)secureFileManager;


+(double)getFreeDiskspace;
+(double)getDisksize;

+(nullable NSString*) getConfiguredAppGroup;

@end
