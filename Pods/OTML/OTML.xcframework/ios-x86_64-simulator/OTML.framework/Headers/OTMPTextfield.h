//
//  MPTextfield.h
//  OTML
//
//  Created by Valerio Ferrantelli on 01/10/12.
//
//


#import <OTMLModels/OTMLCoreConstants.h>
#import <OTMLModels/OTMLStatefulComponent.h>
#import <OTMLModels/OTMLFont.h>



#define floating_placeholder_height 13.0

@class OTMLfont;
@interface OTMPTextfield : UITextField <OTMLStatefulObject,UITextFieldDelegate>{
@protected UIEdgeInsets inset;
}

@property (nonatomic, assign) BOOL floatingPlaceholder;
-(void) setPlaceholderFont:(OTMLFont *)_pFont;
-(void) setHardMinFontSize:(CGFloat)aHardMinFontSize;

@end
