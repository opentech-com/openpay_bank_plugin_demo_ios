//
//  AppHeaderConfigurator.h
//
//  Created by Alessandro Ruggeri on 31/08/16.
//  Copyright © 2016 Valerio Ferrantelli. All rights reserved.
//

#import "OTMLHeaderModel.h"
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@interface OTMLHeaderConfigurator : NSObject <UISearchBarDelegate, OTMLRestartAppAwareProtocol>

@property (nonatomic, retain) OTMLHeaderModel * model;

- (id) initWithDatasource:(OTMLDatasource*)_datasource
               withOtmlVC:(OTMLViewController*)_viewController;

- (void) clearHeaderDescriptior;

@end
