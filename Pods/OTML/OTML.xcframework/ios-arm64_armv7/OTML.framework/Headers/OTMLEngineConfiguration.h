//
//  OTMLEngineConfiguration.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 14/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLStringsModel.h"
#import "OTMLEngineFactoryModel.h"
#import "OTMLEngineBeanModel.h"
#import "OTMLAppExposedHooks.h"

@interface OTMLEngineConfiguration : NSObject

@property (nonatomic, strong) OTMLEngineFactoryModel* factoriesModel;
@property (nonatomic, strong) OTMLStringsModel* stringsModel;
@property (nonatomic, strong) OTMLEngineBeanModel* beanModel;
@property (nonatomic, strong) OTMLAppExposedHooks* hooks;

@end
