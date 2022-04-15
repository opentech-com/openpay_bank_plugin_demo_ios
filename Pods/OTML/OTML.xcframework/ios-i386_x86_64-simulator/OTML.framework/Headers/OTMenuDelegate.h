//
//  OTMenuDelegate.h
//  com.opentech.toyprojects.accordion
//
//  Created by Silvio D'Angelo on 28/03/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTMenuEntryModelStyle.h"
#import "OTMenuEntryModelObject.h"


@protocol OTMenuDelegate

-(OTMenuEntryModelObject *) modelObjectForEntryAtIndex:(NSUInteger)aSectionImdex;
-(OTMenuEntryModelStyle *) styleForFirstLevelEntryAtIndex:(NSUInteger)aSectionImdex;
-(OTMenuEntryModelStyle *) secondLevelEntryViewStyle;
-(NSUInteger) numberOfFirstLevelEntries;

@end
