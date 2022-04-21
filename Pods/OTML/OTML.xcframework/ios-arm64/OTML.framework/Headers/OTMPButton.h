//
//  MPButton.h
//  OTML
//
//  Created by Valerio Ferrantelli on 04/10/12.
//
//

@class OTMLFont;
@class OTMPButton;
@class OTMPLabel;


@protocol OTMPButtonEnabledListener <NSObject>
-(void)buttonDidEnabled:(NSNumber*) isEnabled;
@end

@protocol OTMPButtonPressedListener <NSObject>
-(void)buttonDidPressed:(NSNumber*) isPresed sender:(OTMPButton*)theButton;
@end

@protocol OTMPButtonSelectedListener <NSObject>
-(void)buttonDidSelected:(NSNumber*) isSelected sender:(OTMPButton*)theButton;
@end


@protocol OTMPButtonFactotumDelegate<OTMPButtonEnabledListener,OTMPButtonPressedListener,OTMPButtonSelectedListener>
@end

typedef void (^ActionBlock)(id);

@interface OTMPButton : UIButton <OTMPButtonPressedListener, OTMPButtonSelectedListener>{
    ActionBlock _actionBlock;
    ActionBlock _actionBlock2;
    
    ActionBlock _actionBlockPressed;
    ActionBlock _actionBlockSelected;
    
    
    @protected OTMPLabel* theLabel;
}

-(void) handleControlState:(UIControlState)state
                 withBlock:(ActionBlock)action;

- (id)initWithFrame:(CGRect) frame
        normalImage:(UIImage*) aNormalImage
   highlightedImage:(UIImage*) aPressedImage
      disabledImage:(UIImage*) aDisabledImage
   andSelectedImage:(UIImage*) aSelectedImage;

- (id)initWithFrame:(CGRect)frame
        normalImage:(UIImage*) aNormalImage
   highlightedImage:(UIImage*) aPressedImage
      disabledImage:(UIImage*) aDisabledImage
   andSelectedImage:(UIImage*) aSelectedImage
andSelectedPressedImage:(UIImage*) aSelectedPressedImage;


-(void)setButtonDelegate:(id<OTMPButtonFactotumDelegate>) aDelegate;
-(void)setEnabledListener:(id<OTMPButtonEnabledListener>) aListener;
-(void)setPressedListener:(id<OTMPButtonPressedListener>) aListener;
-(void)setSelectedListener:(id<OTMPButtonSelectedListener>) aListener;

-(void)setBackgroundColor:(UIColor *)color forState:(UIControlState)state;

-(void) handleControlEvent:(UIControlEvents)event withBlock:(ActionBlock)action;
-(void) handleControlEvent:(UIControlEvents)event withBlock:(ActionBlock)action andId:(int)idx;

-(void)setLabelWithText:(NSString*) theText
              andUIFont:(UIFont*) theFont;
-(void) setLabelWithText:(NSString*) theText andFont:(OTMLFont*)theFont;
-(void) setLabelTextAlignment:(NSTextAlignment)a;
-(void) setLabelColor:(UIColor*)theColor;


-(OTMPLabel*) getLabel;

-(void)setImage:(UIImage *)image forState:(UIControlState)state;
-(void)setTitle:(NSString *)title forState:(UIControlState)state;


@end
