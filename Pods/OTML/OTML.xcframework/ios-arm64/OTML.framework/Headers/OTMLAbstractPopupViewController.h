//
//  OTMLAbstractPopupViewController.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLViewController.h"
#import "OTMLPopupModel.h"



@protocol OTMLPopupParserProtocol <NSObject>

-(OTMLPopupModel*)buildPopupModelWithDSName:(NSString*)aDSName usingVC:(OTMLViewController*)aVC;

@end



@interface OTMLAbstractPopupViewController :  OTMLViewController

@property (nonatomic, strong) OTMLPopupModel * popupModel;

/**
 Must be overrided
 **/
-(NSObject<OTMLPopupParserProtocol>*)getPopupParser;

/**
 Call when you are ready to generate the view
 **/
-(UIView*)generatePopupViewWithModel:(OTMLPopupModel*)aPopupModel;

-(void)buttonDidPressed:(UIButton*)aButton;


@end
