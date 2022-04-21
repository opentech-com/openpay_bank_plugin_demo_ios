//
//  OTMLNotificationCenterManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 28/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@interface OTMLNotificationCenterManager : NSObject <OTMLRestartAppAwareProtocol>

-(nonnull NSNotificationCenter*)getCustomNotificationCenterByID:(nullable NSString*)anID;




-(nonnull instancetype) init __attribute__((unavailable("Init not available. Please use getInstance instead")));

+(nonnull OTMLNotificationCenterManager*)getInstance;

/**
 imposta un valore per un evento
 @note: Non esegue alcun trigger, si limita ad impostare il valore
 */
-(void)setEvent:(nonnull NSString*)eventName
      withValue:(nonnull NSObject*)value;

/*
 imposta un valore ed esegue il trigger globale in modo asincrono
 */
-(void)setEventAndTrigger:(nonnull NSString*)eventName
                withValue:(nonnull NSObject*)value;
/*
 imposta un valore ed esegue il trigger globale in modo SINCRONO
 @note: se operato in modo sincrono da fuori il main thread, attenzione ai deadlock
 */
-(void)setSyncEventAndTrigger:(nonnull NSString*)eventName
                    withValue:(nonnull NSObject*)value;

/*
 imposta un valore ed esegue il trigger globale in modo SINCRONO
 @note: se operato in modo sincrono da fuori il main thread, attenzione ai deadlock
 */
-(void)setSyncEventWithoutValueAndTrigger:(nonnull NSString*)eventName;

-(void)reset;

/*
 iesegue il trigger globale in modo asincrono
 */
-(void)touchEvent:(nonnull NSString*)eventName;

/*
 esegue il trigger globale in modo SINCRONO
 @note: se operato in modo sincrono da fuori il main thread, attenzione ai deadlock
 */
-(void)touchSyncEvent:(nonnull NSString*)eventName;

/**
 ritorna il valore associato ad un evento
 */
-(nullable NSObject*)getEventValue:(nullable NSString*)eventName;

/*
 registra un oggetto come osservatore di un evento e ritorna il valore attuale se disponibile
 */
-(nullable NSObject*)addObserver:(nonnull NSObject*)theObserver
                        forEvent:(nonnull NSString*)theEvent
                        selector:(nonnull SEL)theSel;

/**
 rimuove un osservatore da qualsiasi evento
 @note: OTMLNotificationCenter manitene solamente una weak reference agli osservatori. Non è indispensabile chiamare questo metodo per evitare memory leak
 */
-(void)removeObservers:(nullable NSObject*)theObserver;

/**
 rimuove un osservatore per lo specifico evento
 @note: OTMLNotificationCenter manitene solamente una weak reference agli osservatori. Non è indispensabile chiamare questo metodo per evitare memory leak
 */
-(void)removeObserver:(nonnull NSObject*)theObserver
             forEvent:(nonnull NSString*)theEvent;

/**
 rimuove il valore associato ad un evento
 @note: Questo non incide sugli osservatori
 */
-(void)removeEvent:(nonnull NSString*)event;


/**
 cleanup of container having nil weak referenced observer
 */
-(void)cleanupReleasedObserver;
@end
