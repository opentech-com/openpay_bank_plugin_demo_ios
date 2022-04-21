//
//  OTMLLuhnCheck.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/02/17.
//  Copyright © 2017 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OTMLLuhnCheck : NSObject


-(BOOL)doLuhnCheckWithString:(NSString*)toCheck;
-(BOOL)doLuhnCheckWithString:(NSString*)toCheck checksumPosition:(int)checkPosition;
-(NSString*)getLuhnChecksumDigitWith:(NSString*)arg;
-(BOOL)doLuhnModNCheckWithString:(NSString*)toCheck checksumPosition:(int)checkPosition;

@end

