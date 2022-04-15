//
//  OTMLKeyboardNavigationBar.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


@protocol OTMLKeyboardNavigationBarDelegate <NSObject>
-(void)nextButtonDidPressed;
-(void)prevButtonDidPressed;
-(void)doneButtonDidPressed;
@end

@protocol OTMLKeyboardNavigationBarDatasource <NSObject>
-(BOOL)hasNextResponder;
-(BOOL)hasPrevResponder;
-(BOOL)hasDoneButton;

@optional
-(NSString*)customizedNextButtonTitle;
@optional
-(NSString*)customizedPrevButtonTitle;
@optional
-(NSString*)customizedDoneButtonTitle;
@end

@interface OTMLKeyboardNavigationBar : NSObject

@property (nonatomic, assign) UIBarStyle barStyle;
@property (nonatomic, retain) NSObject<OTMLKeyboardNavigationBarDatasource>* navigatorDatasource;
@property (nonatomic, retain) NSObject<OTMLKeyboardNavigationBarDelegate>* navigatorDelegate;


-(void)applyBarToResponder:(NSObject*)aTextinput;

@end
