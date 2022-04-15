//
//  OTMLiOS9PopupView.h
//  OTML
//
//  Created by Silvio D'Angelo on 01/10/2018.
//

#import <UIKit/UIKit.h>

@class OTMLPopupModel;
@class OTMLEntry;

NS_ASSUME_NONNULL_BEGIN

@interface OTMLiOS9PopupView : UIView

+(OTMLiOS9PopupView*) buildViewControllerFrame:(CGRect) frame
                                     fromModel:(OTMLPopupModel *) popupModel
                             withBodyFromEntry:(OTMLEntry *) entry
                          withTargetForButtons:(id) atarget
                         andSelectorForButtons:(SEL) selectorForButtons;

-(void) refreshInnerViewsWithContainerFrame:(CGRect) frame
                                  fromModel:(OTMLPopupModel *) popupModel
                          withBodyFromEntry:(OTMLEntry *) entry;

@end

NS_ASSUME_NONNULL_END
