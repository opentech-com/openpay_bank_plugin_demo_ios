//
//  OTMPJsonNetworkResponse.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 20/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMPHTTPSignedNetworkResponse.h"

@interface OTMPJsonNetworkResponse : OTMPHTTPSignedNetworkResponse



-(NSObject*) getJsonObjectForKey:(NSString*) key;
-(NSString*) getJsonStringForKey:(NSString*) key;
-(NSArray*) getJsonArrayForKey:(NSString*) key;
-(NSDictionary*) getJsonDictionaryForKey:(NSString*) key;
-(NSNumber*)getJsonNumberForKey:(NSString*) key;

@end
