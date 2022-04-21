//
//  OTMPPolyline.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 12/08/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface OTMPPolygon : NSObject

+ (MKPolygon *)polygonWithGMEncodedString:(NSString *)encodedString;

@end
