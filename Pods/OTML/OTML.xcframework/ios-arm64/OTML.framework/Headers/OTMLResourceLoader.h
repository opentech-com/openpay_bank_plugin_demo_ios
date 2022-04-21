//
//  OTMLResourceLoader.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 02/12/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@class OTMLSignedFile;
@class OTMLSignedData;
@class OTMLMapStackEntry;
@class OTMLImage;


/**
 Nota: questo lavora sempre sul "current updater descriptor"
 
 **/
@interface OTMLResourceLoader : NSObject

+(OTMLResourceLoader*)getInstance;

-(OTMLMapStackEntry*) loadMapWithName:(NSString*)aMapName;
-(OTMLMapStackEntry*) loadMapWithName:(NSString*)aMapName contextTarget:(NSString*)context;

-(OTMLImage*)loadImageWithName:(NSString*)aImageName;
-(NSData*)loadStyleWithName:(NSString*)aStyleName;


@end
