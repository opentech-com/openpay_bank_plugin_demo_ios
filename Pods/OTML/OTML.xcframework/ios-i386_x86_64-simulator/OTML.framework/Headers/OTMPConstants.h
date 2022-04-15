//
//  MPConstants.h
//  IMobilePlasma
//
//  Created by Silvio D'Angelo on 15/11/11.
//  Copyright (c) 2011 Opentech ENG. All rights reserved.
//

#ifndef IMobilePlasma_MPConstants_h
#define IMobilePlasma_MPConstants_h

/********************** MPSecureConnection related parameters **********************/
#undef AppOurUserAgent
#define AppOurUserAgent @"Mozilla/5.0 (iPhone; U; CPU OS 3_2 like Mac OS X; en-us) AppleWebKit/531.21.10 (KHTML, like Gecko) Version/4.0.4 Mobile/7B334b Safari/531.21.10"

/***********************************************************************************/


#define OTML_VERSION @"1.07"
#define OTNotFound INT_MAX

static NSString* const OTML_PARAMETER_INTERNAL_PREFIX = @"otml_";
static NSString* const OTML_PARAMETER_INTERNAL_STACK = @"otml_stack";
static NSString* const OTML_PARAMETER_INTERNAL_TARGET_CONTEXT = @"otml_context";
static NSString* const OTML_PARAMETER_INTERNAL_ORIGINAL_CONTEXT = @"otml_original_context";
static NSString* const OTML_PARAMETER_IN_ANIMATION = @"otml_in_animation";
static NSString* const OTML_PARAMETER_TYPE_ANIMATION = @"otml_type_animation";

#endif
