//
//  OTMLAdvancedUpdaterManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLUpdateManifestSection.h"
#import "OTMLUpdateResult.h"
#import "OTMLUpdTraceModel.h"


@protocol OTMLAdvancedUpdaterDelegate <NSObject>

//update start
-(void)otmlUpdateDidStartUpdating; //la procedura di update è iniziata

//contents download
-(void)otmlUpdateDidStartDownloadResources; //lanciato quando l'app ha capito che il nuovo descrittore contiene un manifest con nuove risorse
-(void)otmlUpdateDidDownloadAResourceWithGlobalPercentage:(float)percent;

//procedure completed
-(void)otmlUpdateDidFinishWithResult:(OTMLUpdateResult*)aResult andError:(NSError*)anError;

/*******/


@end


typedef NS_ENUM(unsigned int, OTMLUpdateProcedureSkipReason) {
    OTMLUpdateProcedureSkipReason_noskip,
    OTMLUpdateProcedureSkipReason_updating,
    OTMLUpdateProcedureSkipReason_disabled_mode,
};

typedef NS_ENUM(unsigned int, OTMLUpdateProcedureStartReason) {
    OTMLUpdateProcedureStartReason_startapp,
    OTMLUpdateProcedureStartReason_restartapp,
    OTMLUpdateProcedureStartReason_updateapp,
    OTMLUpdateProcedureStartReason_push,
    OTMLUpdateProcedureStartReason_periodic
};


/*
 Razionale:
 il delegato ha responsabilità di notificare lo stato del ciclo di vita dell'update (start, ..., end)
 Il OTMLAdvancedUpdaterDelegateBase consente di configurare alcuni aspetti che variano, anche usando lo stesso delegato, in base a diversi fattori
 come: sono partito in bg, sto facendo un update_app, ecc.
 */
@interface OTMLAdvancedUpdaterDelegateBase : NSObject <OTMLAdvancedUpdaterDelegate>

typedef void(^OTMLUpdateCallback)(OTMLUpdateResult*param, NSError*error);

@property (nonatomic, copy) OTMLUpdateCallback otmlUpdateDidCompletedBlock;

/**
 usato solo per restartare l'app, non vengono applicati bean, stringhe
 **/

@property (nonatomic, assign) OTMLUpdateProcedureStartReason startReason;
@property (nonatomic, strong) OTMLUpdTraceModel * updaterTrace;

-(BOOL)isUpdateAsync;

@end




@interface OTMLAdvancedUpdaterManager : NSObject

@property (nonatomic, assign) BOOL isUpdating;
@property (nonatomic, strong, readonly) OTMLUpdTraceModel * updaterTrace;
@property (nonatomic, copy) void (^postUpdateCompletionBlock)(void);

+(instancetype)getInstance;

-(void)startOtmlUpdateProcedureWithDelegate:(OTMLAdvancedUpdaterDelegateBase*)aDelegate;


@end
