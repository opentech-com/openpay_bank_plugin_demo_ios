//
//  OTMLNetworkUtil.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/05/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//


typedef enum {
    OTMLHTTPRedirectionPolicyAll = 0,
    OTMLHTTPRedirectionPolicyNone = 1,
    OTMLHTTPRedirectionPolicyHost = 2
} OTMLHTTPRedirectionPolicy;


@interface OTMLNetworkUtil : NSObject

+(BOOL)hasPrefixGetIgnoreCase:(NSString*)network_type;
+(BOOL)hasPrefixPostIgnoreCase:(NSString*)network_type;

+(BOOL)isGetIgnoreCase:(NSString*)network_type;
+(BOOL)isPostIgnoreCase:(NSString*)network_type;

+(NSString*) stringURLWithBaseAddress:(NSString*) endpoint
              appendingPathComponents:(NSArray<NSString*>*) paths;

+(NSString*)replaceBaseStringPlaceholder:(NSString*)anUrl;

@end
