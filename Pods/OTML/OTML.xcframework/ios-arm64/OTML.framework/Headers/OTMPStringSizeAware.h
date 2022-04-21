//
//  OTMPStringFrameAware.h
//  OTMLFramework
//
//  Created by epavoni on 20/09/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

@interface OTMPStringSizeAware : NSString

@property (nonatomic, strong) UIFont* font;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) BOOL fixedWidth;
@property (nonatomic, assign) BOOL fixedHeight;
@property (nonatomic, assign) BOOL adjustFont;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, assign) int numberOfLines;

-(instancetype) initWithString:(NSString *)aString;
-(void) setMaxBound:(CGSize)aMaxBound;

@end
