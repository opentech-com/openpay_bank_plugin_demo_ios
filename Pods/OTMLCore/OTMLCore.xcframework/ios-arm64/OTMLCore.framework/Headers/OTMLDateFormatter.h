//
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 06/05/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//



@interface OTMLDateFormatter : NSObject

@property (nonatomic, retain, nonnull) NSLocale * locale;
@property (nonatomic, assign, nullable) NSString * dateFormat;
@property (nonatomic, assign, nonnull) NSTimeZone * timezone;
@property (nonatomic, assign, nullable) NSString * amSymbol;
@property (nonatomic, assign, nullable) NSString * pmSymbol;

+(nonnull OTMLDateFormatter*)dateFormatter;

-(nonnull NSString*)formattedStringWithDate:(nonnull NSDate*)aDate;

/**
 volendo evitare i double un int o un long sono 32 bit, su processori a 32 bit, mentre long è 64bit su processore a 64bit
 usando un timestamp in millisecondi 2^32 non è sufficiente, usiamo 64 bit ->
 
 */
-(nonnull NSString*)formattedStringWithTimestamp:(long long)aTimestamp;

-(nullable NSDate*)dateWithFormattedString:(nonnull NSString*)formattedString;
-(nonnull NSDate*)dateWithTimestamp:(long long)timestamp;
-(nullable NSDate*)dateWithTimestampString:(nonnull NSString*)timestampString;

-(nullable NSString*)formattedStringWithTimestampString:(nonnull NSString*)timestampString;


-(long long)timestampWithFormattedString:(nonnull NSString*)formattedString;
+(long long)timestampWithTimestampString:(nonnull NSString*)aTimestampString;
+(long long)timestampWithDate:(nonnull NSDate*)aDate;
+(nonnull NSString*)timestampStringWithDate:(nonnull NSDate*)aDate;

/**
 timezone is in milliseconds
 **/
+(nonnull NSTimeZone*)timezoneWithTimezoneOffsetString:(nonnull NSString*)ullTimezone;

@end
