//
//  OTMPAddressbookReader.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 24/07/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <AddressBookUI/AddressBookUI.h>

#import "OTMPAddressbookReaderUtils.h"
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>
#import "OTMPAppUtil.h"

@interface OTMPAddressbookReader : NSObject <OTMLRestartAppAwareProtocol>

+(OTMPAddressbookReader*)getInstance;

- (void)setAndStartAttributeFilters:(NSString*)_filters withNoOptionsField:(NSString*)_noOptionsField withOrderSort:(MPOrderSort)_orderSort withPhoneMinChar:(NSInteger)_phoneMinChar withPhoneMaxChar:(NSInteger)_phoneMaxChar completition:(ABAddressBookRequestAccessCompletionHandler) completion;

- (NSArray*) getContactListDatasource;
-(UIImage*)getPhonebookImageWithID:(NSString*)_contactId;

@property (nonatomic, strong) NSArray * contactList;

@end
