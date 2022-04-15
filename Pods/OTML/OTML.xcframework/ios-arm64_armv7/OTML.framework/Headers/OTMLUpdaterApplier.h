//
//  OTMLUpdaterApplier.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLAdvancedUpdaterManager.h"

@interface OTMLUpdaterApplier : NSObject

-(void)applyCurrentDescriptorSections;
-(void)executeActions;

@end
