//
//  OTMLUpdTraceModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/01/17.
//  Copyright © 2017 Opentech ENG. All rights reserved.
//

#import "OTMLTraceModel.h"

@class OTMLAdvancedUpdaterDelegateBase;


@interface OTMLUpdTraceModel : OTMLTraceModel

//start
@property (nonatomic, assign) unsigned int upd_update_skipped_reason;

//END
@property (nonatomic, assign) BOOL upd_is_result_OK;
@property (nonatomic, strong) NSString * upd_launched_trigger;

//BG
@property (nonatomic, assign) BOOL upd_background_task_did_expire;

//p1_check
@property (nonatomic, assign) BOOL upd_is_update_available;
@property (nonatomic, assign) BOOL upd_is_blocking_update;
@property (nonatomic, assign) double  update_check_elapsed;

//p2_download
@property (nonatomic, assign) unsigned int upd_num_bytes_to_download;
@property (nonatomic, assign) unsigned int upd_num_resources_to_download;
@property (nonatomic, assign) unsigned int upd_num_resources_current_manifest;
@property (nonatomic, assign) unsigned int upd_num_resources_new_manifest;
@property (nonatomic, assign) unsigned int upd_num_resources_to_copy;
@property (nonatomic, assign) unsigned int upd_num_resources_duplicates;
@property (nonatomic, assign) unsigned int upd_num_resources_missing_in_current;
@property (nonatomic, assign) unsigned int upd_num_resources_deleted;
@property (nonatomic, assign) unsigned int upd_num_resources_to_copy_from_bundle;
@property (nonatomic, assign) unsigned int upd_num_resources_to_copy_from_filesystem;
@property (nonatomic, assign) double resources_download_elapsed;


- (instancetype)initWithUpdaterDelegate:(OTMLAdvancedUpdaterDelegateBase*)updaterDelegate;

@end
