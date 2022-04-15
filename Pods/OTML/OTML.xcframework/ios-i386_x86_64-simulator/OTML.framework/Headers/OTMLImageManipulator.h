//
//  OTMLImageManipulator.h
//  OTMLFramework
//
//  Created by enrico on 24/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@class OTMLImage;
@class OTMLParameterEntry;

typedef enum {
    OTMLImageManipulatorScaleMode_fit = 0,
    OTMLImageManipulatorScaleMode_fill_top_left = 1,
    OTMLImageManipulatorScaleMode_fill_top_center = 2,
    OTMLImageManipulatorScaleMode_fill_top_right = 3,
    OTMLImageManipulatorScaleMode_fill_middle_left = 4,
    OTMLImageManipulatorScaleMode_fill_middle_center = 5,
    OTMLImageManipulatorScaleMode_fill_middle_right = 6,
    OTMLImageManipulatorScaleMode_fill_bottom_left = 7,
    OTMLImageManipulatorScaleMode_fill_bottom_center = 8,
    OTMLImageManipulatorScaleMode_fill_bottom_right = 9
} OTMLImageManipulatorScaleMode;

/**
 la configurazione è valida se fornite entrambe le proprietà crop_width_{perc,abs} e crop_height_{perc,abs}
 crop_center_x_perc, crop_center_y_perc: punto centrale del rettangolo di cropping espresso in percentuale rispetto alle dimensioni originali dell'immagine sorgente. 50, 50 significa posizionare il punto di crop al centro dell'immagine. Se non è stato fornito alcun cropping origin (center o offset), si assume 50. Tipo: float
 crop_center_x_abs, crop_center_y_abs: punto centrale del rettangolo di cropping espresso in distanza assoluta in pixel rispetto alle dimensioni originali dell'immagine sorgente.
 crop_left_offset_abs, crop_top_offset_abs: punto in alto a sinistra del rettangolo di cropping, espresso come offset dal lato sinistro e dal lato superiore dell'immagine originaria
 crop_width_perc, crop_height_perc: dimensioni desiderate di uscita dell'immagine dopo il cropping, espresse in percentuale rispetto all'immagine originaria.
 crop_width_abs, crop_height_abs: dimensioni desiderate di uscita dell'immagine dopo il cropping, espresse in pixel.
  @see <a href="http://wiki.opentech.com/doku.php?id=otml:pmode_image_manipulation">Parameter mode image_manipulation</a>
 */
@interface OTMLImageManipulatorCropConfig : NSObject

-(nonnull instancetype)initWithResolvedParams:(nullable NSArray<OTMLParameterEntry*>*) resolvedParams defaultOriginXPerc:(nullable NSNumber*)defXPerc defaultOriginYPerc:(nullable NSNumber*)defYPerc;

@property (nonatomic, strong) NSNumber* __nullable centerXPerc;
@property (nonatomic, strong) NSNumber* __nullable centerYPerc;
@property (nonatomic, strong) NSNumber* __nullable centerXAbs;
@property (nonatomic, strong) NSNumber* __nullable centerYAbs;
@property (nonatomic, strong) NSNumber* __nullable originXAbs;
@property (nonatomic, strong) NSNumber* __nullable originYAbs;
@property (nonatomic, strong) NSNumber* __nullable widthPerc;
@property (nonatomic, strong) NSNumber* __nullable heightPerc;
@property (nonatomic, strong) NSNumber* __nullable widthAbs;
@property (nonatomic, strong) NSNumber* __nullable heightAbs;

@property (nonatomic, readonly) BOOL isCenterXPerc;
@property (nonatomic, readonly) BOOL isCenterYPerc;
@property (nonatomic, readonly) BOOL isCenterXAbs;
@property (nonatomic, readonly) BOOL isCenterYAbs;
@property (nonatomic, readonly) BOOL isOriginXAbs;
@property (nonatomic, readonly) BOOL isOriginYAbs;
@property (nonatomic, readonly) BOOL isWidthPerc;
@property (nonatomic, readonly) BOOL isHeightPerc;
@property (nonatomic, readonly) BOOL isWidthAbs;
@property (nonatomic, readonly) BOOL isHeightAbs;

