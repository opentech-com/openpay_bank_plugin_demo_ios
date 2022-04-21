//
//  OTMLUpdateActionsSection.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLUpdateSection.h"

@class OTMLActionsModel;

@interface OTMLUpdateActionsSection : OTMLUpdateSection

/**
 *  those are the Gloabl Actions of the OTML-app
 */
@property (nonatomic, strong, readonly) OTMLActionsModel * actionsModel;

/**
 *  those are actions (one of 'em is required to explicitly push the landing page for the app
 */
@property (nonatomic, strong, readonly) OTMLActionsModel * afterUpdateActionsModel;

@end
