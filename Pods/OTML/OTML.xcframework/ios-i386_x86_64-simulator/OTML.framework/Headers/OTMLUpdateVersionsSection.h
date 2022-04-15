//
//  OTMLUpdateVersionsSection.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLUpdateSection.h"

@interface OTMLUpdateVersionsSection : OTMLUpdateSection

@property (nonatomic, strong) NSString* manifestVersion;
@property (nonatomic, strong) NSString* datasourcesVersion;
@property (nonatomic, strong) NSString* actionsVersion;
@property (nonatomic, strong) NSString* stringsVersion;
@property (nonatomic, strong) NSString* beanVersion;

-(NSString*)getAggregateVersion;

@end
