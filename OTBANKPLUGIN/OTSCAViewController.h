//
//  OTSCAViewController.h
//  OTBANKPLUGIN_Example
//
//  Created by Silvio D'Angelo on 14/04/22.
//  Copyright © 2022 opentech.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OTAlertViewButtonDTO.h"

NS_ASSUME_NONNULL_BEGIN

@interface OTSCAViewController : UIViewController

@property OTAlertViewButtonDTO* authorizeButtonDTO;
@property OTAlertViewButtonDTO* denailButtonDTO;
@property OTAlertViewButtonDTO* cancelButtonDTO;

@end

NS_ASSUME_NONNULL_END
