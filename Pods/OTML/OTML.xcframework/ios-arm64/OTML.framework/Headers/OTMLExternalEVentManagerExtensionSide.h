//
//  OTMLExternalEVentManagerExtensionSide.h
//  Bolts
//
//  Created by Silvio D'Angelo on 14/10/2019.
//

#import <Foundation/Foundation.h>

@protocol OTMLEngineConfiguratorProvider;

NS_ASSUME_NONNULL_BEGIN

@interface OTMLExtensionSideConfiguration : NSObject

+ (void) configureOTMLWith:(id<OTMLEngineConfiguratorProvider>) provider;

@end

@interface OTMLExternalEVentManagerExtensionSide : NSObject

-(instancetype) initWithOTMLConfiguratorProvider:(id<OTMLEngineConfiguratorProvider>) provider;

-(void) savePushNotficationUserInfo:(NSDictionary*) userInfo;
-(void) markAsRemovedPushNotficationUserInfo:(NSDictionary*) userInfo
                withUserActionWithIdentifier:(NSString*) aActionIdentifier;

@end

NS_ASSUME_NONNULL_END
