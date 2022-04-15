//
//  OTStringUtil.h
//  OTMLCore
//
//  Created by Valerio Ferrantelli on 09/05/2019.
//

#import <Foundation/Foundation.h>


@interface OTStringUtil : NSObject

+(NSString*) escapeStringForJSON:(NSString *)aString;
+(NSString*) escapeStringForXML:(NSString*)aUnescapedString;

+(CGSize) sizeOfString:(NSString*)aString withFont:(UIFont*)aFont referenceSize:(CGSize)aRefSize adjustSizeToFillWidth:(BOOL)aadjust;

+(NSString*) lowercaseOfString:(NSString*)aString withLocale:(NSLocale*)locale;
+(NSString*) uppercaseOfString:(NSString*)aString withLocale:(NSLocale*)locale;
+(NSString*) capitalWordsOfString:(NSString*)aString withLocale:(NSLocale*)locale;
+(NSString*) capitalSentencesOfString:(NSString*)aString withLocale:(NSLocale*)locale;

/**
 Use only if the main font height is inconsistent when measured due to strange charachteristics of its leading height.
 By default it is disable, if required set it in appdelegate as the first instruction
 @param leadingDisabled default NO, set it to YES to ignore the leading height of the fonts when computing its size
 */
+(void) fontLeadingInComputationsDisabled:(BOOL) leadingDisabled;
+(BOOL) isFontLeadingInComputationsDisabled;

@end

