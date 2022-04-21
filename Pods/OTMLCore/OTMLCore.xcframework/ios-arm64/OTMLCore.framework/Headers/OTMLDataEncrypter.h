//
//  OTMLDataEncrypter.h
//  OTML
//
//  Created by Silvio D'Angelo on 12/03/2019.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMLDataEncrypter : NSObject

-(void)setKey:(NSString*)aKey; // no default, beware of Key lenght (exceptions are thrown)
-(void)setIV:(NSString*)aIV; // no default, beware of IV lenght (exceptions are thrown)

-(void)setDataKey:(NSData*)aKey; // no default, beware of Key lenght (exceptions are thrown)
-(void)setDataIV:(NSData*)aIV; // no default, beware of IV lenght (exceptions are thrown)

-(NSData *) encrypt:(NSData*) theData;
-(NSData *) decrypt:(NSData*) theData;

@end

NS_ASSUME_NONNULL_END
