//
//  OTMLColor.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 11/03/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


@class OTMPColor;

@protocol OTMLAbstractColorParser <NSObject>

-(void)parseColor:(OTMPColor*)aColor withColorString:(NSString*)aColorString;
-(UIColor*)wrappedColorForOTMPColor:(OTMPColor*)aColor;

@end

@interface OTMLGradientModel : NSString

@property (nonatomic, strong) NSArray<OTMPColor*>* colors;
@property (nonatomic, strong) NSString* direction;
@property (nonatomic, assign) CGRect gradientFrame;

-(NSArray<UIColor*>*)wrappedUIColors;


@end

@interface OTMPColor : NSObject <NSCopying>

@property(nonatomic,assign) CGFloat rgba_r;
@property(nonatomic,assign) CGFloat rgba_g;
@property(nonatomic,assign) CGFloat rgba_b;
@property(nonatomic,assign) CGFloat rgba_a;

@property (nonatomic, readonly, strong) NSString * colorString;
@property (nonatomic, readonly, strong) UIColor * wrappedUIColor;

@property (nonatomic, assign) BOOL isGradient;
@property (nonatomic, strong) OTMLGradientModel * gradientModel;

/**
 L'unico usato dai modelli
 **/
+(OTMPColor*) newMPColorFromString:(NSString*) aColorString;
-(BOOL)isClearColor;
-(void)setGradientFrame:(CGRect)aFrame;



/**
 Usati da OTML
 **/
+(OTMPColor*) newClearColor;
+(OTMPColor*) newBlackColor;
+(OTMPColor*) newColorFromPlainUIColor:(UIColor*) aPlainColor;

+(void) setColorParser:(id<OTMLAbstractColorParser>)aParser;

@end


