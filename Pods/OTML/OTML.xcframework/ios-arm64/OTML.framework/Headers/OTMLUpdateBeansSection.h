//
//  OTMLUpdateBeansSection.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLUpdateSection.h"

@interface OTMLUpdateBeansSection : OTMLUpdateSection

@property (nonatomic, strong, readonly) NSDictionary * otmlBeanSet;
@property (nonatomic, strong, readonly) NSDictionary * appBeanSet;
@property (nonatomic, strong, readonly) NSDictionary * addonsBeanSet;

@end
