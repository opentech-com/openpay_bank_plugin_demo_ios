//
//  OTMLLocalNotificationModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/06/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLExternalEventModel.h"

@interface OTMLLocalNotificationModel : OTMLConcreteEventModel

@property (nonatomic, strong) NSDictionary* userInfo;
@property (nonatomic, strong) NSString* actionIdentifier;
@property (nonatomic, strong) NSString* category;
@property (nonatomic, strong) NSString* body;
@property (nonatomic, strong) NSString* title;

@property (nonatomic, strong) NSString* badge;


@end
