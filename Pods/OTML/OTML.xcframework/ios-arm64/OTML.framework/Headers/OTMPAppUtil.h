//
//  OTMPAppUtil.h
//  OTML
//
//  Created by Valerio Ferrantelli on 16/05/2019.
//
#import <OTMLCore/OTMLDumpableModuleProtocol.h>

typedef enum {
    MPOrderSort_none,
    MPOrderSort_incremental_displayname,
    MPOrderSort_incremental_firstname,
    MPOrderSort_incremental_lastname,
    MPOrderSort_incremental_fullName,
    MPOrderSort_decremental_displayname,
    MPOrderSort_decremental_firstname,
    MPOrderSort_decremental_lastname,
    MPOrderSort_decremental_fullName
} MPOrderSort;

typedef enum {
    MPContactFilter_undefined       = 0,
    MPContactFilter_contactid       = 1 << 0,
    MPContactFilter_firstname       = 1 << 1,
    MPContactFilter_lastname        = 1 << 2,
    MPContactFilter_middlename      = 1 << 3,
    MPContactFilter_prefix          = 1 << 5,
    MPContactFilter_suffix          = 1 << 6,
    MPContactFilter_displayname     = 1 << 7,
    MPContactFilter_fullName        = 1 << 8,
    MPContactFilter_emailAll        = 1 << 9,
    MPContactFilter_emails          = 1 << 10,
    MPContactFilter_email           = 1 << 11,
    MPContactFilter_image           = 1 << 12,
    MPContactFilter_birthday        = 1 << 13,
    MPContactFilter_address         = 1 << 14,
    MPContactFilter_addressstreet   = 1 << 15,
    MPContactFilter_addresscity     = 1 << 16,
    MPContactFilter_addressstate    = 1 << 17,
    MPContactFilter_addresszip      = 1 << 18,
    MPContactFilter_addresscountry  = 1 << 19,
    MPContactFilter_phoneAll        = 1 << 21,
    MPContactFilter_phone           = 1 << 22,
    MPContactFilter_phonemobile     = 1 << 23,
    MPContactFilter_phonefax        = 1 << 24,
    MPContactFilter_phones          = 1 << 25,
    MPContactFilter_photo_uri       = 1 << 26,
    MPContactFilter_initials        = 1 << 27
} MPContactFilter;

@interface OTMPAppUtil : NSObject <OTMLDumpableModuleProtocol>

+(NSString*)getReleaseMode;
+(NSString*)getApplicationState;
+(NSString*)getExternalVersion;
+(NSString*)getInternalVersion;

@end

