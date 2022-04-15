//
//  OTMPDatePickeriOS14ViewController.h
//  OTML
//
//  Created by Silvio D'Angelo on 11/11/2020.
//

#import <UIKit/UIKit.h>
#import <OTMLModels/OTMLFont.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OTMPDatePickeriOS14ViewControllerDelegate <NSObject>

// callback when the user did press confirm button
- (void) onDateSelected;

// callback when the user selects a date in the calendar
- (void) onDateChanged;

@end

@interface OTMPDatePickeriOS14ViewController : UIViewController

-(instancetype)initWithDelegate:(id<OTMPDatePickeriOS14ViewControllerDelegate>)aDelegate
                andUIDatePicker:(UIDatePicker*)datePicker
           andConfirmButtonFont:(OTMLFont*) aConfirmButtonFont;



@end

NS_ASSUME_NONNULL_END
