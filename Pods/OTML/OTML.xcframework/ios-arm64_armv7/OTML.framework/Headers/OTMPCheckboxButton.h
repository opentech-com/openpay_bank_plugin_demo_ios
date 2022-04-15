//
//  MPCheckboxButton.h
//  ING
//
//  Created by Valerio Ferrantelli on 18/10/12.
//
//


@protocol OTMP_TwoStates_Modeled_Component <NSObject>

-(BOOL) isChecked;
-(void) setChecked:(BOOL)shouldBeChecked;

-(BOOL) isEnabled;
-(void) setEnabled:(BOOL)shouldBeEnabled;

@end

@interface OTMPCheckboxButton : UIButton <OTMP_TwoStates_Modeled_Component>

- (id)initWithUnchecked:(UIImage*) anUnchecked
             andChecked:(UIImage*) aChecked;

-(void)setPressedChecked:(UIImage*)aPressedCheckedImage
     andPressedUnchecked:(UIImage*)aPressedUncheckedImage;

-(void)setDisabledChecked:(UIImage*)aDisabledCheckedImage
     andDisabledUnchecked:(UIImage*)aDisabledUncheckedImage;

-(void)setAsRadio:(BOOL)isRadio;

@end
