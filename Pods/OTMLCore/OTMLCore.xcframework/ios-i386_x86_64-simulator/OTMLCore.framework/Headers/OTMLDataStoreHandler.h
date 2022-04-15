//
//  OTMLDataStoreHandler.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/**
 Gestisce in automatico la scrittura di files per account. legacy e provebiente da BankAustria.
 */

@interface OTMLDataStoreHandler : NSObject



//READ
+(NSString*) readNSStringOnFilename:(NSString*)theFilename andFolders:(NSString*)theFolders;

// remove
+(void) removeFilename:(NSString*)theFilename andFolders:(NSString*)theFolders;


@end
