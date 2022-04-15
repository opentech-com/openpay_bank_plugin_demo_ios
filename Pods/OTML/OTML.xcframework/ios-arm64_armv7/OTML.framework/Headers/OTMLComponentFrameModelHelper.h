//
//  OTMLComponentFrameModelHelper.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/10/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMLVisibility.h>

@interface OTMLComponentFrameModelHelper : NSObject


@property (nonatomic, assign, readonly) BOOL heightWrap;
@property (nonatomic, assign, readonly) BOOL heightFill;
@property (nonatomic, assign, readonly) BOOL heightIsNum;
@property (nonatomic, assign, readonly) BOOL heightIsPerc;

@property (nonatomic, assign, readonly) BOOL widthWrap;
@property (nonatomic, assign, readonly) BOOL widthFill;
@property (nonatomic, assign, readonly) BOOL widthIsNum;
@property (nonatomic, assign, readonly) BOOL widthIsPerc;

@property (nonatomic, assign, readonly) CGFloat heightValue;
@property (nonatomic, assign, readonly) CGFloat widthValue;

@property (nonatomic, assign, readonly) CGFloat heightPercValue;
@property (nonatomic, assign, readonly) CGFloat widthPercValue;


@property (nonatomic, assign, readonly) BOOL currentlyCollapsed;
@property (nonatomic, assign, readonly) BOOL currentlyVisible;
@property (nonatomic, assign, readonly) BOOL collapse_horizontal;
@property (nonatomic, assign, readonly) BOOL collapse_both;


-(instancetype)initWithWidth:(NSString*)aWidth andHeight:(NSString*)aHeight;
-(void)setWidth:(NSString*)aWidth;
-(void)setHeight:(NSString*)aHeight;
-(void)setVisibility:(OTMLVisibility)aVisibility;

@end
