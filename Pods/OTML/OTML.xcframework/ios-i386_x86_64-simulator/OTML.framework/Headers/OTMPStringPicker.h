//
//  OTMPStringPicker.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 22/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


@protocol OTMPStringPickerValueChangeDelegate <NSObject>
-(void)stringPickerValueChangedToIndex:(NSInteger)aIndex;
@end

@interface OTMPStringPicker : NSObject <UIPickerViewDataSource, UIPickerViewDelegate>

@property (nonatomic, assign) NSInteger defaultPickerIndex;
@property (nonatomic, retain) UIColor * pickerBgColor;

@property (nonatomic, retain) NSObject<OTMPStringPickerValueChangeDelegate>* valueChangeDelegate;
@property (nonatomic, assign) BOOL indexDidChanged;


-(instancetype)initWithStrings:(NSArray *)aStrings;
-(void)setIndex:(NSInteger)aIndex animated:(BOOL)animated;
-(UIPickerView*)setupPicker;
-(void)reloadPickerWithStrings:(NSArray*)aStrings;
-(UIPickerView*)getStringPicker;


//
-(NSInteger)index;

//da chiamare per scatenare il primo valueChange all'apertura
-(void)pickerDidShow;


@end
