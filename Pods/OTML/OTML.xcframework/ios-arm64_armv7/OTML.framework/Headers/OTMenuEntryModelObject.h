//
//  OTMenuEntryModelObject.h
//  com.opentech.toyprojects.accordion
//
//  Created by Silvio D'Angelo on 28/03/2018.
//  Copyright © 2018 Opentech. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface OTMenuEntryModelObject : NSObject

@property(strong, nullable) NSString* badge;
@property(strong, nonnull) NSString* title;
@property(strong, nullable) NSString* subtitle;
@property(strong, nullable) NSString* optionalButtonTitle;

@property(strong, nullable) NSArray<OTMenuEntryModelObject*>* subentries;


// the open animation is proveded by the framework, use this to perform additional operations
// this will be called (if not null) when expanse/collapse animation did end.
// NOTE:  this will be called only for second level entries or first level entries without subentries.
@property(nonatomic, copy, nullable) void (^menuEntryPressed)(void);

// this property makes sense only for entries with subentries
// it is false for entries having 0 subentries.
@property(assign) BOOL opened;

@end
