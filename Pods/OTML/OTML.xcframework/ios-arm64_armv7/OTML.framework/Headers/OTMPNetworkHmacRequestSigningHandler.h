//
//  prova.h
//  OTML
//
//  Created by Cristiano Calicchia on 28/04/21.
//

#import <Foundation/Foundation.h>
#import <OTMLModels/OTMLNetworkInteractionType.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMPNetworkHmacRequestSigningHandler : NSObject

+ (void) signHmacRequest:(NSURLRequest *)request withMethod:(OTMLNetworkInteractionType) method andWithRequestParameters:(nullable NSDictionary *) requestParameters andSession:(NSURLSession *)session;

+ (void) sendTraceOnHmacFailure: (NSURL *) urlToClean;

+ (void) invalidateHmacKeyCache;

@end

NS_ASSUME_NONNULL_END
