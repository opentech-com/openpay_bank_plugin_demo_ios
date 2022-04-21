//
//  OTMPLoggerDefine.h
//  OTML
//
//  Created by Valerio Ferrantelli on 31/07/18.
//


#import "ProjectConfiguration.h"
#pragma mark logging

#define LOGGER_PROCESSOR LOG_DESTINATION
#ifdef LOGACTIVE

    #define OTLogCreateDate(a) NSDate* a = [NSDate date]
    #define OTLogDebug(aspectMask, a, ...) [OTMPLogger logwithLevel:LOG_LEVEL_DEBUG aspect:aspectMask from:__PRETTY_FUNCTION__ message:a, ##__VA_ARGS__]
    #define OTLog(aspectMask, a, ...) [OTMPLogger logwithLevel:LOG_LEVEL_INFO aspect:aspectMask from:__PRETTY_FUNCTION__ message:a, ##__VA_ARGS__]
    #define OTLogWarning(aspectMask, a, ...) [OTMPLogger logwithLevel:LOG_LEVEL_WARNING aspect:aspectMask|LOG_ASPECT_APPLICATION_2 from:__PRETTY_FUNCTION__ message:a, ##__VA_ARGS__]
    #define OTLogError(aspectMask, a, ...) [OTMPLogger logwithLevel:LOG_LEVEL_ERROR aspect:aspectMask|LOG_ASPECT_APPLICATION_2 from:__PRETTY_FUNCTION__ message:a, ##__VA_ARGS__]
    #define OTLogCritical(aspectMask, a, ...) [OTMPLogger logwithLevel:LOG_LEVEL_CRITICAL aspect:aspectMask|LOG_ASPECT_APPLICATION_2 from:__PRETTY_FUNCTION__ message:a, ##__VA_ARGS__]
    #define OTLogFrontend(aspectMask,a, ...) [OTMPLogger logwithLevel:LOG_LEVEL_INFO aspect:aspectMask|LOG_ASPECT_APPLICATION_2 from:__PRETTY_FUNCTION__ message:a, ##__VA_ARGS__]
    #define OTLogCriticalNow(aspectMask, a, ...) [OTMPLogger logwithLevel:LOG_LEVEL_INFO aspect:aspectMask|LOG_ASPECT_APPLICATION_2 from:__PRETTY_FUNCTION__ message:a, ##__VA_ARGS__]

    #define OTExit(a) [OTMPLogger logEventAndExit:a]
    #define OTLoggerLog(a, ...) NSLog(a, ##__VA_ARGS__)


#else

    #define OTLogCreateDate(a) NSDate* a = nil
    #define OTLogDebug(aspectsArray, a, ...) /**/
    #define OTLog(aspectMask, a, ...) /**/
    #define OTLogWarning(aspectMask, a, ...)  /**/
    #define OTLogError(aspectMask, a, ...)  /**/
    #define OTLogCritical(aspectMask, a, ...)  /**/
    #define OTLogCriticalNow(aspectMask, a, ...)  /**/
    #define OTLogFrontend(aspectMask, a, ...) /**/

    #define OTExit(a) [NSException raise:@"OTException" format:@"%@", a];
    #define OTLoggerLog(a, ...)  /**/

#endif

#define MPFunc(lvl) /**/
#define MPTrace()    /**/
#define MPLog(lvl, a, ...) /**/
#define MPTest(condition, desc, ...) /**/

