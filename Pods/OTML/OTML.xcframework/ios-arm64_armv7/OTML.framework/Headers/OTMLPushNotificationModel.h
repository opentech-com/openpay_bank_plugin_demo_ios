//
//  OTMLPushNotificationModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 29/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


#import "OTMLExternalEventModel.h"

extern NSString* const t_push_notification_payload_dictionary;

@interface OTMLPushNotificationModel : OTMLConcreteEventModel

@property (nonatomic, strong, readonly) NSString* badge;
@property (nonatomic, strong, readonly) NSString* body;

@property (nonatomic, strong, readonly) NSString* title;
@property (nonatomic, strong, readonly) NSString* subtitle; //iOS 10

@property (nonatomic, strong, readonly) NSString* sound;
@property (nonatomic, strong, readonly) NSString* category;
@property (nonatomic, assign, readonly) BOOL contentAvailable;

@property (nonatomic, strong, readonly) NSDictionary* userInfo;


//non è incluso nel payload della push, dipende da cosa preme l'utente
@property (nonatomic, strong) NSString* actionIdentifier;


-(instancetype)initWithPushNotificationUserInfo:(NSDictionary*) userInfo;

-(BOOL) markAsAlreadyHandled;
-(void) markAsAlreadyHandledWithIdentifier:(NSString*) alreadyhandled; 
-(BOOL)isValid; //serve per capire nella gerarchia di tutti i tipi di push quale è instanziabile
-(NSString*) pushHash; //necessario per poter fare l'equals di 2 push non OTML che non hanno otmlID

@end
