//
//  OTHFViewController.m
//  OTBANKPLUGIN
//
//  Created by s.dangelo on 07/04/2022.
//  Copyright (c) 2022 opentech.com. All rights reserved.
//

#import "OTHFViewController.h"
#import "OTHFAppDelegate.h"
#import "ProjectConfiguration.h"
#import "OTSCAViewController.h"

@import OTBANKPLUGIN;

@interface OTHFViewController ()
@end

@implementation OTHFViewController


-(IBAction) onLaunchButtonPressed
{

    NSString * target = @"";
    NSDictionary * options = @{};
    // NOTE: for this demo, the plugin does not change behaviour given "target" and "options".
    [OTHFManager launch:target options:options];
}



- (void)viewDidLoad
{
    [super viewDidLoad];

    NSError * error;

    NSBundle *amazingBundle = [NSBundle bundleForClass:[self class]];
    NSString * path = [amazingBundle.bundlePath stringByAppendingPathComponent:@"Licenses"];
    NSString* filename = OMVLICENSE;
    path = [path stringByAppendingPathComponent:filename];
    path = [path stringByAppendingString:@".opbp"];
    // plugin configuration.
    BOOL done = [OTHFManager configureWithFile:path withError:&error];
    if(!done || error){
        NSLog(@"Loading config file with path:%@ Error: %@", path, error);
        return;
    }else{
        NSLog(@"Config file with path:%@ loaded correctly", path);
    }

    // NOTE: in this demo there is not an actual SCA operation and it just displays a panel with multiple choices in order to test the three interesting SCA use case scenarios.
    UIStoryboard * sboard = [UIStoryboard storyboardWithName:@"Main" bundle:NSBundle.mainBundle];

    [OTHFManager setScaRequestedHandler:^(UIViewController* otvc, NSString * _Nonnull scaPayload, OTSCARequestedResultHandler  _Nonnull othfHandler) {

        UIViewController* vcFromStroryboard = [sboard instantiateViewControllerWithIdentifier:@"sca_panel_vc"];

        OTSCAViewController* scaVC = (OTSCAViewController*)vcFromStroryboard;
        scaVC.modalPresentationStyle = UIModalPresentationOverCurrentContext;

        scaVC.authorizeButtonDTO = [OTAlertViewButtonDTO dtoWithAction:^{
            NSString* uuid = @"ok"; // TODO: final value should be a jwt?
            othfHandler(uuid, OTSCARequestedResult_SUCCESS);
            [scaVC dismissViewControllerAnimated:YES completion:NULL];
        }];
        scaVC.cancelButtonDTO = [OTAlertViewButtonDTO dtoWithAction:^{
            othfHandler(nil, OTSCARequestedResult_CANCELLED);
            [scaVC dismissViewControllerAnimated:YES completion:NULL];
        }];
        scaVC.denailButtonDTO = [OTAlertViewButtonDTO dtoWithAction:^{
            othfHandler(nil, OTSCARequestedResult_GENERIC_ERROR);
            [scaVC dismissViewControllerAnimated:YES completion:NULL];
        }];

        [otvc presentViewController:scaVC animated:YES completion:NULL];
    }];
}


@end

