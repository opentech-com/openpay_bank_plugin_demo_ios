//
//  OTMLRemoteNavigator.h
//  OTML
//
//  Created by Valerio Ferrantelli on 24/05/2019.
//

@protocol OTMLNetworkTaskDelegate;
@class OTMLNetworkTask;
@class OTMLNetworkResponse;
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@interface OTMLRemoteNavigator : NSObject <OTMLRestartAppAwareProtocol>

+(instancetype) getInstance;

-(void)networkCachedGetRequestWithTarget:(NSString*)aTarget
                           andParameters:(NSDictionary*)aParameters
                     inOriginalContextID:(NSString*)aOriginalContextID;

-(void)networkCachedGetRequestWithTarget:(NSString*) aTarget
                           andParameters:(NSDictionary*) aParameters
                     inOriginalContextID:(NSString*) aOriginalContextID
                   withAdditionalHeaders:(NSDictionary<NSString*,NSString*>*) aAdditionalHeaders;

-(void)networkCachedPostRequestWithTarget:(NSString*)aTarget
                            andParameters:(NSDictionary*)aParameters
                      inOriginalContextID:(NSString*)aOriginalContextID;

-(void)networkCachedPostRequestWithTarget:(NSString*)aTarget
                            andParameters:(NSDictionary*)aParameters
                      inOriginalContextID:(NSString*)aOriginalContextID
                    withAdditionalHeaders:(NSDictionary<NSString*,NSString*>*) aAdditionalHeaders;

-(void) networkCachedPostRequestWithTarget:(NSString*)aTarget
                                  cacheTag:(NSString*)aCacheTag
                                      body:(NSData*)aBody
                         additionalHeaders:(NSDictionary*)additionalHeaders
                       inOriginalContextID:(NSString*)aOriginalContextID
                          prefetchResponse:(BOOL) prefetchResponse
                        skipLockingLoading:(BOOL) skipLockingLoading
                                 skipCache:(BOOL) skipCache
                    disableStackManagement:(BOOL) disableStackManagement
                                    method:(NSString*)aMethod;

-(void) processTask:(OTMLNetworkTask *)aTask didFinishWithResponse:(OTMLNetworkResponse *)response;
-(int) renewRequestTicket;



@end


@interface OTMLDictionaryNetworkRequest : NSObject

@property (nonatomic, readonly) BOOL shouldPrefetch;
@property (nonatomic, readonly) BOOL shouldSkipLoading;
@property (nonatomic, readonly) BOOL shouldSkipCache;
@property (nonatomic, readonly) BOOL shouldDisableStackManagement;
@property (nonatomic, readonly) NSString* originalContextID;
@property (nonatomic, readonly) NSString* targetContextID;
@property (nonatomic, readonly) NSDictionary* cleanedRequestDictionary;
@property (nonatomic, readonly) NSDictionary<NSString*,NSString*>* additionalOTMLHeadersFromJSON;

-(instancetype)init __attribute__((unavailable("Init not available. Please use OTMLImage +otmlImageFromDescriprion: to build an OTMLImage")));

-(instancetype)initWithDictionary:(NSDictionary*)dictionary
            fromOriginalContextId:(NSString*)originalContextID;

@end
