//
//  OTMLImage.h
//  OTML
//
//  Created by Alessandro Ruggeri on 03/09/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "OTMLUpdateManifestSection.h"
#import "OTMLManifestAbstractResource.h"

typedef enum {
    OTMLImageOutputFormat_jpg = 0,
    OTMLImageOutputFormat_png = 1
} OTMLImageOutputFormat;

@interface OTMLImageOutputFormatSupport : NSObject

+(OTMLImageOutputFormat) valueFromString:(nullable NSString*) aStringValue;
+(nonnull NSString*) stringFromValue:(OTMLImageOutputFormat) aValue;

@end


@interface OTMLImage : NSObject<NSCopying>

-(nullable instancetype) initWithUIImage:(nonnull UIImage*)anImage
                          imgDescription:(nullable OTMLImageDescriptor*) aImageDescriptor;

-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use OTMLImage +otmlImageFromDescriprion: to build an OTMLImage")));

+(nullable OTMLImage*) otmlImageFromDescriprion:(nullable NSString*) aImgDescription;

@property (nonatomic, readonly) OTMLImageDescriptor* _Nonnull imageDescription;
@property (nonatomic, readonly) UIImage* _Nonnull image;


-(nullable NSData*)imageDataWithFormat:(OTMLImageOutputFormat)outputFormat quality:(NSInteger)aQuality;

/**
 produce a string representing the OTML image with format B64:<image data>
 @param outputFormat export using this format.  Please note that only png supports alpha channel and only jp
 @param aQuality export quality. Please note that only jpeg format will use jpeg quality, but this will not support alpha channel
 @return the OTML Image in string format (B64)
 */
-(nullable NSString*) representInOTMLB64WithFormat:(OTMLImageOutputFormat)outputFormat quality:(NSInteger)aQuality;
-(nullable NSString*) representInFileOrMemWithPath:(nullable NSString*)aImageFilePath format:(OTMLImageOutputFormat)outputFormat quality:(NSInteger)aQuality;

@end
