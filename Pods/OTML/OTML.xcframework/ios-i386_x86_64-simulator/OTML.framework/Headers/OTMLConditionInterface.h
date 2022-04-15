//
//  OTMLConditionInterface.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

@class OTMLComponent;

@protocol OTMLConditionInterface <NSCopying>

@property(nonatomic, retain) OTMLComponent* sourceComponent;

-(BOOL)isValid;

@end
