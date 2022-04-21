//
//  OTMLUpdaterError.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(unsigned int, OTMLUpdateError) {
    OTMLUpdateError_generic = 0,
    OTMLUpdateError_network_error,                              //apply current
    OTMLUpdateError_network_invalid_statuscode,                 //apply current
    OTMLUpdateError_network_invalid_response,                   //apply current
    OTMLUpdateError_descriptor_invalid_bundle_descriptor,       //download manifest and contents
    OTMLUpdateError_descriptor_invalid_downloaded_contents,      //apply current
    OTMLUpdateError_descriptor_invalid_downloaded_descriptor,   //apply current
    OTMLUpdateError_descriptor_invalid_working_descriptor,      //apply current
    OTMLUpdateError_descriptor_cant_store_working_descriptor,
    OTMLUpdateError_descriptor_invalid_new_current_descriptor,
    OTMLUpdateError_descriptor_no_before_app_ready_actions_executed, //10
    OTMLUpdateError_protected_data_not_available,
    OTMLUpdateError_already_updating,
    OTMLUpdateError_blocking_update_requested
};

@interface OTMLUpdaterError : NSObject

+(NSError*)errorWithCode:(OTMLUpdateError)aCode;


@end
