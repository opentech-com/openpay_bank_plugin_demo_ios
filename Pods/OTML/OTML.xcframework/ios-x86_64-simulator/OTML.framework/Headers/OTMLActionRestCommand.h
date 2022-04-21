//
//  OTMLActionRestCommand.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 25/01/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLActionCommandSet.h"

typedef NS_ENUM(NSUInteger, OTResponseStorage) {
    OTResponseStorage_Datasource,
    OTResponseStorage_RAM_STORAGE
};

@interface OTMLActionRestCommand : OTMLActionCommand

@property OTResponseStorage resposeStoragePolicy;

@end
