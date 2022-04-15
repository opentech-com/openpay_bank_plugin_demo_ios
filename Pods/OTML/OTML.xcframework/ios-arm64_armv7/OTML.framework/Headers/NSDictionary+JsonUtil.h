//
//  NSDictionary+JsonUtil.h
//  Pods
//
//  Created by Valerio Ferrantelli on 18/01/17.
//
//


@interface NSMutableDictionary (JsonUtil)

-(void)setBool:(BOOL)aBool forKey:(NSString*)aKey;
-(void)setDecimal:(double)aDecimal forKey:(NSString*)aKey;
-(void)setInteger:(int)aInt forKey:(NSString*)aKey;
-(void)setString:(NSString*)aString forKey:(NSString*)aKey;
-(void)setDate:(NSDate*)aDate forKey:(NSString*)aKey;
-(void)setArray:(NSArray*)aArray forKey:(NSString*)aKey;


//in questa variante se il valore è nil la entry non viene aggiunta
-(void)setNSBool:(NSNumber*)aBool forKey:(NSString *)aKey allowNil:(BOOL)allowNil;
-(void)setNSDecimal:(NSNumber*)aDecimal forKey:(NSString*)aKey allowNil:(BOOL)allowNil;
-(void)setNSInteger:(NSNumber*)aInt forKey:(NSString*)aKey allowNil:(BOOL)allowNil;
-(void)setNSString:(NSString*)aString forKey:(NSString*)aKey allowNil:(BOOL)allowNil;
-(void)setNSDate:(NSDate*)aDate forKey:(NSString*)aKey allowNil:(BOOL)allowNil;
-(void)setNSArray:(NSArray*)aArray forKey:(NSString*)aKey allowNil:(BOOL)allowNil;


    
@end
