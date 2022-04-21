//
//  FactoryInterface.h
//  OTMLFramework
//
//  Created by MetaModelli
//  Copyright (c) 2017 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TBXML.h"

@class OTMLLayoutModel;

@protocol LayoutFactoryInterface <NSObject>

-(OTMLLayoutModel*) newModelfromXMLEntry:(TBXMLElement*) aEntryElement;

@end
