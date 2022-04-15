//
//  OTMLButtonContainer.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 19/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLLinearContainer.h"
#import "OTMPReactiveViewAgglomeration.h"
#import "OTMLLongPressManager.h"
#import "OTMLVoiceoverDTO.h"


@interface OTMLButtonContainer : OTMLLinearContainer<OTMPReactiveViewAgglomeration, OTMLLongPressDelegate, OTMLAccessibleComponent>

@end
