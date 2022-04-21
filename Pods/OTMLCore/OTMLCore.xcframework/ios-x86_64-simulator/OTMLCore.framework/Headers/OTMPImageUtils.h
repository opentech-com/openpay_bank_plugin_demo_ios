//
//  MPImageUtils.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/03/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

@interface OTMPImageWithFrame : NSObject

@property (nonatomic, retain) UIImage* _Nonnull image;
@property (nonatomic, assign) CGRect frame;

@end

@interface OTMPImageUtils : NSObject

typedef enum{
	HORIZONTAL = 0,
	VERTICAL,
	TOP_TO_DOWN,
	DOWN_TO_TOP,
	LEFT_TO_RIGHT,
	RIGHT_TO_LEFT
}MP_IMAGE_DIRECTION;


/**
 UIImmage with frame and gradient layer as requested.
 **/
+(nonnull UIView *) gradientViewWithFrame:(CGRect)theFrame
                             UIColorArray:(nonnull NSArray*)theColorArray
                           locationsArray:(nullable NSArray*)theLocationArray
                                direction:(MP_IMAGE_DIRECTION)aDirection;


/**
 UIImmage with frame and backgroundcolor specified.
 @note a frame with width or height ==0 will return a nil image.
 @note a nil color will produce a clear color image
 **/
+(nullable UIImage *) imageWithFrame:(CGRect)theFrame
                               color:(nullable UIColor*)theColor
                            useAlpha:(BOOL)useAlpha;

/**
 adds a gradient layer with color array specified. 
 @note Please note that this will never remove a previously added gradient layer
 **/
+(void) applyVerticalGradientToView:(nullable UIView*)theView
                       UIColorArray:(nullable NSArray*)theColorArray;

/** 
 returns an empty view with specified frame
 **/
+ (nonnull UIView *) emptyViewWithFrame:(CGRect) theFrame;

/**
 returns an empty view with size 1x1 px
 **/
+ (nonnull UIView*)  emptyView;

/**
 returns an empty view with size 1x1 px
 **/
+ (nonnull UIImage*) emptyImage;

/**
 returns an image produced from the specified view.
 @note a nil view or a view with width or height == 0 will produce a nil image
 **/
+ (nullable UIImage *) imageWithView:(nullable UIView *)view;

/**
 returns an image from data adapted to screen scale
 **/
+(nullable UIImage*)imageFromDataScaledToScreenScale:(nullable NSData*) aImgData;

/**
 returns an image from base64 string representing an image.
 **/
+(nullable UIImage*) imageFromB64StringScaledToScreenScale:(nullable NSString*) aB64Image;

/**
 returns a view with specified size and specified background color
 @note a nil color will produce a clear color view
 **/
+(nonnull UIView*) lineWithSize:(CGSize)theSize
                       andColor:(nullable UIColor*)theColor;

/**
 returns a UIView with background clear color and corner radius according to diameter.
 @note a diameter <=0 will be interpreted as view with size 0x0 and no corner radius 
 **/
+(nonnull UIView*) circleViewWithDiameter:(int)theDiameter;

/**
 produce a rounding mask with tl, tr, br, bl corners.
 @note a rect smaller than 1x1 will be interpreted as 1x1
 **/
+ (nonnull UIImage*) getRoundedMaskWithRect:(CGRect) rect
                           radiustl:(CGFloat) radius_tl
                           radiustr:(CGFloat) radius_tr
                           radiusbl:(CGFloat) radius_bl
                           radiusbr:(CGFloat) radius_br;

/**
 apply a rounding mask with tl, tr, br, bl corners to specified view and returns it.
 @note the returned view is the same view passed as parameter
 @see [OTMPImageUtils getRoundedMaskWithRect:radiustl:radiustr:radiusbl:radiusbr:]
 **/
+(nullable UIView*) applyRoundedMaskRadiustl:(CGFloat)radius_tl
                                    radiustr:(CGFloat) radius_tr
                                    radiusbl:(CGFloat) radius_bl
                                    radiusbr:(CGFloat) radius_br
                                     forView:(nullable UIView*)aView;

/**
 returns a triangle view with specified color (clear color if nil) with specified rotation
 **/
+(nonnull UIView*) getTriangleWithSize:(CGSize)theSize
                              andColor:(nullable UIColor*)theColor
                           andRotation:(int)degrees;


/**
 returns a screenshot of view.
 @param bufferedVRam uses bufferedVRam instead of actual redraw of the view. This enhanche performance
 @note the iOS version is checked inside this method, if no bufferedVRam is available (ios < 7 )it will just redraw the view+
 @note returns nill if nill view or view with size (W or H) equals to 0
 **/
+ (nullable UIImage*) getScreenShotOfVIew:(nullable UIView*) view
                                 fromVRam:(BOOL)bufferedVRam;

/**
 simila to [OTMPImageUtils getScreenShotOfVIew:fromVRam:] using fromVRam: NO
 @see [OTMPImageUtils getScreenShotOfVIew:fromVRam:]
 **/
+ (nullable UIImage*) getScreenShotOfVIew:(nullable UIView*) view;

/**
 returns the screenshot of view specified (allways uses vram if available) cropping with rect
 @note nil image is returned if view is nil or if it has 0 width or height
 **/
