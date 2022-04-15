//
//  OTMLiOS9PopupDSParser.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLPopupModel.h"
#import "OTMLAbstractPopupViewController.h"

@interface OTMLiOS9PopupDSParser : NSObject <OTMLPopupParserProtocol>

@property (nonatomic, strong) OTMLPopupModel * popupModel;

@end
