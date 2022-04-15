//
//  OTMPButtonContainerView.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 07/06/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLComponentBackgroundView.h"
#import "OTMPReactiveViewAgglomeration.h"

@interface OTMPButtonContainerView : OTMLComponentBackgroundView

-(id) initWithModel:(OTMLFrameManager *) aModel
           andFrame:(CGRect) aFrame
andReactionDelegate:(NSObject<OTMPReactiveViewAgglomeration>*) theDelegate;


@end
