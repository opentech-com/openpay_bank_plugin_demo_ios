//
//  OTMLSignedNSData.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 28/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


@interface OTMLSignedData : NSObject

@property (nonatomic, strong) NSData * contentData;
@property (nonatomic, strong) NSData * contentSign;

-(instancetype)initWithData:(NSData*)aData andSign:(NSData*)aSign;
-(BOOL)isValidWithRSAPublicKey:(NSString*)aPublicKey;

@end