+ (nullable UIImage*) getScreenShotOfVIew:(nullable UIView*) view
                                 cropRect:(CGRect)cropRect;

/**
 provide an Image using specified image and applying the specified blur radius.
 @note a nil image will produce a nil image
 @note an image less than 1x1 will return the same former image
 **/
+ (nullable UIImage *)imageBlurring:(nullable UIImage *)image
                     withBlurRadius:(CGFloat)blurRadius;

/**
 uses the blur radius 5.0
 @see [OTMPImageUtils imageBlurring:withBlurRadius:]
 **/
+ (nullable UIImage *)imageBlurring:(nullable UIImage *)image;

/**
 produce an image that is the former image cropped
 @note a nil image will produce a nil image
**/
+ (nullable UIImage*)imageWithImage:(nullable UIImage *)image
                    croppedWithRect:(CGRect)cropRect;


/**
 produce an image that is the former image cropped by the inscribed circle
 @note a nil image will produce a nil image
**/
+ (nullable UIImage*)circleCroppedImage:(nullable UIImage *)image;

/**
 produce an image that is the reflected image cropped
 @note a nil image will produce a nil image
 @see imageByMirrorHorizzontal or imageByMirrorVertical
 **/
+ (nullable UIImage *)reflectedImageWithScale:(CGFloat)scale
                                        image:(nullable UIImage*)image __attribute__((deprecated));
/**
 produce an image that is the squared clip of the image
 @note a nil image will produce a nil image
 **/
+(nullable UIImage*)squaredImageCroppingOnCenter:(nullable UIImage*)photo;

/**
 produce an image that is the clip of the image for the given rect
 @note a nil image will produce a nil image
 **/
+ (nullable UIImage*) cropFrame:(CGRect )frameForCrop
                      onUIImage:(nullable UIImage*) theImage;

/**
 returns the size of the image Fitting the given rect
 @note a nil image will return cgrectZero
@see <a href="http://wiki.opentech.com/doku.php?id=otml:component_image">Revisione componente image</a> for FIT and FILL definitions
 **/
+ (CGSize) sizeOfresizedImage:(nullable UIImage*) img
              keepRatioAndFIT:(CGSize)referenceSize;

/**
 returns the size of the image Filling the given rect
 @note a nil image will return cgrectZero
 @see <a href="http://wiki.opentech.com/doku.php?id=otml:component_image">Revisione componente image</a> for FIT and FILL definitions
 **/
+ (CGSize) sizeOfresizedImage:(nullable UIImage*) img
             keepRatioAndFILL:(CGSize)referenceSize;

/**
 returns the affine transformation that can trasfrotm fromRect to toRect
 **/
+ (CGAffineTransform) cgaffineTransformFromRect:(CGRect) fromRect
                                         toRect:(CGRect) toRect;

/**
 returns the resized image to the new size.
 If KeepAspect ratio the image will be fitted
  @note a nil image will produce a nil image
 **/
+ (nullable UIImage*) resizedImage:(nullable UIImage*)img
                          withSize:(CGSize)newSize
                   keepAspectRatio:(BOOL)keepAspect;

/**
 returns the resized image to the new size.
 If KeepAspect ratio the image will be fitted
  @note a nil image will produce a nil image
 **/
+ (nullable UIImage*) resizedImage:(nullable UIImage*)img
                 withSize:(CGSize)newSize
keepingImageSizeAndAddingBackgroundColor:(nullable UIColor*)aBGColor;

/**
 returns a resizable image with tCap and LCap specified
  @note a nil image will produce a nil image
 **/
+ (nullable UIImage*) resizeImage:(nullable UIImage*)aImage
                         withTCap:(CGFloat) aTCap
                          andLCap:(CGFloat) aLCap;

/**
 apply an affine transformation to UIImage
  @note a nil image will produce a nil image
 **/
+ (nullable UIImage*)imageWithImage:(nullable UIImage*)aImage
                byApplyingTransform:(CGAffineTransform) matrix;

/**
 apply an horizontal mirroring to the image
 @note a nil image will produce a nil image
 **/
+ (nullable UIImage*)imageByMirrorHorizzontal:(nullable UIImage*)aImage;

/**
 apply an vertical mirroring to the image
 @note a nil image will produce a nil image
 **/
+ (nullable UIImage*)imageByMirrorVertical:(nullable UIImage*)aImage;

/**
 apply an rotation transform to the image given the angle in degree
 @note a nil image will produce a nil image
 **/
+ (nullable UIImage*) imageRotatedByAngle:(nullable UIImage*)img
                                    angle:(CGFloat)angle;




+ (nullable UIImage*) imagToMultiply:(nullable UIImage*) img
                     multiplyedColor:(nullable UIColor*) aColor;


/**
 Apply a rotation transformation to the srcImage in order to obtain an image with orientation up
 @param srcImage the image to manipulate. a nil image will produce a nil result. If orientation is already orientation up no transformation is performed, otherwise the image is rotated accordingly
 @return the manipulated image
 */
+(nullable UIImage*) imageWithImageNormalizingOrientation:(nullable UIImage*)srcImage;


+(nonnull UIImage *)image:(nonnull UIImage*)backgroundImage addingOnTop:(nonnull NSArray<OTMPImageWithFrame*>*) imagesToAdd;

@end
