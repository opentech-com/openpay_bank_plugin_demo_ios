//
//  NSDictionary+DatasourceValuesByPlatforms.h
//  OTML
//
//  Created by Silvio D'Angelo on 17/09/2018.
//

#import <Foundation/Foundation.h>

@class OTMLDatasource;

@interface NSDictionary (DatasourceValuesByPlatforms)

+(nonnull NSDictionary<NSString*,OTMLDatasource*>*) dictionaryFromDS:(nonnull OTMLDatasource*) aDS
                                  withKeysHavingNoPrefixOrByPriority:(nonnull NSArray<NSString*>*) platforms;

@end
