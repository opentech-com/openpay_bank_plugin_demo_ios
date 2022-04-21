//
//  OTMLLottieAnimationScaleAdapter.h
//  OTML
//
//  Created by Silvio D'Angelo on 08/03/21.
//

#import <Foundation/Foundation.h>

#import <OTML/OTMLComponentFrameModelHelper.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMLLottieAnimationScaleAdapter : NSObject

- (instancetype) initWithComponentFrame:(CGRect) aBoundingFrame
                         andFrameHelper:(OTMLComponentFrameModelHelper*)helper
            andLottieInnerAnimationSize:(CGSize) lottieAnimationSize;

@property double desiredLottieScale;
@property CGRect lottieFrameInBoundingFrame;

@end

NS_ASSUME_NONNULL_END
