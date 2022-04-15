//
//  OTAlertViewButtonDTO.h
//  OTBANKPLUGIN_Example
//
//  Created by Silvio D'Angelo on 14/04/22.
//  Copyright © 2022 opentech.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTAlertViewButtonDTO : NSObject

@property (nonatomic, copy) void (^action)(void);

+(OTAlertViewButtonDTO*) dtoWithAction:(void (^)(void)) action;

@end

NS_ASSUME_NONNULL_END
