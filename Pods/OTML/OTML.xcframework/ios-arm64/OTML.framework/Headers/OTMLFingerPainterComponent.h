//
//  OTMLFingerPrinter.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 14/01/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"

@protocol OTMLFingerpaintDrawingDelegate <NSObject>

@optional
-(void)didStartDrawing;

@optional
-(void)hasDrawing;

@end

@interface OTMLFingerPainterComponent : OTMLComponent <OTMLFingerpaintDrawingDelegate>

@end
