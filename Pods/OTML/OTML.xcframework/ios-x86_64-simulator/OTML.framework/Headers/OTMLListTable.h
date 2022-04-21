//
//  OTMLListTable.h
//  OTMLFramework
//
//  Created by epavoni on 11/12/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"
#import "OTMLListTableAdapter.h"
#import "OTML_DSUpdaterComponentProtocol.h"

static NSString* const OTMLID_ROW_SECTION_ID_SEPARATOR=@":";
static NSString* const OTMLID_ROW_SECTION_START_WRAPPER=@"[";
static NSString* const OTMLID_ROW_SECTION_END_WRAPPER=@"]";

@interface OTMLListTable : OTMLComponent<UITableViewDataSource, UITableViewDelegate, OTMLListTableAdapterDelegate, OTML_DSUpdaterComponentProtocol>{
    
	@private NSString * tableDS;
	@private BOOL rePrepare;
}

@property (nonatomic, assign) BOOL dequeue_behavior_enabled;


-(void)invalidateRow:(OTMLComponent*)aComponentRow
 andPropagateToChild:(BOOL)proagate
  propagateToParents:(BOOL)propagateToParents
  shouldUpdateFrames:(BOOL)rameMustBeUpdated;

/**
@disuccion
Programmatically swipe or resets the entry at OriginalIndexPath.
@note
This will not invoke any callback, but will set the current swiped path
@note
Asking to select a non existing row will deselect current one (this assumption is also valid for negative row/section selected)
@param isSwipeMode YES if the row shall be swiped, NO if it shall not be swiped
@param indexPath the index path to swipe/un-swipe on the table
*/
-(void)rowInSwipeMode:(BOOL) isSwipeMode
          atIndexPath:(NSIndexPath*)indexPath;

@end
