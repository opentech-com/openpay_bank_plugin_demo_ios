//
//  OTMPSecureSessionAction.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 15/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


#import "OTHTTPResponse.h"
@class OTHTTPTask;



typedef enum
{
    OTNetworkInteractionType_post = 0,
    OTNetworkInteractionType_get = 1,
    OTNetworkInteractionType_put = 2,
    OTNetworkInteractionType_delete = 3,
    OTNetworkInteractionType_head = 4,
    OTNetworkInteractionType_patch = 5
} OTNetworkInteractionType;

typedef enum
{
    OTMLNetworkInteractionType_url_encoded = 0,
    OTMLNetworkInteractionType_json = 1,
    OTMLNetworkInteractionType_multipart = 2
} OTMLNetworkParametersEncoding;

@interface OTHTTPTask<__covariant ResponseObjectType> : NSObject{
@protected
    NSString * url;
    OTNetworkInteractionType method;
}

NS_ASSUME_NONNULL_BEGIN
// tipo ResponseTransformation : torna un oggetto di tipo ResponseObjectType dato un oggetto di tipo OTHTTPResponse
typedef ResponseObjectType _Nonnull(^ResponseTransformation)(OTHTTPResponse* _Nonnull);

// tipo NetworkTaskCompletion : su possono usare l'oggetto di tipo ResponseObjectType ed un eventuale oggetto errore. I due sono mutualmente esclusivi.
typedef void(^NetworkTaskCompletion)(ResponseObjectType _Nullable, NSError* _Nullable);

// da usare, se non si è interessati a definire "ResponseTransformation"
// ==> in pratica, quando si è covariante con "ResponseObjectType" = OTHTTPResponse
-(void) performAsyncNetworkTaskWithCompletion:(NetworkTaskCompletion) completion;

// da usare se si ha necessità di ridefinire la fase di costruzione dell'oggetto response
-(void) performWithTransformation:(ResponseTransformation) transformation
            withNetworkCompletion:(NetworkTaskCompletion) completion;



typedef void(^ProgressElaborationBlock)(NSNumber* aProgress);


-(void) setDownloadProgressHandler:(ProgressElaborationBlock)downloadHandler
             uploadProgressHandler:(ProgressElaborationBlock)uploadHandler;

-(void) handleProcessingOfData:(NSData *) taskData
               withURLResponse:(NSURLResponse *)taskResponse
              withNetworkError:(NSError *) taskError
         andWithTransformation:(ResponseTransformation) tranformation;

@property (nonatomic, strong, readonly) NSURLRequest * request;
@property (nonatomic, strong, readonly) NSHTTPURLResponse * response;

@property (nonatomic, readonly, strong) NSURLSession* currentSession;
@property (nonatomic, readonly, strong) NSURLSessionTask* currentTask;

@property (nonatomic, readonly, strong) NSMutableDictionary<NSString*, NSString*>* mutableHeaderDict;


@property (nonatomic, strong) NSDictionary* userInfo;
@property (nonatomic, assign) BOOL forceCompletitionMainThread;


-(id) initWithURL:(NSString*) aUrl
        andMethod:(OTNetworkInteractionType) aMethod
     usingSession:(NSURLSession*) aSession;

-(void)abortNetworkTask;

-(void)setRequestParametersEncoding:(OTMLNetworkParametersEncoding)anEncoding;

-(void)setRequestParameters:(NSDictionary*)aParameters;
-(NSDictionary*)getRequestParameters;

-(NSURLResponse *)getResponse;

-(NSMutableDictionary<NSString*, NSString*>*)getMutableHeaderDict;
-(void)setMutableHeaderDict:(NSMutableDictionary<NSString*, NSString*>*)aMutableHeaderDict;

-(OTNetworkInteractionType)getMethod;

-(void)setRequestMultiPartParameters:(NSArray*)aParameters;

-(void)setRequestBody:(NSData*)aBodyRequest;

-(void)addHttpHeaders:(NSDictionary*)aHeaders;

-(NSMutableURLRequest *)buildRequest;

-(void)setDownloadProgressValue:(NSNumber*)aProgressValue;
-(void)setUploadProgressValue:(NSNumber*)aProgressValue;

-(NSString*)getCurrentSessionName;
-(void)taskWillExecute:(NSURLSessionTask*)aTask;
-(void)taskDidExecute:(NSURLSessionTask*)aTask;



+(void)setHeaders:(NSDictionary<NSString*,NSString*>*)aAdditionalHeaders onHeaderMutableDictionary:(NSMutableDictionary<NSString*, NSString*>*)aHeaders;

+(void)addCommonHttpHeaders:(NSDictionary*)aHeaders;
+(long long)serverTimestampOffset;

NS_ASSUME_NONNULL_END

@end
