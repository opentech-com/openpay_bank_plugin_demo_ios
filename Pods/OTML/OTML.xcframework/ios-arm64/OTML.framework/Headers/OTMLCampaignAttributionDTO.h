//
//  OTMLCampaignAttributionDTO.h
//  OTML
//
//  Created by Silvio D'Angelo on 04/02/2021.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMLCampaignAttributionDTO : NSObject

@property BOOL campaignAttribution;
@property (nullable) NSString* internal_campaign_id;
@property (nullable) NSString* campaign_name;

@end

NS_ASSUME_NONNULL_END
