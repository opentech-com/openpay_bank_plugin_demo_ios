//
//  OTSCAViewController.m
//  OTBANKPLUGIN_Example
//
//  Created by Silvio D'Angelo on 14/04/22.
//  Copyright © 2022 opentech.com. All rights reserved.
//

#import "OTSCAViewController.h"

@interface OTSCAViewController ()

@end

@implementation OTSCAViewController

-(IBAction)tapOnAuthorize
{
    self.authorizeButtonDTO.action();
}

-(IBAction)tapOnCancel
{
    self.cancelButtonDTO.action();
}


-(IBAction)tapOnDenial
{
    self.denailButtonDTO.action();
}
@end
