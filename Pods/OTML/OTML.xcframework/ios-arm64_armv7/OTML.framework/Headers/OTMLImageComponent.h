//
//  OTMLImage.h
//  OTML
//
//  Created by Alessandro Ruggeri on 11/06/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"
#import "OTMLImage.h"
#import <OTMLModels/OTMLImageContentScale.h>

@interface OTMLImageComponent : OTMLComponent <OTMLStatefulComponent>{
    @protected OTMLImage * image_n;
    @protected OTMLImage * image_p;
    @protected OTMLImage * image_s;
    @protected OTMLImage * image_sp;
    @protected OTMLImage * image_d;
}

@property (nonatomic, readonly)UIImageView* imageView;


@end
