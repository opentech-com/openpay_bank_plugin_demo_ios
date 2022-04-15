//
//  MPTextArea.h
//  OTMLFramework
//
//  Created by epavoni on 21/05/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


#import <OTMLModels/OTMLCoreConstants.h>
#import <OTMLModels/OTMLStatefulComponent.h>

@class OTMLFont;

@interface MPTextArea : UITextView <OTMLStatefulObject,UITextViewDelegate>{
@protected UIEdgeInsets inset;
}

@property (nonatomic, assign) BOOL floatingPlaceholder;

-(void) setPlaceholderFont:(OTMLFont *)_pFont;
-(void) setPlaceholder:(NSString *)placeholder;
-(void) updatePlaceHodlerFrameAnimated;
-(void) setEnabled:(BOOL)enabled;

/**
 HOOK method for customization (see OTMPFLoatingPLaceholderLabel)
 */
-(BOOL) customIsCurrentlyEditing;

@end
