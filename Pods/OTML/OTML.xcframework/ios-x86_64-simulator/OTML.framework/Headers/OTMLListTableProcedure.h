//
//  OTMLListTableProcedure.h
//  OTMLFramework
//
//  Created by epavoni on 20/12/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"
@class OTMPDatasourceElementSorter;
@class OTMLTableListAdapterSectionBean;

typedef enum {
    OTMLListTableProcedureSortOrderAscending,
    OTMLListTableProcedureSortOrderDescending
}OTMLListTableProcedureSortOrder;

typedef enum {
    OTMLListTableProcedureSortTypeNumber,
    OTMLListTableProcedureSortTypeString
}OTMLListTableProcedureSortType;


@interface StubRowComponent : OTMLComponent

- (id)initWithDSE:(OTMLDatasource*)aDSE
           parent:(OTMLComponent*)aParent
              row:(int)aRow
          section:(int)aSection;

@end

@protocol OTMLListTableProcedure <NSObject, NSCopying>

/**
 @discussion
  Define a filter computation.
 @param aSectionList
  the array of datasource of a single section
 @return 
  an array of NSNumber containing ony the filtered, sorted valid elements
 */
-(NSArray*)computeFilterMapForSectionList:(NSArray*)aSectionList
                         inSectionINdexed:(unsigned int) aSectionIndex
                 usingParentForResolution:(OTMLComponent*)the_parent;

@end

@interface OTMLListTableBlockedFilterProcedure : NSObject<OTMLListTableProcedure>

-(void)addToBlockedFilterSection:(int)originalSecrion andRow:(int)originalRow;
-(void)resetBlockedFilter;
-(BOOL)isEmpty;

@end

@interface OTMLListTableSortProcedure : NSObject<OTMLListTableProcedure>

- (id)initWithSortKey:(NSString*)aSortKey orderDirection:(OTMLListTableProcedureSortOrder) aSortOrder sortType:(OTMLListTableProcedureSortType)aSortType resolveAsSrcID:(BOOL)shouldResolveAsSrcID;

- (id)initWithSortKey:(NSString*)aSortKey orderDirection:(OTMLListTableProcedureSortOrder) aSortOrder sortType:(OTMLListTableProcedureSortType)aSortType;

- (id)initWithOTMPDatasourceElementSorter:(OTMPDatasourceElementSorter*)aSorter __attribute__((deprecated));

@end

@interface OTMLListTableFilterEntriesProcedure : NSObject<OTMLListTableProcedure>

-(id) initWithConditionWithID:(NSString*) the_condition_ref_id;

@end

@interface SortAndFilterEachSection : NSObject<OTMLListTableProcedure>

-(void)addToBlockedFilterSection:(int)originalSecrion andRow:(int)originalRow;
-(void)resetBlockedFilter;
-(void)setSorter:(OTMLListTableSortProcedure*)aSorter;
-(void)setFilter:(OTMLListTableFilterEntriesProcedure*)aFilter;

@end
