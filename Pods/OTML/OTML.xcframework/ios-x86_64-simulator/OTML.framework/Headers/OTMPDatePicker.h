//
//  MPDatePicker.h
//  IMobilePlasma
//
//  Created by Andrea Cantinotti on 16/11/11.
//  Copyright (c) 2011 Opentech ENG. All rights reserved.
//


@interface OTMPAbstractDatePicker : UIControl

@property (nonatomic, strong) NSLocale   *locale;   // default is [NSLocale currentLocale]. setting nil returns to default
@property (nonatomic, copy)   NSCalendar *calendar; // default is [NSCalendar currentCalendar]. setting nil returns to default
@property (nonatomic, strong) NSTimeZone *timeZone; // default is nil. use current time zone or time zone from calendar
@property (nonatomic, strong) NSDate *date;        // default is current date when picker created. Ignored in countdown timer mode. for that mode, picker starts at 0:00
@property (nonatomic, strong) NSDate *minimumDate; // specify min/max date range. default is nil. When min > max, the values are ignored. Ignored in countdown timer mode
@property (nonatomic, strong) NSDate *maximumDate; // default is nil
- (void)setDate:(NSDate *)date animated:(BOOL)animated; // if animated is YES, animate the wheels of time to display the new date
@end



@protocol OTMPDatePickerValueChangeDelegate <NSObject>
-(void)datePickerValueChangedTo:(NSDate*)aDate;
@end

/**
 E' un OTMPPickerStateDelegate in quanto vuole sapere quando va a schermo almeno la prima volta.
 **/
@interface OTMPDatePicker : NSObject

@property (nonatomic, retain) NSDate * defaultPickerDate;
@property (nonatomic, retain) NSTimeZone * timezone;
@property (nonatomic, retain) NSLocale * locale;
@property (nonatomic, retain) UIColor * pickerBgColor;

@property (nonatomic, retain) NSDate * minDate;
@property (nonatomic, retain) NSDate * maxDate;

@property (nonatomic, retain) NSObject<OTMPDatePickerValueChangeDelegate>* valueChangeDelegate;
@property (nonatomic, assign) BOOL dateDidChanged;

@property (nonatomic, assign) BOOL monthAndYeadMode;

-(instancetype)initWithLocale:(NSLocale *)aLocale;
-(void)setDate:(NSDate *)date animated:(BOOL)animated;
-(UIView*)setupPicker;
-(NSDate*)date;

//da chiamare per scatenare il primo valueChange all'apertura
-(void)pickerDidShow;

@end
