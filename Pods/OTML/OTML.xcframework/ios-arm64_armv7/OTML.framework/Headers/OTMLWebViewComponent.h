//
//  OTMLWebView.h
//  OTML
//
//  Created by epavoni on 20/09/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//

#import "OTMLComponent.h"
#import "OTMPWebView.h"

@interface OTMLWebViewComponent : OTMLComponent<OTMPWebViewDelegate>{
@protected
    OTMPWebView* contentWebView;
}

-(void) loadContent;
-(BOOL) isJSBridgeEnabled;

@end
