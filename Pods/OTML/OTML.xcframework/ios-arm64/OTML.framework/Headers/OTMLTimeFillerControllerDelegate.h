//
//  AuTimeFillerControllerDelegate.h
//  Austria
//
//  Created by Silvio D'Angelo on 05/02/2019.
//  Copyright © 2019 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OTMLTimeFillerControllerDelegate <NSObject>

-(void) didExpire;
-(void) didTick;

@end

NS_ASSUME_NONNULL_END
