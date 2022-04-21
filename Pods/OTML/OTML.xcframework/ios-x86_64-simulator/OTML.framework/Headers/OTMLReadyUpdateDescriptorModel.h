//
//  OTMLReadyUpdateDescriptorModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 24/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLAbstractUpdateDescriptorModel.h"
#import "OTMLStorableDescriptorModel.h"

@interface OTMLReadyUpdateDescriptorModel : OTMLStorableDescriptorModel

@property (nonatomic, strong) NSError * commitError;

-(BOOL)upgradeReadyToCurrent;
-(BOOL)isDescriptorReadyToBeCommitted;


@end
