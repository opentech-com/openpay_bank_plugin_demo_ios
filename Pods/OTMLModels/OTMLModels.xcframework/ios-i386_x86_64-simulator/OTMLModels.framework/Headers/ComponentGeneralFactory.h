//
//  GeneralFactory.h
//  OTMLFramework
//
//  Created by epavoni on 22/08/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ComponentFactoryInterface.h"
#import "TBXML.h"
#import "OTMLComponentModel.h"

@interface ComponentGeneralFactory : NSObject

+(void) setupComponentResolvers:(NSArray*) aFactoryResolvers;

+(ComponentGeneralFactory*) getInstance;

-(OTMLComponentModel*) newModelfromXMLEntry:(TBXMLElement*) aEntryElement;

@end
