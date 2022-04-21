//
//  OTMLParameterDataFetcher.h
//  Pods
//
//  Created by Silvio D'Angelo on 25/03/2020.
//

#import <Foundation/Foundation.h>
@class OTMLDatasource;
@class OTMLComponent;

NS_ASSUME_NONNULL_BEGIN

@protocol OTMLParameterDataFetcher <NSObject>

-(nullable OTMLDatasource*) getDatasourceWithID:(nonnull NSString*) aDatasourceID;
-(nullable OTMLComponent*) findComponentByID:(nonnull NSString*) aComponentID;
-(nullable NSString*) findPushedParamValueFromKey:(nonnull NSString*) aParametherName;

@end

NS_ASSUME_NONNULL_END
