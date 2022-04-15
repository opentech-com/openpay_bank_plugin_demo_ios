//
//  OTMLFingerPrinterNormalizationHandler.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 14/01/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//


@interface OTMLFingerPrinterNormalizationHandler : NSObject

+(NSString*) base64OfImage:(UIImage*) theImage
        normalizingToWidth:(CGFloat) theWidth
                andQuality:(CGFloat) compressionQuality;

+(UIImage*) resizedImage:(UIImage*) theImage
       normalizedToWidth:(CGFloat) theWidth;

@end
