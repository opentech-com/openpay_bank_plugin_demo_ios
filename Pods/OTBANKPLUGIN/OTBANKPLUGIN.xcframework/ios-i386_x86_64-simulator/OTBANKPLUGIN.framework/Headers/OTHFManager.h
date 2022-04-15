//
//  OMVInnerToken.h
//  OMV
//
//  Created by ios@opentech.com on 11/06/18.
//  Copyright (c) 2015-2022 openteoh.com All rights reserved.
//



typedef NS_ENUM(NSUInteger, OTSessionTokenRefreshResult) {
    /// The card number does not correspond to any recognizable card type.
    OTSessionTokenRefreshResult_SUCCESS=0,
    OTSessionTokenRefreshResult_SESSION_EXPIRED=-1,
    OTSessionTokenRefreshResult_GENERIC_ERROR=-2
};

typedef NS_ENUM(NSUInteger, OTSCARequestedResult) {
    /// The card number does not correspond to any recognizable card type.
    OTSCARequestedResult_SUCCESS=0,
    OTSCARequestedResult_GENERIC_ERROR=-1,
    OTSCARequestedResult_CANCELLED=-2
};

@interface OTHFManager : NSObject

NS_ASSUME_NONNULL_BEGIN

typedef void (^OTSessionTokenRefreshResultHandler)(NSString* _Nullable refreshedToken, OTSessionTokenRefreshResult result);
/**
 It is required a Strong Costumer Authentication (eg: read a secret value protected by biometric authentication)

 @param scaResult optional data associated to the scaAuthentication
 @param result sca result could be a success, error or user cancelled
 */
typedef void (^OTSCARequestedResultHandler)(NSString* _Nullable scaResult, OTSCARequestedResult result);
typedef void (^OTHFCompletitionBlock)(NSObject* _Nullable param, NSError* _Nullable error);
typedef void (^OTHFActionCallback)(NSInteger resultCode, NSDictionary* _Nullable result);

+ (void) setSessionTokenRefreshRequiredHandler:(void (^_Nonnull)(NSString* oldToken, OTSessionTokenRefreshResultHandler othfHandler)) refreshHandler;


/**
 Configures the SCA, see also OTSCARequestedResultHandler
 @param scaRequestedHandler callback for the strong costumer authentication the hosting app has its own requisites for the authentication,
 */
+ (void) setScaRequestedHandler:(void (^_Nonnull)(UIViewController* otvc, NSString* scaPayload, OTSCARequestedResultHandler othfHandler)) scaRequestedHandler;

/**
 Executes an action. When the action is terminated the completion will be called.
 @param anActionIdentifier is the identifier of the action, please ask Opentech what actions are you allowed to perform
 @param userInfo contains optional additional parameters, can be nil
 @param completion this codeblock has a result code of the requested action and an optional dictionary when the action has some data to share
 */
+(void)executeActionWithID:(NSString*)anActionIdentifier
              withUserInfo:(NSDictionary*)userInfo
            withCompletion:(OTHFActionCallback)completion;

/**
 Check if the SDK library is on the screen
 @note When the SDK is launched it generate a new UIWindow and use it for its presentation. When the SDK is closed the previus window is keyed.
 @return YES if the SDK is on the screen
 */
+(BOOL)isOTHFOnScreen;


/**
 Initializes the OTHF library with the configuration file provided by Opentech
 
 @param filePath the file path of the configuration file. The path can be obtained with [[NSBundle mainBundle] pathForResource:@"my_file_name" ofType:@"otml"]
 @param anError an error if occurred
 
 @note In case of error the api return an NSError with domain otml_configuration_error and different error codes:
 0: file not found
 1-5: security error: please contact Opentech
 Other errors thrown by this api (see ERRORS MANAGEMENT):
 - Parameter errors
 
 This method must be called as soon as possible, the best option is to call it into the -(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
 
 @return YES if the configuration completes without errors, NO otherwise (see anError for details)
 */
+(BOOL)configureWithFile:(NSString *)filePath withError:(NSError*__autoreleasing*)anError;



/**
 Shows the first screen
 
 @param target to be defined with Opentech
 @param options to be defined with Opentech

 The method is asynchronous
 
 */
+(void)launch:(NSString*)target options:(NSDictionary*)options;



/**
 Return an instance of NSNotificationCenter, different from the defaultCenter in order to ensure data segmentation, where the OTHF library send asynchronous events.
 
 @return NSNotificationCenter instance
 */
+(NSNotificationCenter*)sdkToAppNotificationCenter;


/**
 Return a JSON object generated and stored persistently by SDK side.
 @param key is json identifier
 @return NSDictionary is the JSON object. It return nil if the data was not found or an error occurred.
 */
+(NSDictionary*)readData:(NSString*)key;

/**
 Called when the SDK is about to be dismissed
 @param anHandler the completion block to execute
 */
+(void)sdkDidCloseCompletitionHandler:(OTHFCompletitionBlock)anHandler;

/**
 Called when the SDK is about to be presented
 @param anHandler the completion block to execute
 */
+(void)sdkDidOpenCompletitionHandler:(OTHFCompletitionBlock)anHandler;

/**
 Open Passbook selecting the first virtualized card matching the provided suffix
 @param aSuffix the suffix that the card needs to have
 @return YES if AppleWallet has been opened
 @note Will allways return NO in iOS < 8
 **/
+(BOOL) openCardInfoInAppleWalletForFirstCardWithSuffix:(nullable NSString*)aSuffix;

+(NSDictionary*)versions;

NS_ASSUME_NONNULL_END

@end

