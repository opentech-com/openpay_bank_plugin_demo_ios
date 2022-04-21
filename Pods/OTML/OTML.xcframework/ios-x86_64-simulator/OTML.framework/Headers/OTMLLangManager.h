//
//  OTMLLangManager.h
//  OTMLFramework
//
//  Created by epavoni on 05/04/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//
/**
 
 Per localizzare in automatico le tastiere e cut|copy|paste
 mettere in info plist
 CFBundleAllowMixedLocalizations = YES
 
 
 **/
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@interface OTMLLangManager : NSObject<OTMLRestartAppAwareProtocol>

-(void)setupWithDefaultLang:(NSString*)aDefaultLang supportedLangs:(NSArray*)aSupportedLangsArray localeAliasMapping:(NSString*)aliasMapping;
+(OTMLLangManager*)getInstance;
-(BOOL)saveFavoriteLocale:(NSString*) aLocale;
-(NSLocale*)getCurrentNSLocale;
-(NSString*)getCurrentLocale;
-(NSArray*)getCurrentSupportedLang;
-(NSString*)getCurrentGuiLocale;
-(NSString*)localyzeStringWithPlaceholder:(NSString*)aPlaceholder;
-(NSString*)getAcceptLocaleHTTPHeaderValue;

-(NSString*)getCurrentDefaultLocale;

-(NSString*)normalyzeLocale:(NSString*)aLocale;
+(NSString*)standardizeLocale:(NSLocale*)aNSLocale;
-(NSString*)standardizeLocaleStringNormalyzed:(NSString*)nonStandardNormalyzedLocale;

@end
