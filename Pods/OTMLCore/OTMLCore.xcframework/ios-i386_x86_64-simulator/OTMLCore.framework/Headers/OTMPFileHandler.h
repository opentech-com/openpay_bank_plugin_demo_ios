//
//  OTMPFileHandler.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 20/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLDumpableModuleProtocol.h"

@interface OTMPFileHandler : NSObject <OTMLDumpableModuleProtocol>

#pragma mark elaborazione path
-(nonnull NSString*)getFilenameFromFullPath:(nonnull NSString*)aFullpath;

#pragma mark CRUD files

//REMOVE
-(BOOL)removeFileWithFullPath:(nonnull NSString*)aPath;

//STORE
-(BOOL)storeNSCodableObject:(nonnull NSObject<NSCoding> *)aObj withFullPath:(nonnull NSString *)fullpath;
-(BOOL)storeNSData:(nonnull NSData*)aData withFullpath:(nonnull NSString*)aFullpath;
-(BOOL)storeNSString:(nonnull NSString*)aString withFullpath:(nonnull NSString*)aFullpath;

//Il dictionary deve contenere oggetti serializzabili con JSON.
/*Regole:
 - Top level object is an NSArray or NSDictionary
 - All objects are NSString, NSNumber, NSArray, NSDictionary, or NSNull
 - All dictionary keys are NSStrings
 - NSNumbers are not NaN or infinity
 Other rules may apply. Calling this method or attempting a conversion are the definitive ways to tell if a given object can be converted to JSON data.
 */
//READ
-(nullable NSObject<NSCoding> *)readNSCodableObjectUsingDelegate:(nonnull NSObject<NSKeyedUnarchiverDelegate>*)aDelegate withFullpath:(nonnull NSString *)fullpath;
-(nullable NSData*) readNSDataWithFullpath:(nonnull NSString*)fullpath;
-(nullable NSString*) readNSStringWithFullpath:(nonnull NSString*)fullpath;

-(nullable NSObject<NSCoding> *)readNSCodableObjectWithFullpath:(nonnull NSString *)fullpath;


//CHECK
-(BOOL) existsFullPath:(nonnull NSString *)aFullPath;


//COPY & MOVE
-(BOOL) copyFileWithFullPath:(nonnull NSString *)srcPath toDestFullPath:(nullable NSString *)destPath;
-(BOOL) copyContentsOfSrcFullpath:(nonnull NSString *)sourcePath toDestFullpath:(nonnull NSString *)destPath;

-(BOOL) moveFileWithFullPath:(nonnull NSString *)srcPath toDestFullPath:(nullable NSString *)destPath;
-(BOOL) moveFolderFromFullpath:(nonnull NSString*)srcPath toFullpath:(nonnull NSString*)destPath;
-(BOOL) moveContentsOfSrcFullpath:(nonnull NSString*)srcPath toDestFullpath:(nonnull NSString*)destPath;
-(BOOL) moveContentsOfSrcFullpath:(nonnull NSString*)sourcePath toDestFullpath:(nonnull NSString*)destPath includingFolders:(BOOL)includeFolders;


#pragma mark gestione attributi
-(BOOL)setGlobalAttributesToFullpath:(nonnull NSString*)aFullpath;
-(nonnull NSDictionary*)getAttributesOfFullpath:(nonnull NSString*)fullPath;
-(nonnull NSDate*)getLastTouchDateOfFullpath:(nonnull NSString*)aFullpath;

#pragma mark ricerche e liste files e cartelle
-(nullable NSArray<NSString*>*)listFilesInHandlerFullPath:(nullable NSString *)aFullpath;
-(nullable NSArray<NSString*>*)listFoldersInHandlerFullPath:(nullable NSString *)aFullpath;
-(nullable NSArray*) searchFilesInFullPath:(nonnull NSString*)aFullPath withFilenameContaining:(nonnull NSString*)aSubstring;
-(nonnull NSArray<NSString*>*)listFilesInBundleFullpath:(nonnull NSString *)aFullPath;


#pragma mark gestione cartelle
-(BOOL) ensureFullPathExists:(nonnull NSString*)aPath andClearFiles:(BOOL)clearIfExist;
-(BOOL) emptyFullPath:(nonnull NSString*)aPath includingSubFolders:(BOOL)clearSubFolders;
-(BOOL) removeFolderInFullPath:(nonnull NSString *)aFullPath;


#pragma PROTECTED_METHODS never call this directly!
-(BOOL)storeNSData_:(nonnull NSData*)aData toPath:(nullable NSString*)fullpath;
-(nullable NSData*)readNSDataFromPath_:(nonnull NSString*)fullpath;


-(void)debugListPathContent:(nonnull NSString *)aFullPath;
@end
