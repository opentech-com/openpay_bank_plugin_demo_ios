//
//  OTMLUpdaterDelegate.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 16/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLUpdateLoadingAbstractView.h"
#import "OTMLAdvancedUpdaterManager.h"

@interface OTMLUpdaterDelegate_SyncImpl : OTMLAdvancedUpdaterDelegateBase

@property (nonatomic, strong) NSObject<OTMLUpdateLoadingAbstractView>* updateProgressViewDelegate;



@end
