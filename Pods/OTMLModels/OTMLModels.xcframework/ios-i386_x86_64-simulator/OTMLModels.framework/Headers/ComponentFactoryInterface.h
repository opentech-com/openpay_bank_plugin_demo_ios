//
//  FactoryInterface.h
//  OTMLFramework
//
//  Created by MetaModelli
//  Copyright (c) 2017 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TBXML.h"

@class OTMLComponentModel;

@protocol ComponentFactoryInterface <NSObject>

-(OTMLComponentModel*) newModelfromXMLEntry:(TBXMLElement*) aEntryElement;

@end
