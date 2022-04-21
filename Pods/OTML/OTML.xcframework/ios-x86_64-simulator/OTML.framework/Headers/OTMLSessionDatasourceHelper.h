//
//  OTMLSessionDatasourceHelper.h
//  OTML
//
//  Created by Valerio Ferrantelli on 18/04/2019.
//

#import <Foundation/Foundation.h>
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>
#import "OTMLSessionDatasource.h"

@interface OTMLSessionStoreDSReference : NSObject

-(instancetype)initWithDSHash:(NSString*)aDSHash withTimestamp:(long long)aTimestamp;
@property(nonatomic, readonly) NSString* dsHash;
@property(nonatomic, readonly) long long timestamp;

@end

@interface OTMLSessionDatasourceHelper : NSObject <OTMLRestartAppAwareProtocol>

+(OTMLSessionDatasourceHelper*)getInstance;

-(NSDictionary<NSString*, OTMLSessionStoreDSReference*>*) getSessionStoreDS;
-(void) resetSessionStoreDS;
-(void) addSessionDSs:(NSArray<OTMLSessionDatasource*>*)aSessionDatasourceList;
-(NSString*)getStoreDSHTTPHeadersValue;

@end

