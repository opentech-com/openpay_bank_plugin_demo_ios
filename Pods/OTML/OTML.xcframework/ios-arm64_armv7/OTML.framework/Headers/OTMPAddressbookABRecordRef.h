//
//  OTMPAddressbookABRecordRef.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 18/05/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <AddressBookUI/AddressBookUI.h>

@interface OTMPAddressbookABRecordRef : NSObject

- (nonnull NSArray*)getOldAllContactWithNoOptionsFieldArray:(nullable NSArray *)noOptionsFieldArray
                                              _phoneMaxChar:(NSInteger)_phoneMaxChar
                                              _phoneMinChar:(NSInteger)_phoneMinChar
                                        imageDimesionFilter:(nonnull NSString *)imageDimesionFilter
                                                  filterMap:(int)filterMap;

-(nullable UIImage*)getThumbnailImageFromContactID:(nonnull NSString*)aContactID;

-(nonnull NSDictionary*)fillOldAttributeFromRecordRef:(nonnull ABRecordRef)ref
                                        withFilterMap:(int)filterMap
                             withImageDimesioneFilter:(nonnull NSString*)_imageFilter
                                     withPhoneMinChar:(NSInteger)_phoneMinChar
                                     withPhoneMaxChar:(NSInteger)_phoneMaxChar;

@end
