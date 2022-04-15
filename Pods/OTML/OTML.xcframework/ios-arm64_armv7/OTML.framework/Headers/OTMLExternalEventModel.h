//
//  OTMLExternalEventModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 26/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//
#import <UIKit/UIKit.h>

typedef NS_OPTIONS(unsigned int, OTMLExternalEventType) {
    OTMLExternalEventTypeUnknown = 0,
    OTMLExternalEventTypePushNotification = 1,
    OTMLExternalEventTypeOpenAppByURL = 1<<1,
    OTMLExternalEventTypeLocalNotification = 1<<2,
    OTMLExternalEventTypeTimedTrigger = 1<<3,
    OTMLExternalEventTypeOpenAppByDocumentURL = 1<<5,
    OTMLExternalEventTypeTransakt = 1<<7,
    OTMLExternalEventTypeApplePay = 1<<11,
    OTMLExternalEventTypeSDKLaunch = 1<<13,
    OTMLExternalEventTypeAllTypes = 0xFFFFFFFF
};


/**
 UIApplicationStateActive, - app in foreground
 UIApplicationStateInactive, - app in background e premo sulla push
 UIApplicationStateBackground - app in background e la gestisco in background
 **/
typedef NS_OPTIONS(unsigned int, OTMLAppState) {
    OTMLAppStateUnknown = 0, 
    OTMLAppStateBackround = 1, //sono in background e ci rimango
    OTMLAppStateStarting = 2, //sono in background o killed e tappando avvio l'app (vado in foreground)
    OTMLAppStateForeground = 3, //sono in foreground e ci rimango
};


@interface OTMLExternalEventTypeSupport : NSObject
+(OTMLExternalEventType) valueFromString:(nullable NSString*) aStringValue;
+(nonnull NSString*) representationStringFromValue:(OTMLExternalEventType) aValue;
+(nonnull NSArray<NSString*>*)stringComponentsFromValue:(OTMLExternalEventType) aValue;
+(nullable NSString*) ensuredSingleValidStringFromValue:(OTMLExternalEventType) aValue;
+(OTMLAppState) appStateFromUIApplicationState:(UIApplicationState)aState;
@end





@class OTMLConcreteEventModel;


@interface OTMLExternalEventModel : NSObject <NSCopying, NSCoding>

#pragma mark - serialized in meta ds
@property (nonatomic, assign) BOOL isTapped;
@property (nonatomic, assign) OTMLAppState originalAppState;
@property (nonatomic, assign) OTMLExternalEventType eventType;
@property (nonatomic, copy, nullable) NSString* _Nonnull (^overrideTimestampBasedfileNameConvention)(void);
@property (nonatomic, strong, nullable) NSDictionary<NSString*,NSString*>* appManagementDatasource;

@property (nonatomic, strong, nonnull) NSString * eventId;

//it is observed, please search by name if refactored
@property (nonatomic, assign) BOOL isProcessed;

//it is observed, please search by name if refactored
@property (nonatomic, assign) BOOL isEnqueued;

//it is observed, please search by name if refactored
@property (nonatomic, assign) BOOL isProcessing;

#pragma mark - serialized in specific ds
//it is observed, please search by name if refactored
@property (nonatomic, strong, nonnull) NSMutableDictionary * payload;

-(nonnull instancetype)initWithType:(OTMLExternalEventType)aType;

-(void) saveEvent;
-(void) deleteEvent;

+(nonnull OTMLExternalEventModel*)loadEventWithFullpath:(nonnull NSString*)aFullpath;

-(BOOL)isValid;
-(BOOL)isEqual:(nullable id)object;


@end


@interface OTMLConcreteEventModel : NSObject
-(void)populateExternalEventPayload:(OTMLExternalEventModel*_Nonnull)anEvent;
@end




