//
//  MPLabel.h
//  ING
//
//  Created by Pasquale Cerqua on 17/10/12.
//
//

#import <UIKit/UIKit.h>

#import <OTMLModels/OTMLStatefulComponent.h>

@class OTMLFont;
@class OTMPLabel;


@protocol MPLabelPressedListener <NSObject>
-(void)labelDidPressed:(NSNumber*) isPresed sender:(OTMPLabel*)theLabel;
@end

@protocol MPLabelURLTappedListener <NSObject>
-(void)textURLTapped:(NSString*) aURL;
@end


@interface OTMPLabel : UILabel <OTMLStatefulObject>{
	OTMLFont* fontWrapper;
    OTMLComponentStatus currentState;
}

@property (nonatomic) UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) BOOL linksEnabled;

- (id)initWithFrame:(CGRect)frame otmlFont:(OTMLFont*) aFontWrapper;
- (id)initWithFrame:(CGRect)frame otmlFont:(OTMLFont*) aFontWrapper andAdjustFontSizeFitWith:(BOOL) adjustFont;
- (void) setState:(OTMLComponentStatus) state;
- (void) setState:(OTMLComponentStatus) state forced:(BOOL) forced;
-(OTMLComponentStatus)getCurrentState;
-(void)setPressedListener:(NSObject<MPLabelPressedListener> *)aListener;
-(void)setURLTappedListener:(id<MPLabelURLTappedListener>) aListener;
-(void)setOTMLFont:(OTMLFont*)theFont;
-(CGSize)sizeThatFitsWithCurrentFrame;
    
@end
