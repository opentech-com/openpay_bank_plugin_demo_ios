//
//  OTMLCoreFeaturesRelatedCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 26/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLActionCommandSet.h"

@interface OTMLDownloadCommand : OTMLActionCommand <UIDocumentInteractionControllerDelegate>
@end


@interface OTMLBackToCallingAppCommand : OTMLActionCommand
@end

@interface OTMLCloseAppCommand : OTMLActionCommand
@end

@interface OTMLCloseSDKCommand : OTMLActionCommand
@end

@interface StartOTMLUpdateAndCLoseSDK : OTMLActionCommand
@end

@interface OTMLBackCommand : OTMLActionCommand
@end

@interface OTMLRestartAppCommand : OTMLActionCommand
@end

@interface OTMLHideKeyboardCommand : OTMLActionCommand
@end

@interface OTMLExecuteTriggerCommand : OTMLActionCommand
@end

@interface OTMLSessionTrackCommand : OTMLActionCommand
@end

@interface UpdateAppCommand : OTMLActionCommand
@end

@interface SetEventValueCommand : OTMLActionCommand
@end

@interface NotifyEventLegacyCommand : OTMLActionCommand
@end


NS_ASSUME_NONNULL_BEGIN
@interface NotifyEventWithCallbackCommand : OTMLActionCommand
typedef void (^OTNotifyEventCallback)(NSInteger resultCode, NSDictionary* _Nullable result);

+(void) addObserverWithID:(NSString*) callbackID
             withCallback:(OTNotifyEventCallback) callback;

+(void) consumeCallBackWithID:(NSString*) callbackID
               withResultCode:(NSInteger) resultCode
                    andResult:(nullable NSDictionary*) dictionary;

@end
NS_ASSUME_NONNULL_END

@interface RemoveValueCommand : OTMLActionCommand
@end    //remove_event_value

@interface OTMLStateTraceCommand : OTMLActionCommand
@end

@interface OTMLCoreFeaturesRelatedCommand : OTMLActionCommandSet

@end
