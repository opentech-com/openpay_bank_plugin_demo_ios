//
//  OTMPRSAKeyUtil.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/05/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OTMPRSAKeyUtil : NSObject



/****
 Pay attention this init requres the Keychain to be usable
 @param aHexModulus The public key modulus
 @param aHexExponent The public key exponent
 @param aKeyType un tipo per la chiave
 @return an inited OTMPRSA Wrapper
 */
+(SecKeyRef)generateRSAKeyWithHexModulus:(NSString*)aHexModulus andHexExponent:(NSString*)aHexExponent type:(CFStringRef)aKeyType;




@end
