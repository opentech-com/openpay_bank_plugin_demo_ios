//
//  OTMLBeanModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 06/05/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLNetworkUtil.h"
#import "OTMLMargin.h"
#import "OTMLUpdateBeansSection.h"
#import "OTMPHTTPSCertificateModel.h"
#import "OTMLCampaignAttributionConfiguration.h"
#import "OTMPNetworkHmacSigningConfiguration.h"
#import "OTMLStringsModel.h"

@class OTMLFont;

@interface OTEndpoint : NSObject

@property NSString* url;
@property NSString* identifier;

@end

@interface OTMLEngineBeanModel : NSObject


//extern NSString* const baseAddressPlaceholder;
//extern NSString* const baseAddressPlaceholder2;



/**** IMMUTABLE PROPERTIES (possono essere cambiate solo dall'app) ****/

@property (nonatomic, strong) NSData* secureFileStorageAES_IV;
@property (nonatomic, strong) NSData* secureFileStorageAES_Key;

@property (nonatomic, strong) NSString* extensionsAppGroup;
@property (nonatomic, strong) NSString* extensionsKeychainAccessGroup;
@property (nonatomic, assign) BOOL isPushServiceInstalled;

@property NSArray<OTEndpoint*>* endpoints;
@property (nonatomic, assign) NSUInteger fileSetVersion;
@property (nonatomic, strong) NSString* httpConnectionsBaseAddress;
@property (nonatomic, strong) NSString* httpConnectionsBaseAddress2;
@property LangPhraseForPlaceholder otmlReservedPlaceholderMode;
@property (nonatomic, strong) NSDictionary* httpConnectionsBaseAddressMapping;

//@property (nonatomic, strong) NSString* httpConnectionsBaseAddress2;
@property (nonatomic, strong) NSString* fingerprintForDemoMode;
@property (nonatomic, strong) NSString* otmlPublicCert;
@property (nonatomic, strong) NSString* otmlInternalVersion;
@property (nonatomic, strong) NSString* otmlDevVersion;
@property (nonatomic, assign) BOOL enableResponderSwitch;
@property (nonatomic, strong) NSString* otmlGitVersions;
@property (nonatomic, strong) NSString* uniqueId;
@property (nonatomic, strong) NSString* applicationName;
@property (nonatomic, strong) NSString* appVariantName;
@property (nonatomic, strong) NSString* vendorIDVariantPostfixForUniqueness;


/**** MUTABLE PROPERTIES (possono essere cambiate dall'app e dall'updater) ****/
//localization
@property (nonatomic,strong) NSString* otml_supported_languages;
@property (nonatomic,strong) NSString* otml_default_lang;
@property (nonatomic,strong) NSString* otml_alias_locales;

//network
@property (nonatomic, assign) int otml_update_network_timeout;
@property (nonatomic, assign) int otml_get_post_network_timeout;
@property (nonatomic, assign) int otml_doc_download_network_timeout;
@property (nonatomic, assign) int otml_cache_size_in_byte;
@property (nonatomic, assign) BOOL otml_updater_uses_rest_cookie_store;
@property (nonatomic, strong) NSString* otml_redirection_policy;//NON usare direttamente! Usa il metodo!
@property (nonatomic, strong) NSString* otml_valid_certificate_list;//Queste possono arrivare dall'updater
@property (nonatomic, strong) NSString* otml_push_ack_endpoint_mapping;
@property BOOL disable_certificate_pinning;
@property OTMPNetworkHmacSigningConfiguration* otml_hmac_signing_configuration;
@property (nonatomic, strong) NSString* otml_hmac_header_fields;

//preferences
@property (nonatomic, assign) BOOL disable_hide_screen_on_screen_recording;
@property (nonatomic, assign) BOOL otml_need_skip_animations;
@property (nonatomic, assign) BOOL otml_need_skip_linear_container_animations;
@property (nonatomic, assign) BOOL otml_is_cache_enabled;
@property (nonatomic, assign) BOOL otml_is_context_enabled;
@property (nonatomic, assign) BOOL otml_enable_jump_to_error;
@property (nonatomic, strong) NSString* otml_updater_update_progressbar_visibility_mode;
@property (nonatomic, assign) int otml_updater_update_progressbar_visibility_delay;
@property (nonatomic, strong) NSString* otml_update_loading_type;
@property (nonatomic, strong) NSString* otml_statusbar_style;
@property (nonatomic, strong) NSString* otml_device_target; //NON usare direttamente! Usa il metodo!
@property (nonatomic, strong) NSString* otml_update_policy;
@property (nonatomic, assign) BOOL otml_periodic_update_enabled;
@property (nonatomic, assign) float otml_button_filter_delay;
@property OTMLCampaignAttributionConfiguration* campaignAttributionConfiguration;
/**
  if true, otml will synchronyze with the iCloud key value store; defaults false
 */
