//
//  OTMPDictionaryUtils.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 18/03/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


@interface OTMPDictionaryUtil : NSObject

+(NSObject*) getValueFromDictionary:(NSDictionary*)aDictionary caseInsesitiveStringKey:(NSString*) aKey;
+(NSString*) queryStringFromNSDictionary:(NSDictionary*)aDictionary;
+(NSDictionary*) NSDictionaryFromQueryString:(NSString*)aQueryString;
+(NSData *)sha256ByteDigestForDictionary:(NSDictionary*)aDictionary;
+(NSMutableDictionary*) flatDictionaryFromDictionary:(NSDictionary*)src;

+(NSDictionary*)dictionaryOfObject:(id)obj;
+(void)fillObject:(id)anObj withDictionary:(NSDictionary*)aDic;

@end
