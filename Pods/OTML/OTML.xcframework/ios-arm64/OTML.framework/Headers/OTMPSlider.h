//
//  OTMPSlider.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 07/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol OTMPSliderValueChangeDelegate <NSObject>

-(void)valueChangedOnDragging:(UISlider*)aSlider;
-(void)valueChangedOnTouchUpInside:(UISlider*)aSlider;

@end


/**
 Aggiunge il comportamento discreto allo slider.
 Se interval > 0 lo slider sarà discreto, altrimenti continuo.
 
 Se lo si usa discreto, usare il delegato al posto dell'add target (usato internamente)
 **/
@interface OTMPSlider : UISlider

@property (nonatomic, assign) float interval;
@property (nonatomic, assign, readonly) BOOL isDiscrete;

/*
 per convenzione se l'intervallo non è multiplo del max - min l'ultimo tick non è considerato. Per allineamento con android.
 */
@property (nonatomic, strong, readonly) NSArray* ticks;
@property (nonatomic, weak) NSObject<OTMPSliderValueChangeDelegate>* valueChangeDelegate;

//se settato lo slider userà questi valori invece che calcolarli con max min e interval
-(void)setCustomTicks:(NSArray<NSNumber*>*)arrayOfValues;

@end
