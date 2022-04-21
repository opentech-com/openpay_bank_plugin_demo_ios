//
//  OTMPStringsDataBean.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 30/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//


#import <OTMLModels/OTMLTextResolutionMode.h>
#import "OTMLViewController.h"

typedef NS_ENUM(NSUInteger, LangPhraseForPlaceholder) {
    Normal,
    Full,
    PlaceholderNames
};

@interface OTMLStringsModel : NSObject

#define string_download_completed_toast @"string_download_completed_toast"
#define string_download_started_toast @"string_download_started_toast"
#define string_download_failed_toast @"string_download_failed_toast"
#define string_download_with_name_ready @"string_download_with_name_ready"
#define string_pull_to_refresh_step1 @"string_pull_to_refresh_step1"
#define string_pull_to_refresh_step2 @"string_pull_to_refresh_step2"
#define string_pull_to_refresh_step3 @"string_pull_to_refresh_step3"
#define string_error_title_cant_print @"string_error_title_cant_print"
#define string_error_body_cant_print @"string_error_body_cant_print"
#define string_error_title_cant_perform_otml_update @"string_error_title_cant_perform_otml_update"
#define string_error_body_cant_perform_otml_update @"string_error_body_cant_perform_otml_update"
#define string_error_title_connection_error @"string_error_title_connection_error"
#define string_error_body_connection_error @"string_error_body_connection_error"
#define string_error_title_no_internet_error @"string_error_title_no_internet_error"
#define string_error_body_no_internet_error @"string_error_body_no_internet_error"
#define string_info_title_locale_change_restart_required @"string_error_body_no_internet_error"
#define string_info_body_locale_change_restart_required @"string_info_body_locale_change_restart_required"
#define string_error_title_cant_complete_download @"string_error_title_cant_complete_download"
#define string_error_body_cant_complete_download @"string_error_body_cant_complete_download"
#define string_error_title_cant_open_browser @"string_error_title_cant_open_browser"
#define string_error_body_cant_open_browser @"string_error_body_cant_open_browser"
#define string_error_title_cant_open_skype @"string_error_title_cant_open_skype"
#define string_error_body_cant_open_skype @"string_error_body_cant_open_skype"
#define string_error_title_cant_send_email @"string_error_title_cant_send_email"
#define string_error_body_cant_send_email @"string_error_body_cant_send_email"
#define string_info_title_exit_app @"string_info_title_exit_app"
#define string_info_body_exit_app @"string_info_body_exit_app"
#define string_error_title_session_expired @"string_error_title_session_expired"
#define string_error_body_session_expired @"string_error_body_session_expired"
#define string_error_title_cant_make_call @"string_error_title_cant_make_call"
#define string_error_body_cant_make_call @"string_error_body_cant_make_call"
#define string_otml_update_started @"string_otml_update_started"
#define string_otml_update_in_progress @"string_otml_update_in_progress"
#define string_otml_update_completed @"string_otml_update_completed"
#define string_keyboard_next_label @"string_keyboard_next_label"
#define string_keyboard_prev_label @"string_keyboard_prev_label"
#define string_keyboard_done_label @"string_keyboard_done_label"
#define string_ok_button @"string_ok_button"
#define string_cancel_button @"string_cancel_button"
#define string_popup_done_label @"string_popup_done_label"
#define string_error_title_generic_error @"string_error_title_generic_error"
#define string_error_body_generic_error @"string_error_body_generic_error"

-(void) configurePhrasingBaseWithSupportedLangList:(NSArray*) normalizedLangs;

-(NSString*)getCurrentLangPhraseForPlaceholder:(NSString*)placeholder;
-(NSString*)getCurrentLangPhraseFromPlaceholder:(NSString*)_placeholder wihType:(OTMLTextResolutionMode)_type;
-(NSString*)getCurrentLangPhraseFromPlaceholder:(NSString*)_placeholder wihType:(OTMLTextResolutionMode)_type withOTMLVC:(OTMLViewController*)_theVC;

-(void)applyAsDeltaLocalizationMapSet:(NSDictionary*)toApplyAsDelta;

-(void)removeNotCurrentLocaleStringMaps:(NSString*) aCurrLoc;

@end
