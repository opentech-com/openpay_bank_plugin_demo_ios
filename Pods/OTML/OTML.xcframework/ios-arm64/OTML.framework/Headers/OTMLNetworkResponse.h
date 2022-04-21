//
//  OTMLNetworkResponse.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


#import <OTMLModels/OTMLCommunicationConstants.h>
#import "OTMPJsonNetworkResponse.h"

@class OTMLMapStackEntry;
@class OTMLNetworkResponse;
@class OTMLSessionDatasource;
@class OTMLDatasource;
@class OTMLNetworkTask;

@interface OTMLNetworkResponse : OTMPJsonNetworkResponse

- (instancetype) initWithOTResponse:(OTHTTPResponse *)response;

//response and parsed sections
@property (nonatomic, readonly) NSData * originalData;
@property (nonatomic, readonly) NSString * target;
@property (nonatomic, strong) NSString * cacheTag;
@property (nonatomic, strong) NSString* cacheKey;
@property (nonatomic, strong) NSString* etag;
@property (nonatomic, readonly) NSArray* preExecuteActions;
@property (nonatomic, readonly) NSArray* preStackActions;

@property (nonatomic, readonly) NSDictionary* params;
@property (nonatomic, readonly) OTMLMapStackEntry* mapEntry;
@property (nonatomic, readonly) NSDictionary<NSString*, OTMLDatasource*>* respDatasource;

@property (nonatomic, readonly) NSArray<OTMLSessionDatasource*>* sessionDatasources;
@property (nonatomic, readonly) long long sessionTimestamp;


//ciclo di vita
@property (nonatomic, assign) BOOL isPrefetchResponse;
@property (nonatomic, assign) BOOL isStackStackManagementDisabledResponse;
@property (nonatomic, assign) BOOL skipLoading;
@property (nonatomic, assign) BOOL cached;

//settati dopo la init per la cache
@property (nonatomic, strong) NSString* requestURL;
@property (nonatomic, strong) NSString* requestType;
@property (nonatomic, strong) NSDictionary* requestParameters;


-(BOOL)isValidOTMLResponse;
-(void)resetSessionDatasources;
-(NSDictionary*)dictionatyDescription;

@end
