//
//  OTMLFileDSManager.h
//  OTMLFramework
//
//  Created by epavoni on 04/06/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@class OTMLDatasource;

@interface OTMLFileDSManager : NSObject <OTMLRestartAppAwareProtocol>

+(OTMLFileDSManager*)getInstance;

-(OTMLDatasource*)getDSFromLoadDsID:(NSString*)key;

-(OTMLDatasource*)readDSWithFilename:(NSString*)aFilename;
-(OTMLDatasource*)readDSWithFullPath:(NSString*)aFullPath;

-(BOOL)storeDS:(OTMLDatasource*)aDS withFilename:(NSString*)aFilename;

-(BOOL)removeFilename:(NSString*)theFilename;
-(BOOL)removeFullPath:(NSString*)theFulltPath;

-(void)cleanup;

@end
