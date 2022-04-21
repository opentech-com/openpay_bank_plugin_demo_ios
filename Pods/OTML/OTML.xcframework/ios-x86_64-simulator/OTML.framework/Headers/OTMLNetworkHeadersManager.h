//
//  OTMLNetworkHeadersManeger.h
//  OTML
//
//  Created by Valerio Ferrantelli on 23/04/18.
//

#import <Foundation/Foundation.h>
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>
@class OTMLComponent;

@interface OTMLNetworkHeadersManager : NSObject <OTMLRestartAppAwareProtocol>

+(OTMLNetworkHeadersManager*)getInstance;

+(void) addCommonsHeaders:(NSDictionary<NSString*,NSString*>*) headers;

-(NSMutableDictionary*)getHeaders;
-(NSMutableDictionary*)getHeadersWithManifestWithoutBundleInfo;
-(NSMutableDictionary*)getHeadersWithoutManifestWithoutBundleInfo;
-(NSMutableDictionary*)getHeadersWithBundleWithoutManifestInfo;
-(NSMutableDictionary*)getCacheableBundleHeaders;

-(NSMutableDictionary*)getComponentDrivenHeaders:(OTMLComponent*) aComponent;
-(void)resetCache;


@end
