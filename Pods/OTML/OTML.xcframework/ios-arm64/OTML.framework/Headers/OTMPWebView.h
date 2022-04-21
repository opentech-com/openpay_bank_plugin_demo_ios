//
//  OTMPWebView.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/06/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLViewController.h"
#import <OTMLModels/OTMLNetworkInteractionType.h>
#import <WebKit/WebKit.h>

@class OTMPWebView;

@protocol OTMPWebViewDelegate <NSObject>
- (BOOL) webView:(OTMPWebView*)aWebView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(WKNavigationType)navigationType;
- (void) webViewDidStartLoad:(OTMPWebView*)aWebView;
- (void) webViewDidFinishLoad:(OTMPWebView*)aWebView;
- (void) webView:(OTMPWebView*)aWebView didFailLoadWithError:(NSError *)error;

- (OTMLViewController*) getOtmlViewControllerForJSActionExecution;

@end


@interface OTMPWebView : UIControl <OTMPWebViewDelegate>

@property (nonatomic, weak) NSObject<OTMPWebViewDelegate>* webViewDelegate;
@property (nonatomic, assign) double content_zoom;

- (void) applyContentUrl:(NSString *)aContentUrl
             withMethod:(OTMLNetworkInteractionType)requestMethod;

- (void) applyFileURL:(NSString *) aContentUrl;

- (void) applyContentText:(NSString *)aContentText
             usingBaseURL:(NSURL *)baseURL;

- (void)getWebViewSize;

- (CGFloat) getContentHeight;

- (CGFloat) getContentWidth;

- (NSMutableURLRequest*)getRequestWithContentUrl:(NSString*)aContentUrl
                                       andMethod:(OTMLNetworkInteractionType)requestMethod;

-(BOOL)isReady;

@end

