//
//  OTMLSelectorDSExpert.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 23/09/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


#import "OTMLViewController.h"
#import <OTMLModels/OTMLTextResolutionMode.h>


@interface OTMLSelectorDSExpert : NSObject

@property (nonatomic, retain) NSString * reference_ds;
@property (nonatomic, assign) OTMLTextResolutionMode otmlTextResolutionModeLabel;
@property (nonatomic, assign) OTMLTextResolutionMode otmlTextResolutionModeValue;

-(id) initWithLabelPath:(NSString*) aLabPath
       andWithValuePath:(NSString*) aValPath
    inReferenceDSatPath:(NSString*) reference_ds
                 withVC:(OTMLViewController*) theVC
    withOtmlTextResolutionModeLabel:(OTMLTextResolutionMode) aOtmlTextResolutionModeLabel
    andOtmlTextResolutionModeValue:(OTMLTextResolutionMode) aOtmlTextResolutionModeValue;


-(void)reloadData;
-(NSArray*)getLabels;
-(NSArray*)getValues;


@end
