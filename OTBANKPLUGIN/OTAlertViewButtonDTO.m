//
//  OTAlertViewButtonDTO.m
//  OTBANKPLUGIN_Example
//
//  Created by Silvio D'Angelo on 14/04/22.
//  Copyright © 2022 opentech.com. All rights reserved.
//

#import "OTAlertViewButtonDTO.h"

@implementation OTAlertViewButtonDTO

+(OTAlertViewButtonDTO*) dtoWithAction:(void (^)(void)) action
{
    OTAlertViewButtonDTO* dto = [[OTAlertViewButtonDTO alloc] init];
    dto.action = action;
    return dto;
}

@end
