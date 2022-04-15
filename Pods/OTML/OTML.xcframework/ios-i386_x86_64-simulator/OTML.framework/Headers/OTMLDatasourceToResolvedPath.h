//
//  OTMLDatasourceToResolvedPath.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 07/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTMLDatasource.h"
#import "OTMLResolvedPath.h"

@interface OTMLDatasourceToResolvedPath : NSObject

+(nonnull OTMLResolvedPath*) innerResolvePathSPlitted:(nonnull NSArray*) aPathSplittedByDot
                        searchingInsideRootDatasource:(nullable OTMLDatasource*) aDatasource;

/**
 in realtà preferireri non esporre questo metodo ma vedo che lo stesso è necessario a OTMLDatasourceHelper e DSHelper ha un serio bisogno di refactoring per ridurre la complessità (ha + di 1000 righe)
 */
+(nullable NSArray<OTMLDatasource*>*) protectedResolveDataSourceElementsSplitted:(nonnull NSArray*) splitted
                                                                    inDatasource:(nonnull OTMLDatasource *) aDSInterface
                                                                         start_i:(int)start_i;

+(nullable OTMLDatasource *) getElementForKey:(nullable NSString*) aKey
                                 inDatasource:(nonnull OTMLDatasource *) aDatasourceInterface;

@end
