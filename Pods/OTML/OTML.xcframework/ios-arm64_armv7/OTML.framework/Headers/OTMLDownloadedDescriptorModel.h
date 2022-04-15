//
//  OTMLDownloadedDescriptorModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 27/08/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLAbstractUpdateDescriptorModel.h"

@interface OTMLDownloadedDescriptorModel : OTMLAbstractUpdateDescriptorModel

@property int nonce;

-(id)initWithData:(NSData*)aFullResponseData;

@end
