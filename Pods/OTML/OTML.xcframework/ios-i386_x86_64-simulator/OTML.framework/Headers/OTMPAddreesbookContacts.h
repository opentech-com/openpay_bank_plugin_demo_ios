//
//  OTMPAddreesbookContactUtils.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 18/05/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@interface OTMPAddreesbookContacts : NSObject

- (NSArray*)getAllContactWithNoOptionsFieldArray:(NSArray *)noOptionsFieldArray _phoneMaxChar:(NSInteger)_phoneMaxChar _phoneMinChar:(NSInteger)_phoneMinChar imageDimesionFilter:(NSString *)imageDimesionFilter filterMap:(int)filterMap;


-(UIImage*)getThumbnailImageFromContactID:(NSString*)aContactID;

@end
