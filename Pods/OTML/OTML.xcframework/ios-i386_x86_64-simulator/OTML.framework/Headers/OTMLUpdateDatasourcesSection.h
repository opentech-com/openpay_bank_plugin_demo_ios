//
//  OTMLUpdateDatasourcesSection.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLUpdateSection.h"

@class OTMLDatasourcesModel;



@interface OTMLUpdateDatasourcesSection : OTMLUpdateSection

@property (nonatomic, strong, readonly) NSDictionary * datasource;


@end
