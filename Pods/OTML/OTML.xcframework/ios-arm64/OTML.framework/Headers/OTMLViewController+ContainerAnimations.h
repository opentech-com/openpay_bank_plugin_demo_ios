//
//  OTMLViewController+ContainerAnimations.h
//  Pods
//
//  Created by Silvio D'Angelo on 08/06/2017.
//
//

#import "OTMLViewController.h"
#import "OTMLComponent.h"

@interface OTMLViewController (ContainerAnimations)

extern NSString* _Nonnull const OTMLComponentAnimatableProperty_COLLAPSE;
extern NSString* _Nonnull const OTMLComponentAnimatableProperty_EXPAND;
extern NSString* _Nonnull const OTMLComponentAnimatableProperty_ROTATE;


-(void) updateProperties:(nonnull NSArray<NSString*>*) aProp
            onComponents:(nonnull NSArray<OTMLComponent*>*) acompom
           withEndValues:(nonnull NSArray<NSString*>*) aEndValues;


-(void) animateAllAnimatables:(nonnull NSArray<NSString*>*) aProp
                 onComponents:(nonnull NSArray<OTMLComponent*>*) acompom
                withEndValues:(nonnull NSArray<NSString*>*) aEndValues;


+(void) startRegisteringAnimationsToDisableWithNextCommit;
+(void) commitAnimationsToDisable;

@end