@property (nonatomic, readonly) CGFloat centerXPercValue;
@property (nonatomic, readonly) CGFloat centerYPercValue;
@property (nonatomic, readonly) CGFloat centerXAbsValue;
@property (nonatomic, readonly) CGFloat centerYAbsValue;
@property (nonatomic, readonly) CGFloat originXAbsValue;
@property (nonatomic, readonly) CGFloat originYAbsValue;
@property (nonatomic, readonly) CGFloat widthPercValue;
@property (nonatomic, readonly) CGFloat heightPercValue;
@property (nonatomic, readonly) CGFloat widthAbsValue;
@property (nonatomic, readonly) CGFloat heightAbsValue;

@property (nonatomic, readonly) BOOL isValid;

@end

/**

 la configurazione è valida se fornita almeno una proprietà scale_{width,height}_{perc,abs}. Se viene fornita una sola dimensione, la dimensione non fornita sarà calcolata secondo il rapporto di scala. Se sono fornite entrambe si assume che l'immagine non debba rispettare il rapporto di scala dell'immagine in input.
 scale_width_perc, scale_height_perc: dimensioni desiderate di uscita dell'immagine dopo la scalatura, espresse in percentuale rispetto all'immagine croppata. Tipo: float. Valori minori di 100 riducono le dimensioni, valori maggiori di 100 incrementano le dimensioni.
 scale_width_abs, scale_height_abs: dimensioni desiderate di uscita dell'immagine dopo la scalatura, espresse in pixel. valori minori delle dimensioni dell'immagine originale riducono le dimensioni, valori maggiori dell'immagine originale incrementano le dimensioni.
 keep aspect ratio: Durante la scalatura si assume implicitamente true se è data una sola dimensione di scaling (in tal caso la dimensione non fornita sarà calcolata automaticamente secondo il rapporto di scala). Qualora invece sono fornite entrambe le dimensioni di scaling (with, height) si assume implicitamente keep aspect ratio come false
  @see <a href="http://wiki.opentech.com/doku.php?id=otml:pmode_image_manipulation">Parameter mode image_manipulation</a>
 */
@interface OTMLImageManipulatorScaleConfig : NSObject

-(nonnull instancetype)initWithResolvedParams:(nullable NSArray<OTMLParameterEntry*>*) resolvedParams;

@property (nonatomic, strong) NSNumber* __nullable widthPerc;
@property (nonatomic, strong) NSNumber* __nullable heightPerc;
@property (nonatomic, strong) NSNumber* __nullable widthAbs;
@property (nonatomic, strong) NSNumber* __nullable heightAbs;

@property (nonatomic, readonly) BOOL isWidthPerc;
@property (nonatomic, readonly) BOOL isHeightPerc;
@property (nonatomic, readonly) BOOL isWidthAbs;
@property (nonatomic, readonly) BOOL isHeightAbs;
@property (nonatomic, readonly) OTMLImageManipulatorScaleMode scaleMode;

@property (nonatomic, readonly) CGFloat widthPercValue;
@property (nonatomic, readonly) CGFloat heightPercValue;
@property (nonatomic, readonly) CGFloat widthAbsValue;
@property (nonatomic, readonly) CGFloat heightAbsValue;

@property (nonatomic, readonly) BOOL keepAspectRatio;

@property (nonatomic, readonly) BOOL isValid;

@end

@interface OTMLImageManipulator : NSObject

- (nonnull instancetype) init __attribute__((unavailable("init not available")));
- (nonnull instancetype) initWithOTMLImage:(nonnull OTMLImage*)aOTMLImage;

- (void) multiplyByColor:(nullable UIColor*)aColor;
- (void) blurWithRadius:(CGFloat)aBlurRadius;
- (void) circleCrop;

