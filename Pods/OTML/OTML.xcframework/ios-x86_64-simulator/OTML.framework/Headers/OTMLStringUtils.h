//
//  SimpleStringUtils.h
//  OTML
//
//  Created by epavoni on 10/10/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMLTextCasing.h>
#import <OTMLModels/OTMLFont.h>

@interface OTMLStringUtils : NSObject

+(NSString*)localyze:(NSString*)string;
+(NSString*)applyCasing:(OTMLTextCasing) aCasing toString:(NSString*)aString;
+ (NSMutableAttributedString*) attributedStringFromText:(NSString*) HTMLString
                                           withOTMLFont:(OTMLFont*) aFont
                                           andAlignment:(NSTextAlignment) textAlignment;

@end
