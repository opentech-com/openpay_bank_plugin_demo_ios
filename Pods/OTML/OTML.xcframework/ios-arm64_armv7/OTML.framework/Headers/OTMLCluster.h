//
//  OTMLCluster.h
//  OTML
//
//  Created by Silvio D'Angelo on 03/02/2021.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/*
 Cluster è un concetto OTML e corrisponde a rendered pixels (ex: 750x1334)
 ma ha dei remapping interni per rispettare le logiche di cluster del frontend e del team creative
 */
@interface OTMLCluster : NSObject

+(NSString*) identifier;

@end

NS_ASSUME_NONNULL_END
