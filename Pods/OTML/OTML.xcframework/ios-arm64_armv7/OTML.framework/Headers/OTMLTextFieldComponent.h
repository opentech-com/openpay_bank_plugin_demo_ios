//
//  OTMLTextField.h
//  OTML
//
//  Created by enrico on 31/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "OTMLComponent.h"
#import <OTMLModels/OTMLFont.h>
#import "OTMLComponentResponderDelegate.h"
#import "OTMLKeyboardNavigationBar.h"
#import "OTMLReceiverAnchorDelegate.h"


@interface OTMLTextFieldComponent : OTMLComponent <UITextFieldDelegate, UITextViewDelegate, OTMLKeyboardNavigationBarDatasource, OTMLKeyboardNavigationBarDelegate, OTMLComponentResponderDelegate, OTMLReceiverAnchorDelegate>

- (UITextField*)getTextfieldView;
- (UIView*)newTextfield;
- (void) changedText;
- (void)keyboardWillShow:(NSNotification *)notification;
- (void)keyboardWillHide:(NSNotification *)notification;

+(BOOL) canTrimOnOriginalText:(NSString *)originalText
             replacementRange:(NSRange)range
            replacementString:(NSString *)string
                     toMaxLen:(NSUInteger)maxLen;

+(NSString*)trimOnOriginalText:(NSString *)originalText
              replacementRange:(NSRange)range
             replacementString:(NSString *)string
                      toMaxLen:(NSUInteger)maxLen;

+ (NSUInteger)      lenOfText:(NSString*)aOriginaText
shouldChangeCharactersInRange:(NSRange)aRange
            replacementString:(NSString*)aReplacementString;

/**
 Filters the aReplacementString removing any charachter that does not match the regex (verified char by char).
 @param aReplacementString String to be verified. It can be nil
 @param aRegex The regex to be verified char by char
 @return Result: the filtered aReplacementString. It could be nil ONLY if aReplacementString is nil.
 */
+(NSString*)filterReplacementString:(NSString*)aReplacementString
                         usingRegex:(NSRegularExpression *)aRegex;
@end