/**
 Apply a rotation transformation
 @param degree the degree angle. A positive value specifies counterclockwise rotation and a negative value specifies clockwise rotation. A degree <1 or >360 will return the original image
 */
- (void) rotateByAngle:(CGFloat)degree;
- (void) mirroHorizontally;
- (void) mirroVertically;
- (void) cropWithRect:(CGRect)aCroppingRect;

/**
 perform a crop to the current image according to the crop config.
 @discussion If aConfig is nil or is not valid, no crop will be applied.
 **/
- (void) cropWithCropConfig:(nullable OTMLImageManipulatorCropConfig*) aConfig;
- (void) scaleToSize:(CGSize)aSize;
- (void) scaleWithScaleConfig:(nullable OTMLImageManipulatorScaleConfig*) aConfig;
- (nullable OTMLImage*) manipulatedImage;

/**
 Applies the transformation described in the string array using the sequence defined in the array itself.
 @param srcImage the image to manipulate. a nil image will produce a nil result
 @param imageDirectivities the array of string. Each string describe a single transformation. a nil or empty array will return the original image
 @return the manipulated image
 */
+(nullable OTMLImage*) transformImage:(nullable OTMLImage*)srcImage usingTransformStringDirectivities:(nullable NSArray<NSString*>*) imageDirectivities;

/**
 Apply a color multiplication to the srcImage
 @param srcImage the image to manipulate. a nil image will produce a nil result
 @param aColor the multiplication color. a nil color will return the original image
 @return the manipulated image
 */
+(nullable OTMLImage*) transformImage:(nullable OTMLImage*)srcImage multipliedBycolor:(nullable UIColor*)aColor;

/**
 Apply a gaussian blur effect to the srcImage
 @param srcImage the image to manipulate. a nil image will produce a nil result
 @param aBlurRadius the blur radius. A positive value <= 0 will return the original image
 @return the manipulated image
 */
+(nullable OTMLImage*) transformImage:(nullable OTMLImage*)srcImage blurredWithRadius:(CGFloat)aBlurRadius;

/**
 Apply a rotation transformation to the srcImage
 @param srcImage the image to manipulate. a nil image will produce a nil result
 @param degree the degree angle. A positive value specifies counterclockwise rotation and a negative value specifies clockwise rotation. A degree <1 or >360 will return the original image
 @return the manipulated image
 */
+(nullable OTMLImage*) transformImage:(nullable OTMLImage*)srcImage rotatedByAngle:(CGFloat)degree;


/**
 Apply a mirroring transformation to the srcImage
 @param srcImage the image to manipulate. a nil image will produce a nil result
 @param hor if true the image will be mirrored horizzontally. If false will be mirrored vertically
 @return the manipulated image
 */
+(nullable OTMLImage*) transformImage:(nullable OTMLImage*)srcImage mirrotingHorizontal:(BOOL)hor;

/**
 @discussion Apply a crop transformation to the srcImage
 @param srcImage the image to manipulate. a nil image will produce a nil result
 @param aCroppingRect the cropping rect. Only the intersection with image bounds will be applied (eg. negative origin will clip the clipping rect to origin resizing its size). Zero rect will return nil image.
 @return the manipulated image
 @note the image is not scaled. The padding and tcap/lcap are clipped. Use the configuration Method for additional options
 */
+(nullable OTMLImage*) transformImage:(nullable OTMLImage*)srcImage croppingWithRect:(CGRect)aCroppingRect;

/**
 Apply a scale transformation to the srcImage
 @param srcImage the image to manipulate. a nil image will produce a nil result
 @param aSize the target size. Zero size will return nil image.
 @return the manipulated image
 @note the image does not keep ratio. It is just resized to target size. Use the configuration Method for additional options
 */
+(nullable OTMLImage*) transformImage:(nullable OTMLImage*)srcImage scalingToSize:(CGSize)aSize;

@end
