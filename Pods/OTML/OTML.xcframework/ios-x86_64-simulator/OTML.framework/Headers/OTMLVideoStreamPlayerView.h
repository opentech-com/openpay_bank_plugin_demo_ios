//
//  OTMLVideoStreamPlayerView.h
//  StitchedStreamPlayer
//
//  Created by Silvio D'Angelo on 31/10/13.
//
//

#import <UIKit/UIKit.h>
#import "MyPlayerLayerView.h"
#import <AVFoundation/AVFoundation.h>

@class OTMLVideoStreamPlayerView;

@protocol OTMLVideoStreamPlayerViewDelegate <NSObject>

-(void) player:(OTMLVideoStreamPlayerView*) aPlayerView didEncounterAnError:(NSError*) theError;

-(void) playerViewDidEndStreamingVideo:(OTMLVideoStreamPlayerView*) aPlayerView;

-(void) playerViewRequiresFullScreenMode:(OTMLVideoStreamPlayerView*) aPlayerView;

-(void) playerViewDidLeaveFullScreenMode:(OTMLVideoStreamPlayerView*) aPlayerView;

-(void) playerViewIsReadyToPlayNextVideo:(OTMLVideoStreamPlayerView*) aPlayerVideo;

@end

@interface OTMLVideoStreamPlayerView : UIControl

- (id)initWithFrame:(CGRect)frame
        andDelegate:(id<OTMLVideoStreamPlayerViewDelegate>)aDelegate;

- (id)initWithFrame:(CGRect)frame
        andDelegate:(id<OTMLVideoStreamPlayerViewDelegate>)aDelegate
	  withFullLabel:(NSString*)aFullLabel
	  withWrapLabel:(NSString*)aWrapLabel;

-(void) play;
-(void) pause;
-(void) buttaviatutto; // <-- dal nome potrete ben vedere che questo metodo è temporaneo

- (void)loadMovieFromUrl:(NSString*) theUrl;

-(void) askFullMode:(id)sender;
-(void) askWrapMode:(id) sender;
-(BOOL) isActuallyOnFullScreen;

@property (strong) NSString* theUrlForResourceToStream;
@property (strong) AVPlayer *player;
@property (strong) AVPlayerItem *playerItem;

@end
