//
//  Logger.h
//  OTML
//
//  Created by epavoni on 30/12/08.
//  Copyright 2008 Opentech ENG.. All rights reserved.
//

@class OTMLLogModel;

typedef enum{
    LOG_ASPECT_NONE                     = 0,
    LOG_ASPECT_NOTIFICATION_CENTER      = 1 << 0,
    LOG_ASPECT_PARAM_RESOLVE            = 1 << 1,
    LOG_ASPECT_INTERNAL                 = 1 << 2,
    LOG_ASPECT_CONTEXTS           = 1 << 3,
    LOG_ASPECT_EXTERNAL_EVENTS  = 1 << 4,
    LOG_ASPECT_COMPONENT        = 1 << 5,
    LOG_ASPECT_PERMISSIONS      = 1 << 6,
    LOG_ASPECT_STACK            = 1 << 7,
    LOG_ASPECT_NETWORK          = 1 << 8,
    LOG_ASPECT_CRYPTO           = 1 << 9,
    LOG_ASPECT_FRAME            = 1 << 10,
    LOG_ASPECT_LIFECYCLE        = 1 << 11,
    LOG_ASPECT_FILE             = 1 << 12,
    LOG_ASPECT_ACTION           = 1 << 13,
    LOG_ASPECT_CONDITION        = 1 << 14,
    LOG_ASPECT_STYLE            = 1 << 15,
    LOG_ASPECT_DATASOURCE       = 1 << 16,
    LOG_ASPECT_COMPONENT_UPDATE = 1 << 17, //usato poco e male
    LOG_ASPECT_TRIGGERS         = 1 << 18,
    LOG_ASPECT_OTML_UPDATER     = 1 << 19,
    LOG_ASPECT_LOCATION         = 1 << 20,
    LOG_ASPECT_APPLICATION_2    = 1 << 21,
    LOG_ASPECT_ALERT    = 1 << 22,
    LOG_ASPECT_FONT             = 1 << 23,
    LOG_ASPECT_JS               = 1 << 24,
    LOG_ASPECT_WEBVIEW          = 1 << 25,
    LOG_ASPECT_TOUCHID          = 1 << 26,
    LOG_ASPECT_KEYCHAIN         = 1 << 27,
    LOG_ASPECT_MOBILE_TOKEN           = 1 << 28,
    LOG_ASPECT_PUSH_NOTIFICATIONS     = 1 << 29,
    LOG_ASPECT_TRACE                    = 1 << 30,
    LOG_ASPECT_FRONTEND_DEBUG           = 1 << 31, //usato per debug lato front-end
}LOG_ASPECT;

typedef NS_ENUM(NSUInteger,LOG_LEVEL){
    LOG_LEVEL_DEBUG,
    LOG_LEVEL_INFO,
    LOG_LEVEL_WARNING,
    LOG_LEVEL_ERROR,
    LOG_LEVEL_CRITICAL,
    LOG_LEVEL_CRITICAL_NOW
};

typedef NS_ENUM(NSUInteger, OTMPLoggerProcessor) {
    OTMPLoggerProcessor_NoProcessor,
    OTMPLoggerProcessor_Othros,
    OTMPLoggerProcessor_Filesystem,
    OTMPLoggerProcessor_NSLog
};

@protocol OTMPLogDelegate <NSObject>
-(void)logwithLevel:(LOG_LEVEL)level aspect:(LOG_ASPECT) aspect from:(const char*)source threadName:(NSString*)aThreadName message:(NSString *)message;
-(OTMPLoggerProcessor)loggerProcessor;
@end

@protocol OTMPLoggerProcessorDelegate <NSObject>
-(void)processLog:(OTMLLogModel*)aLog;

@end


@interface OTMLLogModel : NSObject

@property (nonatomic, assign) LOG_LEVEL level;
@property (nonatomic, assign) LOG_ASPECT aspect;
@property (nonatomic, assign) const char* source;
@property (nonatomic, strong) NSString* messageString;
@property (nonatomic, strong) NSData* messageData;

@end

@interface OTMPLogger : NSObject

+(NSArray*)LOG_PREFIXES;

+(void)setLogDelegate:(NSObject<OTMPLogDelegate>*) aDelegate;

+(void)logwithLevel:(LOG_LEVEL)level aspect:(LOG_ASPECT) aspect from:(const char*)source message:(NSString *)format, ...;
+(void)logwithLevel:(LOG_LEVEL)level aspect:(LOG_ASPECT) aspect formattedMessage:(NSString *)format;
+(void)logEventAndExit;
+(void)logEventAndExit:(NSString*) theReasonToCrash;

@end

