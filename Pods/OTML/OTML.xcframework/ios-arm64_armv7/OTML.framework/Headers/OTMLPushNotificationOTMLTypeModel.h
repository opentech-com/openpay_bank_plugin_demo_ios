//
//  OTMLPushNotificationOTMLTypeModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 29/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLPushNotificationModel.h"

@interface OTMLPushNotificationOTMLTypeModel : OTMLPushNotificationModel

@property (nonatomic, strong) NSString* otmlPushId;
@property (nonatomic, strong, readonly) NSDictionary* otmlPushPayload;

@end


@interface OTMLPushNotificationUpdateCommandModel : OTMLPushNotificationOTMLTypeModel

@property (nonatomic, strong) NSString* command;
@property (nonatomic, assign) unsigned int delay;
@property (nonatomic, strong) NSArray<NSString*>* arrayOfUpdateAggregateVersion;



@end
