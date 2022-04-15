//
//  OTMLCCUtils.h
//  Pods
//
//  Created by Enrico on 13/02/2020.
//
@interface OTMLCCUtils : NSObject

typedef enum {
    OTMLCCUtils_Region_EU = 0,
    OTMLCCUtils_Region_Global = 1
} OTMLCCUtils_Region;


+(nonnull NSArray<NSNumber *> *) spacingPatternSequenceForCreditCardWithPrefix:(nonnull NSString *)string;

+(nonnull NSString*) formatCardNumber:(nonnull NSString*)number;

+(nonnull NSString*) formatObfuscatedCardNumberWithBin:(nonnull NSString*) bin
                                 obfuscationCharacters:(nonnull NSString*) obfChar
                                           finalLenght:(NSUInteger) finalLength
                                            lastDigits:(nonnull NSString*) lastDigits
                                             binToShow:(nonnull NSString*) binToShow;

/**
 Detects the card number format from the prefix and returns card type
 @param string the card number (any non digit character will be stripped out). First 6 digits are enough for
 @param shouldApplyStrongRecognition if YES it will return unknown when multiple match are still possible, if NO will return one of the possible matching (eg. @"4" could either be Visa or Visa Electron. if YES will return OTMLCardType_none, if NO will return OTMLCardType_visa)
 @param region a string that represent the region (eu or global). If not provided it will be resolved as eu
 @return a String representation of the recognized OTMLCardType, accoring to OTMLModels
 */
+(nonnull NSString*) cardTypeFromString:(nonnull NSString *)string
                      strongRecognition:(BOOL)shouldApplyStrongRecognition
                                 region:(nullable NSString*) region;

+(OTMLCCUtils_Region) regionFromString:(nullable NSString*) aStringValue;
+(nonnull NSString*) stringFromRegion:(OTMLCCUtils_Region) aValue;

@end
