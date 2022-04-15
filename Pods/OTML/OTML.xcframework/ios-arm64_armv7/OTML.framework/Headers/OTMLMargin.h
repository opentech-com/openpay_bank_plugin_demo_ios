//
//  OTMLMargin.h
//  OTML
//
//  Created by enrico on 08/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//




@interface OTMLMargin : NSObject <NSCopying>{
@private
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
}

@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat left;
@property (nonatomic, assign) CGFloat bottom;
@property (nonatomic, assign) CGFloat right;

+(nonnull OTMLMargin*) marginWithTop:(CGFloat) top
                                left:(CGFloat) left
                              bottom:(CGFloat) bottom
                               right:(CGFloat) right;
+(nonnull OTMLMargin*) marginFromString:(nonnull NSString*) aString;
+(nonnull OTMLMargin*) marginFromString:(nonnull NSString*) aString withDefaultMargin:(nonnull OTMLMargin*) aDefaultMargin;
+(UIEdgeInsets) edgeInsetsFromOTMLString:(nullable NSString*) aString;

-(nonnull id)initWithTop:(CGFloat)top
                    left:(CGFloat) left
                  bottom:(CGFloat) bottom
                   right:(CGFloat) right;

-(BOOL) marginsAllZeroes;
-(UIEdgeInsets)toEdgeInset;

@end
