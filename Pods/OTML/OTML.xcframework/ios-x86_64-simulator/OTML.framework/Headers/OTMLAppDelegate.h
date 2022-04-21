//
//  OTMLAppDelegate.h
//  OTML_iOS_Framework_pod
//
//  Created by Valerio Ferrantelli on 12/07/18.
//


@protocol OTMLEngineConfiguratorProvider;
@class OTMLContextDescriptor;
@class OTMLUpdaterConfiguration;
#import "OTMLExternalEventAbstractProcessor.h"

#import <OTMLCore/NSObject+Delayed.h>
NS_ASSUME_NONNULL_BEGIN
@interface OTMLAppDelegate : NSObject

@property (nonatomic, assign, readonly) BOOL isOTHFOnScreen;
@property (strong, nonatomic, nonnull, readonly) UIWindow *window;

+(nonnull OTMLAppDelegate*)currentAppDelegate;
+(void)setAppDelegate:(nonnull OTMLAppDelegate*)aDelegate;

@property (nonatomic, readonly) NSString * appVariantBranding;
//SDK

- (void)configureSDK;
- (void)startSDK;
- (void)closeSDK;
- (void)setCloseHandler:(OTMLSimpleCallback)anHandler;
- (void)setOpenHandler:(OTMLSimpleCallback)anHandler;
- (void)didEndPerformAppRequiredInteraction;

//APP

//TO OVERRIDE

-(nonnull NSObject<OTMLEngineConfiguratorProvider>*) getAppSideOTMLConfigurationProvider;
-(nonnull UINavigationBar*)getCustomNavigationBar;
-(nonnull OTMLContextDescriptor*) newContextDescriptor;
-(nonnull NSDictionary<NSNumber*,OTMLExternalEventAbstractProcessor*>*) getAppSideCustomExternalEventProcessor;

-(void) restartapp;
-(void) updateapp;
-(void) asyncUpdateApp;

// gestione eventi SDK

-(void)sdkDidLauchWithTarget:(nonnull NSString*)aTarget andOptions:(nonnull NSDictionary*)options;


// gestione eventi AppDelegate

-(void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(nonnull void (^)(UIBackgroundFetchResult))completionHandler;
-(BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray * _Nullable))restorationHandler;
-(BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
-(void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification;
-(void)application:(UIApplication *)application handleActionWithIdentifier:(NSString *)identifier forLocalNotification:(UILocalNotification *)notification completionHandler:(void (^)(void))completionHandler;
-(void)application:(UIApplication *)application handleActionWithIdentifier:(NSString *)identifier forRemoteNotification:(nonnull NSDictionary *)userInfo completionHandler:(nonnull void (^)(void))completionHandler;

- (void)application:(UIApplication *)application didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings;
- (void)application:(UIApplication *)app didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)devToken;
- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;

// metodi di utilità
-(void) performAppRequiredInteraction;
-(void) enableScrollViewsAutomatiContentInsetAdjustmentBehavior;
-(void) disableScrollViewsAutomatiContentInsetAdjustmentBehavior;
-(void) enableTableViewsAutomatiContentInsetAdjustmentBehavior;
-(void) disableTableViewsAutomatiContentInsetAdjustmentBehavior;

-(void)screenViewControllerDidAppear;

-(NSString* _Nonnull)getAppVariantBranding;

-(void) registerForRemoteNotificationsWithTimerSafeguards;
-(void) onOTMLSetupCompleted;

NS_ASSUME_NONNULL_END







@end
