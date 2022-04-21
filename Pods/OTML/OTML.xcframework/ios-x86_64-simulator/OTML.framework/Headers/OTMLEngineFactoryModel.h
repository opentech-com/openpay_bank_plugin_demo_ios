//
//  OTMPFactoriesDataBean.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 19/12/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLCustomPopupFactory.h"

@protocol OTMLCustomActionResolver;
@protocol OTMLPushNotificationDisplayerProtocol;
@protocol OTMLHeaderNotificationDelegate;
@protocol OTMLCustomComponentFactory;
@protocol OTMLCustomPopupFactory;
@protocol ComponentFactoryInterface;



@interface OTMLEngineFactoryModel : NSObject

@property (nonatomic, strong, readonly) NSMutableArray* customActionResolvers;
@property (nonatomic, strong, readonly) NSMutableArray* customNotificationHandlers;
@property (nonatomic, strong, readonly) NSMutableArray* customComponentFactories;
@property (nonatomic, strong, readonly) NSMutableArray* customComponentModelFactories;

@property (nonatomic, strong) id<OTMLCustomPopupFactory> customPopupFactory;


-(void)addComponentModelFactory:(NSObject<ComponentFactoryInterface>*)aComponentModelFactory;
-(void)addActionResolver:(NSObject<OTMLCustomActionResolver>*)aResolver;
-(void)addNotificationHandler:(NSObject <OTMLPushNotificationDisplayerProtocol, OTMLHeaderNotificationDelegate>*)aNotificationHandler;
-(void)addComponentFactory:(NSObject<OTMLCustomComponentFactory>*)aComponentFactory;
-(void)setPopupFactory:(NSObject<OTMLCustomPopupFactory>*)aPopupFactory;


@end
