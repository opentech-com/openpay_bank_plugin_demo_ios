//
//  OTMPAddressbookReaderUtils.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 18/05/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Contacts/Contacts.h>
#import "OTMPAppUtil.h"

@class OTMLDatasource;
extern NSString* const phonebook_image_id_string;

@interface OTMPAddressbookReaderUtils : NSObject

+(NSString*) allFiltersString;
+(NSCharacterSet*) getPhoneNumberCharacterSetNotValid;

+(BOOL) phoneIsValid:(NSString*)_phone
    withPhoneMinChar:(NSInteger)_phoneMinChar
     andPhoneMaxChar:(NSInteger)_phoneMaxChar;

+(int)getHasMapFilterFromFilterArray:(NSArray*)_filtersArray;

+(NSDictionary*) fillAttributeFromRecordRef:(CNContact*)ref
                              withFilterMap:(int)filterMap
                   withImageDimesioneFilter:(NSString*)_imageFilter
                           withPhoneMinChar:(NSInteger)_phoneMinChar
                           withPhoneMaxChar:(NSInteger)_phoneMaxChar;

+(NSString*)createDisplayNameFromCNContact:(CNContact*)_ref;

+(NSArray*)getContactListDatasource:(NSArray*) aContatcs;

+ (NSArray<OTMLDatasource*> *)dsElementsFromContactInstance:(CNContact *)cnContacts
                                              filteringKeys:(NSArray *) interestingKeys;

@end
