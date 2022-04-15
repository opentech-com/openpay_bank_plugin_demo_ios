//
//  OTMLImageResolver.h
//  OTML
//
//  Created by Alessandro Ruggeri on 11/06/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


#import "OTMLImage.h"
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@class OTMLImageDescriptor;
@class OTMLParameter;

typedef enum {
    OTMLImageResolverLocation_resource = 0,
    OTMLImageResolverLocation_file = 1,
    OTMLImageResolverLocation_mem = 2
} OTMLImageResolverLocation;

@interface OTMLImageResolverLocationSupport : NSObject

+(OTMLImageResolverLocation) valueFromString:(nullable NSString*) aStringValue;
+(nonnull NSString*) stringFromValue:(OTMLImageResolverLocation) aValue;

@end


@interface OTMLImageResolver : NSObject <OTMLRestartAppAwareProtocol>

-(nonnull instancetype) init __attribute__((unavailable("init not available")));

+ (nonnull instancetype)sharedInstance;

/**
 @discussion 
  Clean the image buffer in use to avoid multple file loading
 */
-(void)cleanImgBuffer;

/**
 @discussion 
  Returns an OTMLImage giving its description.
 @param otmlImageFromDescriprion
  the String representing the OTMLImage. This can be a resource name or a B64:<b64data> description
 @return 
  the OTMLImage or nil if the image cannot be built
 */
-(nullable OTMLImage*) otmlImageFromDescriprion:(nullable NSString*) otmlImageFromDescriprion;

/**
 @discussion 
  Create an OTMLImage from OTML Resources defined in the current manifest update.
 @note 
  DO NOT use this method directly if you just want an OTMLImage, please use the otmlImageFromDescriprion methods
 @param aOTMLResourceName 
  The otml resource name
 @return 
  the OTMLImage or nil if the image cannot be built
 **/
-(nullable OTMLImage*) createOTMLImageFromOTMLResourcesWithName:(nullable NSString*) aOTMLResourceName;

/**
 @discussion 
  Create an OTMLImage from Base64.
 @note 
  DO NOT use this method directly if you just want an OTMLImage, please use the otmlImageFromDescriprion methods
 @param aBase64String
  The base 64 string representing an image data. Note that this string DOES NOT INCLUDES the B64 prefix
 @param aOTMLImageDescriptor 
  The OTMLImageDescriptor
 @return 
  the OTMLImage or nil if the image cannot be built
 **/
-(nullable OTMLImage*) createOTMLImageFromBase64String:(nullable NSString*) aBase64String
                                        withDescriptor:(nullable OTMLImageDescriptor*)aOTMLImageDescriptor;

/**
 @discussion
  Makes an OTMLImage from UIImage.
 @param aUIImage 
  The image to convert
 @param aOTMLImageDescriptor 
  The OTMLImageDescriptor
 @return 
  the OTMLImage
 **/
-(nullable OTMLImage*) createOTMLImageFromUIImage:(nullable UIImage*) aUIImage
                                   withDescriptor:(nullable OTMLImageDescriptor*)aOTMLImageDescriptor;

-(nullable NSString*) saveOTMLImage:(nullable OTMLImage*)aOTMLImage
                InFileOrMemWithPath:(nullable NSString*)aImageFilePath
                             format:(OTMLImageOutputFormat)outputFormat
                            quality:(NSInteger)aQuality;

@end
