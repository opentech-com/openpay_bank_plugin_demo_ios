//
//  CharacterValidator.h
//  OTML
//
//  Created by epavoni on 10/02/09.
//  Copyright 2009 Opentech. All rights reserved.
//

@interface OTMPCharacterValidator : NSObject {
	
}

+(NSString*) charUrlTransformation:(NSString*) baseString;

+(BOOL) originalText:(NSString*)aOriginaText shouldChangeCharactersInRange:(NSRange)aRange replacementString:(NSString*)aReplacementString forRegex:(NSRegularExpression *)aRegex withMinLen:(int)minLen andMaxLen:(int)maxLen;
@end
