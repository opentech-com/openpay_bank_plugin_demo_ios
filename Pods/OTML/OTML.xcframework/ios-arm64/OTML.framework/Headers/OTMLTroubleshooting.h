//
//  OTMLTroubleshooting.h
//  Pods
//
//  Created by Silvio D'Angelo on 05/03/2019.
//  Copyright © 2019 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMLTroubleshooting : NSObject

+ (instancetype) sharedManager;

- (void) cleanTraceForTroubleWIthID:(NSString*) troubleID;

- (void) sendTraceForTroubleWIthID:(NSString*) troubleID;

- (void) appendFilterableKey:(NSString*) variable
                   withValue:(id) value
             toTroubleWithID:(NSString*) troubleID;

- (void) appendToTroubleWIthID:(NSString*) troubleID
                     infoEvent:(NSString*) events;
@end

NS_ASSUME_NONNULL_END
