//
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 06/05/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


@interface OTMLAmountFormatter : NSObject

@property (nonatomic, retain) NSLocale * locale;
@property (nonatomic, assign) int minDecimalDigits;
@property (nonatomic, assign) int maxDecimalDigits;
@property (nonatomic, assign) int maxIntegerDigits;

@property (nonatomic, assign) NSNumberFormatterRoundingMode roundingPolicy;
@property (nonatomic, assign) BOOL isAmount;
@property (nonatomic, retain) NSString * currencySymbol;

@property (nonatomic, retain) NSString * toAppendString; //dont use for currency!
@property (nonatomic, retain) NSString * toPrependString;


/**
 Ritorna un formatter che usa solo valori di default
 locale = OTMLLangManager currentLocale
 minDecimalDigits = 2
 maxDecimalDigits = 2
 roundingPolicy = OTMPNumberFormatterRoundingRound
 isAmount = NO
 currencySymbol = ""
 */
+(OTMLAmountFormatter*)defaultFormatter;


/**
 
 NOMENCLATURA:
 - number string: una stringa contenente un numero come definito nella wiki xxx.yyy
 - formatted string: una stringa contenente un numero completamente formattato (currency, prefix, ecc)
 - editing number string: una stringa contenente un numero del tipo xxx.yyy ma con il separatore decimali localizzato (stranezza usata da textfield amount)
 
 **/


/*
 @param aNumber un oggetto number
 @return ritorna una editing number string (es: xxxx,yyyy per it_IT)
 */
-(NSString *)editingNumberStringWithNumber:(NSNumber *)aNumber;

/**
 @param aNumber un oggetto number
 @return ritorna una number string (es: xxxx.yyyy)
 Note: se si stampa un number a cui è stato applicato un rounding senza passare per questo il rounding è perso
 **/
-(NSString *)numberStringWithNumber:(NSNumber *)aNumber;

/*
 @param aNumber un oggetto number
 @return ritorna formatted string (es: x.xxx,yyyy €)
 */
-(NSString*)formattedStringWithNumber:(NSNumber*)aNumber; //tipycally NSDecimalNumber


/*
 @param aNumber una stringa formatted string (es: x.xxx,yyyy €)
 @return un oggetto number
 */
-(NSNumber*)numberWithFormattedString:(NSString*)formattedString;


/*
 @param numberString una number string (es: xxxx.yyy)
 @return un oggetto number
 */
+(NSNumber *)numberWithNumberString:(NSString *)numberString;

/*
 @param aNumber una editing number string (es: xxxx,yyy)
 @return: un oggetto number
 */
-(NSNumber *)numberWithEditingNumberString:(NSString *)editingNumberString;


-(NSString*)numberStringWithEditingNumberString:(NSString*)editingNumberString;

/*
 @param formattedString una formatted string (es: x.xxx,yyy €)
 @return un number string (es: xxx.yyy)
 */
-(NSString *)numberStringWithFormattedString:(NSString *)formattedString;

/**
 @param numberString una number string (es: x.xxx)
 @return un number string intero (es: xxx) che corrisponde alla parte decimale di numberString
 */
-(NSString *) decimalPartFromNumberString:(NSString *) numberString;

/*
 utils bridge
 */
-(NSString*)editingNumberStringWithFormattedString:(NSString*)formattedString;
-(NSString*)formattedStringWithEditingNumberString:(NSString*)editingNumberString;

+(NSString*)roundNumber:(NSString*)aNumber withScale:(int)aScale andRoundingMode:(NSNumberFormatterRoundingMode)aMode;

@end

