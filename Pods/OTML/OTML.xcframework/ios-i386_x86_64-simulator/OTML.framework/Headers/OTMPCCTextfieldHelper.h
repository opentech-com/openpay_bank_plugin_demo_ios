//
//  OTMPCCTextfield.h
//  Pods
//
//  Created by Enrico on 12/02/2020.
//

@interface OTMPCCTextfieldHelper : NSObject


-(instancetype) initWithRegularSequence:(NSNumber *) s;

-(instancetype) initWithSpacingSequence:(NSArray<NSNumber *> *) ss;

-(instancetype) initForCCSpacing;

-(void) reformatByAddingSpacesIn:(UITextField *)textField;

-(void) willChangeText:(UITextField *)textField;

@end
