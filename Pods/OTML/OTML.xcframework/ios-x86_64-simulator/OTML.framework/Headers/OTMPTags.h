//
//  MPTags.h
//  OTMLFramework
//
//  Created by epavoni on 20/05/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


#pragma mark - OTML
#pragma mark - 111xxx
#pragma mark OTMLComponent -> VIEW_TAG
typedef enum {
    VIEW_TAG_FOR_CONTENT             = 111001,
    VIEW_TAG_FOR_CONTAINER_BG        = 111002,
    VIEW_TAG_FOR_SIMPLE_BUTTON       = 111003,
    VIEW_TAG_FOR_BUTTON_CONTAINER    = 111004,
    VIEW_TAG_FOR_COLLAPSABLE_BT      = 111005,
    VIEW_TAG_FOR_COLLAPSABLE_LBL     = 111006,
    VIEW_TAG_FOR_COLLAPSABLE_LBL2    = 111007,
    VIEW_TAG_FOR_COLLAPSABLE_VASSOIO = 111008
} VIEW_TAG;

#pragma mark *
#pragma mark 112xx
#pragma mark defaultpopup -> MPTAG_OTML_POPUP
typedef enum {
    MPTAG_OTML_POPUP_DISMISS                    = 11201,
    MPTAG_OTML_POPUP_HEADER                     = 11202,
    MPTAG_OTML_POPUP_FOORTER                    = 11203
} MPTAG_OTML_POPUP;

#pragma mark *
#pragma mark 113xx
#pragma mark OTMLLoading -> MPTAG_OTML_LOADING
typedef enum {
    MPTAG_OTML_LOADING_LABEL                    = 11301,
    MPTAG_OTML_LOADING_ACTIVITY                 = 11302
} MPTAG_OTML_LOADING;

#pragma mark *
#pragma mark 114xx
#pragma mark OTMLMutableInlineCollapsableContainer -> MPTAG_OTML_MUT_INLINE_COLLAPSABLE
typedef enum {
    MPTAG_OTML_MUT_INLINE_COLLAPSABLE_LOADING   = 11401,
    MPTAG_OTML_MUT_INLINE_COLLAPSABLE_PATCH     = 11402,
    MPTAG_OTML_MUT_INLINE_DOWNLOAD_ACTIVATOR    = 11403
} MPTAG_OTML_MUT_INLINE_COLLAPSABLE;

#pragma mark *
#pragma mark 115xx
#pragma mark OTMLProgressBar -> MPTAG_OTML_PROGRESS_BAR
typedef enum {
    MPTAG_OTML_PROGRESS_BAR_YELLOW              = 11501,
    MPTAG_OTML_PROGRESS_BAR_GREY                = 11502,
    MPTAG_OTML_PROGRESS_BAR_CONTENT             = 11503,
    MPTAG_OTML_PROGRESS_BAR_SKIN                = 11504,
    MPTAG_OTML_PROGRESS_BAR_SEPARATOR           = 11505,
} MPTAG_OTML_PROGRESS_BAR;

#pragma mark *
#pragma mark 116xx
#pragma mark OTMLProgressIndicator -> MPTAG_OTML_PROGRESS_INDICATOR
typedef enum {
    MPTAG_OTML_PROGRESS_INDICATOR_LABEL         = 11601,
    MPTAG_OTML_PROGRESS_INDICATOR_IMAGE         = 11602,
    MPTAG_OTML_PROGRESS_INDICATOR_CONTAINER     = 11603
} MPTAG_OTML_PROGRESS_INDICATOR;

#pragma mark *
#pragma mark 117xx
#pragma mark OTMLSelector -> MPTAG_OTML_SELECTOR
typedef enum {
    MPTAG_OTML_SELECTOR_HEADER                  = 11701,
    MPTAG_OTML_SELECTOR_INNER_CONTENT           = 11702,
    MPTAG_OTML_SELECTOR_ACTIVATOR               = 11703,
    MPTAG_OTML_SELECTOR_VASSOIO                 = 11704,
    MPTAG_OTML_SELECTOR_CELL_LABEL              = 11705,
    MPTAG_OTML_SELECTOR_CELL_HEADER_LABEL       = 11706
} MPTAG_OTML_SELECTOR;


#pragma mark *
#pragma mark 118xx
#pragma mark CONTEXT
typedef enum {
    CONTEXT_C1                                  = 11801,
    CONTEXT_C2                                  = 11802,
    CONTEXT_C3                                  = 11803
} OTML_CONTEXT_VIEWS;


#pragma mark - MP
#pragma mark - 203xx
#pragma mark MPDatePicker -> MPTAG_MPDATE_PICKER_CONTROL
typedef enum {
    MPTAG_MPDATE_PICKER_CONTROL_LABEL           = 20301,
    MPTAG_MPDATE_PICKER_CONTROL_POPUP           = 20302,
    MPTAG_MPDATE_PICKER_CONTROL_BUTTON          = 20303,
    MPTAG_MPDATE_PICKER_CONTROL_PICKER          = 20304
} MPTAG_MPDATE_PICKER_CONTROL;

#pragma mark *
#pragma mark 205xx
#pragma mark MPOverlayeredViewsFactory -> MPTAG_MPOVERLAY
typedef enum {
    MPTAG_MPOVERLAY_ACTIVITYINDICATOR           = 20501,
    MPTAG_MPOVERLAY_BLACKBUTTON                 = 20502
} MPTAG_MPOVERLAY;

#pragma mark *
#pragma mark 206xx
#pragma mark MPSegmentedControlCustom -> MPTAG_MPSEGMENTEDCONTROL
typedef enum {
    MPTAG_MPSEGMENTEDCONTROL_LABEL              = 20601,
    MPTAG_MPSEGMENTEDCONTROL_BUTTON             = 20602
} MPTAG_MPSEGMENTEDCONTROL;