@property BOOL should_fetch_ubiquitous_key_value_storage;


//push
@property (nonatomic,strong) NSString* push_detail_endpoint;
@property (nonatomic,strong) NSString* otml_android_sender_id; // it is used by BusinessNet, do not remove.

//otml elements skin
@property (nonatomic, strong) UIColor* popup_background_color;
@property (nonatomic, strong) UIColor* skin_error_background_color;
@property (nonatomic, strong) OTMLFont* skin_error_text_font;
@property (nonatomic, strong) NSString* skin_error_icon;

@property (nonatomic, strong) UIColor* skin_otml_tabbar_badge_text_color;
@property (nonatomic, strong) UIColor* skin_otml_tabbar_badge_bg_color;

@property (nonatomic, strong) OTMLFont* skin_otml_update_progressbar_loading_font;
@property (nonatomic, strong) UIColor* skin_otml_update_progressbar_loading_track_color;
@property (nonatomic, strong) UIColor* skin_otml_update_progressbar_loading_progress_color;
@property (nonatomic, assign) int skin_otml_update_progressbar_bottom_margin;

@property (nonatomic, readonly) BOOL isLottieWaitView;
@property (nonatomic, readonly) NSDictionary* processedOtmlFullscreenLoadingLottieAnimation;
@property (nonatomic, strong) NSString* otml_fullscreen_loading_lottie_animation;
@property (nonatomic, assign) int otml_fullscreen_loading_lottie_width;
@property (nonatomic, assign) int otml_fullscreen_loading_lottie_height;


@property (nonatomic, strong) UIColor* b1_obscured_color;
@property (nonatomic, assign) BOOL b1_blur_behind;

@property (nonatomic, strong) OTMLFont* skin_toast_font;
@property (nonatomic, strong) UIColor* skin_toast_background_color;
@property (nonatomic, assign) int skin_toast_corner_radius;
@property (nonatomic, strong) NSString* skin_toast_padding;

@property (nonatomic, strong) UIColor* skin_keyboard_bar_bg_color;
@property (nonatomic, strong) OTMLFont* skin_keyboard_bar_text_font;
@property (nonatomic, assign) BOOL keyboard_bar_enabled;

@property (nonatomic, assign) int anchor_offset;
@property (nonatomic, assign) int anchor_min_offset;
@property (nonatomic, assign) BOOL anchor_disable_scroll_to_dismiss;

// push Skin
@property (nonatomic, strong) UIColor* push_toast_bg_color;
@property (nonatomic, strong) NSString* push_close_button_image;
@property (nonatomic, strong) NSString* ios_push_bg_image_n;
@property (nonatomic, strong) OTMLFont* ios_push_title_font;
@property (nonatomic, strong) OTMLFont* ios_push_subtitle_font;

// BootScreenViewController hooks
@property (nonatomic, copy) UIInterfaceOrientationMask (^applicationChoiceForSupportedInterfaceOrientations)(void);

//app handle semi-native errors
@property (nonatomic, assign) BOOL handle_notify_otml_session_expired;//x
@property (nonatomic, assign) BOOL handle_notify_otml_no_internet_connection_error;//x
@property (nonatomic, assign) BOOL handle_notify_otml_communication_error;//x

//app side constants
@property (nonatomic, strong) NSDictionary* app_constants;

//addon side constants
@property (nonatomic, strong) NSDictionary* addons_constants;



/** valori derivati a partire dal modello sono restituiti da metodi  **/


-(BOOL)isTargetSmartphoneAndTablet;
-(BOOL)isTargetTablet;
-(BOOL)isTargetSmartphone;

-(NSArray*)getCertificatePinningValidCertificatesList;
-(void)setCertificatePinningValidCertificatesList:(NSArray<OTMPHTTPSCertificateModel*>*)certificatesList;

-(OTMLHTTPRedirectionPolicy)getHTTPRedirectionPolicy;

-(NSArray*)getSupportedLangList;

@end
