//
//  OTMPDatasourceElementSorter.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 11/10/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


typedef enum {
    OTMPAscending,
    OTMPDescending
}OTMPSortOrder;

typedef enum {
    OTMPNumber,
    OTMPString
}OTMPKindOfSort;

@interface OTMPDatasourceElementSorter : NSObject

-(id) initWithDictionary:(NSDictionary*) theUpdParam;
-(NSArray*) sortedArrayFromDSElementArray:(NSArray*) aDSArray;

@property(nonatomic,strong) NSString* sortKey;
@property(nonatomic,assign) OTMPSortOrder order;
@property(nonatomic,assign) OTMPKindOfSort sortToApply;
@property(nonatomic,assign) BOOL resolveAsSrcID;

@end
