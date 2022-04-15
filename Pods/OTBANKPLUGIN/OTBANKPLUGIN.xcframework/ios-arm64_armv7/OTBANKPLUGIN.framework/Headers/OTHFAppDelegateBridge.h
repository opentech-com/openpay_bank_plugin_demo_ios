//
//  OTHFAppDelegateBridge.h
//  OTBANKPLUGIN
//
//  Created by Valerio Ferrantelli on 25/07/18.
//

typedef enum{
    OTHFNotificationManagementResultHandled = 0,
    OTHFNotificationManagementResultAppStateNotSupported,
    OTHFNotificationManagementResultPayloadNotSupported
}OTHFNotificationManagementResult;

NS_ASSUME_NONNULL_BEGIN



@interface OTHFAppDelegateBridge : NSObject

+ (instancetype)sharedInstance;

/*
Notifications callbacks
*/

-(BOOL)shouldSDKManageRemoteNotification:(NSDictionary *)userInfo;

//Remote
-(OTHFNotificationManagementResult)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(nonnull void (^)(UIBackgroundFetchResult))completionHandler;

-(BOOL)application:(UIApplication *)application handleActionWithIdentifier:(NSString *)identifier forRemoteNotification:(nonnull NSDictionary *)userInfo completionHandler:(nonnull void (^)(void))completionHandler;

//Local
-(void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification;

-(void)application:(UIApplication *)application handleActionWithIdentifier:(NSString *)identifier forLocalNotification:(UILocalNotification *)notification completionHandler:(void (^)(void))completionHandler;

//Registration
- (void)application:(UIApplication *)application didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings;

- (void)application:(UIApplication *)app didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)devToken;

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;


/*
External Events callbacks
*/
-(void)application:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

-(BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;

-(BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray * _Nullable))restorationHandler;

NS_ASSUME_NONNULL_END

@end
