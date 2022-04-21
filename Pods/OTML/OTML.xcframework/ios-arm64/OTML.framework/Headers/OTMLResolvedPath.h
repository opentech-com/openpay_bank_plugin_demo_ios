//
//  OTMLResolvedPath.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 07/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTMLDatasource.h"

/**
 
 Questa classe è usata come un DTO per raccogliere informazioni utili in fase di risoluzione di un DatasourcePath.
 
 */
@interface OTMLResolvedPath : NSObject

- (instancetype)initWithResolved:(BOOL)aResolved
                            root:(OTMLDatasource*)aDSRoot
                          result:(NSArray<OTMLDatasource*>*) aResult
                        fromFile:(BOOL)aFromFile;

+(OTMLResolvedPath *)newFailureResolution;
+(BOOL) isFailureResolution:(OTMLResolvedPath*)path;

@property(nonatomic, readonly) OTMLDatasource* rootElement;
@property(nonatomic, readonly) NSArray<OTMLDatasource*>* result;
@property(nonatomic, readonly) BOOL resolved;
@property(nonatomic, readonly) BOOL fromFile;

@end
