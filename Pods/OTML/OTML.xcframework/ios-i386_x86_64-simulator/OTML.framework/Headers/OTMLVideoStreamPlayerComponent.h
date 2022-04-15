//
//  OTMLVideoStreamPlayer.h
//  StitchedStreamPlayer
//
//  Created by Silvio D'Angelo on 31/10/13.
//
//

#import <UIKit/UIKit.h>
#import "OTMLComponent.h"
#import "OTMLVideoStreamPlayerView.h"
#import "OTMPShowHideViewProtocol.h"
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@interface OTMLVideoStreamPlayerComponent : OTMLComponent<OTMLVideoStreamPlayerViewDelegate, OTMLRestartAppAwareProtocol>

@end
