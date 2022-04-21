//
//  OTMPStringUtils.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 18/03/15.
//  Copyright (c) 2015 Opentech ENG. All rights reserved.
//


@interface OTMPStringUtils : NSObject

#define MAX_STRING_SIZE 10000

+(NSString*) escapeStringForJSON:(NSString *)aString;
+(NSString*) escapeStringForXML:(NSString*)aUnescapedString;
+(NSString*) unescapeXMLString:(NSString*) aXMLEscapedString;



+(CGSize) sizeOfString:(NSString*)aString withFont:(UIFont*)aFont referenceSize:(CGSize)aRefSize adjustSizeToFillWidth:(BOOL)aadjust;

+(NSString*) lowercaseOfString:(NSString*)aString withLocale:(NSLocale*)locale;
+(NSString*) uppercaseOfString:(NSString*)aString withLocale:(NSLocale*)locale;
+(NSString*) capitalWordsOfString:(NSString*)aString withLocale:(NSLocale*)locale;
+(NSString*) capitalSentencesOfString:(NSString*)aString withLocale:(NSLocale*)locale;

@end
