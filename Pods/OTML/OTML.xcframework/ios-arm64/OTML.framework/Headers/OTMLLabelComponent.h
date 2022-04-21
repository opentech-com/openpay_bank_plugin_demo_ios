//
//  OTMLLabel.h
//  OTML
//
//  Created by enrico on 31/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import "OTMLComponent.h"
#import <OTMLModels/OTMLFont.h>
#import "OTMPLabel.h"
#import <OTMLModels/OTMLStatefulComponent.h>
#import "OTMPStringSizeAware.h"
#import "OTMLVoiceoverDTO.h"

@interface OTMLLabelComponent : OTMLComponent<OTMLAccessibleComponent>{
@protected
    OTMLFont* otmlFontWrapper;
    NSString* gravityString;
    OTMPStringSizeAware* text;
    NSString* hiddenText;
    NSString* pressed_for_id;
    int numberOfLines;
    OTMPLabel* label;
    BOOL animationDisabled;
    BOOL animationDisabledSetted;
}

-(BOOL)isAnimationDisabled;

// to be used called or overridden only by inherited classes
-(NSString*)getTextForLabel;
-(NSString*)getCleanText;
-(void) setCleanText:(NSString*)string;
-(NSString*)getTextFromCleanText;
-(void)updateSizeAwareText:(BOOL)forced;
-(UIColor*)getBlinkColor;


@end
