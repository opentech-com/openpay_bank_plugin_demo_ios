//
//  OTMLWebViewCookieStorage.h
//  OTML
//
//  Created by Valerio Ferrantelli on 11/03/2019.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>


@interface OTMLWebViewCookieStorage : NSObject <OTMLRestartAppAwareProtocol>


@property (nonatomic, strong, readonly) NSMutableArray<NSHTTPCookie*> * sharedExternalCookies;

+(OTMLWebViewCookieStorage*) getInstance;

-(void)addCookieWithURL:(NSString*)aURL andValue:(NSString*)aValue;

-(void)applyCookiesToConfiguration:(WKWebViewConfiguration *)aConf withCompletion:(OTMLVerySimpleCallback)aCallback;
@end

