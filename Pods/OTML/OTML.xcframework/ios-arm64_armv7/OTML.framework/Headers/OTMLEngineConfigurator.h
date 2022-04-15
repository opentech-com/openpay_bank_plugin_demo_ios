//
//  OTMLEngineConfigurator.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 14/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLEngineBeanModel.h"
#import "OTMLStringsModel.h"
#import "OTMLEngineFactoryModel.h"
#import "OTMLEngineConfiguration.h"

typedef enum {
    OTMLDeviceType_Phone = 0,
    OTMLDeviceType_Tablet = 1
} OTMLDeviceType;

@protocol OTMLEngineConfiguratorProvider <NSObject>

-(void)willProcessConfiguratorProvider;

-(void)step1_setupModules;

-(void)step2_configureFactory:(OTMLEngineFactoryModel* _Nonnull)aFactoryModel;
-(void)step3_configureBean:(OTMLEngineBeanModel* _Nonnull)aBeanModel;
-(void)step4_configureStrings:(OTMLStringsModel* _Nonnull)aStringsModel;

-(void)step5_configureLibs;

-(void)didProcessConfiguratorProvider;

@end

@interface SimpleEngineConfiguratoinProvider : NSObject<OTMLEngineConfiguratorProvider>
@end

@interface OTMLEngineConfigurator : NSObject

@property (nonnull, nonatomic, strong) OTMLEngineConfiguration * currentConfiguration;


@property (nonatomic, assign) BOOL isAntitamperingReady;
@property (nonatomic, assign) BOOL isTraceReady;
@property (nonatomic, assign) BOOL isFactoryReady;
@property (nonatomic, assign) BOOL isFontReady;
@property (nonatomic, assign) BOOL isBeanReady;
@property (nonatomic, assign) BOOL isStringsReady;
@property (nonatomic, assign) BOOL isAddonReady;

+ (nonnull OTMLEngineConfigurator*)getInstance;
- (OTMLDeviceType) currentOTMLDeviceType;
- (void)addConfiguratorProvider:(NSObject<OTMLEngineConfiguratorProvider>* _Nonnull)aProvider;


- (void)doConfigureOTMLEngine;
- (void)doConfigureOTMLEngineWithProvider:(NSObject<OTMLEngineConfiguratorProvider>* _Nonnull)aProvider;

@end
