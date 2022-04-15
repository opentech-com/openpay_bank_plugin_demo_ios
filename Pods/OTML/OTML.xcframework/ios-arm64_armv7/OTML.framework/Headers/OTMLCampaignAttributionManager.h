//
//  OTMLCampaignAttributionManager.h
//  Pods
//
//  Created by Silvio D'Angelo on 03/02/2021.
//

#import <Foundation/Foundation.h>
#import "OTMLCampaignAttributionDTO.h"

NS_ASSUME_NONNULL_BEGIN

@interface OTMLCampaignAttributionManager : NSObject

+(instancetype) sharedInstance;

@property (nullable) OTMLCampaignAttributionDTO* dto;

-(instancetype)initWithClientID:(NSString*) aClientID andEndpoint:(NSString*) anURL;

-(void)checkCampaignAttribution;

@end

NS_ASSUME_NONNULL_END
