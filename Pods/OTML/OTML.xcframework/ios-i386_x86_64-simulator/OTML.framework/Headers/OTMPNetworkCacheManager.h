//
//  OTMPNetworkCacheManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 20/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@class OTMLNetworkResponse;

@interface OTMPCacheItemDescription : NSObject

@property(nonatomic, readonly) NSString* cacheID;
@property(nonatomic, readonly) NSString* etag;

@end

@interface OTMPNetworkCacheManager : NSObject <OTMLRestartAppAwareProtocol>

-(instancetype)init __attribute__((unavailable("Init not available. Please use OTMLImage +otmlImageFromDescriprion: to build an OTMLImage")));
+(OTMPNetworkCacheManager*)getInstance;
-(OTMLNetworkResponse*)checkCachedResponseWithTarget:(NSString*)aTarget
                                         andParameters:(NSDictionary*)aParameters
                                             andMethod:(NSString*)method;

-(void)addNetworkCacheResponse:(OTMLNetworkResponse*) _pResponse;
-(NSArray<OTMPCacheItemDescription*>*)cacheItemsDescriptionWithRegex:(NSRegularExpression *)aRegex;
-(NSArray<OTMPCacheItemDescription*>*)cacheItemsDescriptionWithID:(NSString *)aCacheID;
-(void)cleanNetworkCache;
-(void)cleanNetworkCacheWithID:(NSString*)aCacheID;
-(void)cleanNetworkCacheWithRegex:(NSRegularExpression *)aRegex;



@end
