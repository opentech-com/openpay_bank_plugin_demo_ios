//
//  OTMLPadding.h
//  OTML
//
//  Created by Alessandro Ruggeri on 04/09/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//



@interface OTMLPadding : NSObject<NSCopying> {
@private CGFloat top;
@private CGFloat left;
@private CGFloat bottom;
@private CGFloat right;
}

@property (nonatomic, assign) CGFloat top;
@property (nonatomic, assign) CGFloat left;
@property (nonatomic, assign) CGFloat bottom;
@property (nonatomic, assign) CGFloat right;
@property (nonatomic, readonly) NSString* __nonnull otmlString;



+(nonnull OTMLPadding*) paddingFromString:(nullable NSString*) aString;
+(nonnull OTMLPadding*) paddingWithTop:(CGFloat) top left:(CGFloat) left bottom:(CGFloat) bottom right:(CGFloat) right;
+(nonnull OTMLPadding*) zero;

+(UIEdgeInsets) edgeInsetsFromOTMLString:(nullable NSString*) aString;
-(nonnull instancetype)initWithTop:(CGFloat) top left:(CGFloat) left bottom:(CGFloat) bottom right:(CGFloat) right;

-(UIEdgeInsets)toEdgeInset;
-(BOOL) paddingAllZeroes;
@end
