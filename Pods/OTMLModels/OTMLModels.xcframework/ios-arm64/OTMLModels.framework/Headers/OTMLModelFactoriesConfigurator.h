//
//  OTMLModelFactoriesConfigurator.h
//  OTMLFramework
//
//  Created by iOS team on 24/05/17.
//  Copyright (c) 2017 Opentech ENG. All rights reserved.
//

#import "AbstractComponentFactory.h"

@interface OTMLModelFactoriesConfigurator : NSObject

/**
 *  questo boolean serve in realtà solamente a BA (che comqunue è molto lontana dal framewoek master.)
 *    NOTA: se decidessimo di riabilitarlo, basterenne settare tramite le app constants questp bool a true
 *          ora è false sempre.
 */
+(void) setupEngineToHandleIpadSpecficQueries:(BOOL) shouldHandleIpad;

/**
 *  Getter & Setter per la factory concreta degli stili (che si trova nello strato OTML e non è autogenerata).
 */
+(void) setupWithcomponentFactory:(nonnull id<AbstractComponentFactory>) fact;
+(nullable id<AbstractComponentFactory>) concreteComponentFactory;


#pragma mark - attribute prefix

+(nonnull NSString*) evaluatedCurrentTopAttributePlatformPrefix;

+(nonnull NSString*) evaluatedIosPlatformPrefix;

+(nonnull NSString*) skippedTopAttributePlatformPrefix;

+(nonnull NSString*) skippedAndroidAttributePrefix;

+(nonnull NSString*) skippedWPAttributePrefix;

@end
