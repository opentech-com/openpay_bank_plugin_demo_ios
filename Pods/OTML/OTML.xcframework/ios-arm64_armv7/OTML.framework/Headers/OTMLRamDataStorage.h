//
//  OTMLRamDataStorage.h
//  OTML_DEV
//
//  Created by Valerio Ferrantelli on 08/03/2019.
//

#import <Foundation/Foundation.h>
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@interface OTMLRamDataStorage : NSObject <OTMLRestartAppAwareProtocol>


+(OTMLRamDataStorage*)getInstance;
-(void)setValue:(NSString*)aValue forKey:(NSString*)aKey withDictionaryName:(NSString*)aName;
-(void)resetDictionaryWithName:(NSString*)aName;
-(void)deleteValueForKey:(NSString*)aKey withDictionaryName:(NSString*)aName;
-(NSString*)valueForKey:(NSString*)aKey withDictionaryName:(NSString*)aName;
-(NSDictionary*)dictionaryWithName:(NSString*)aName;
-(void)setDictionary:(NSDictionary*)aDic withName:(NSString*)aName;

@end

