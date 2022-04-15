//
//  OTMLPopupModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 21/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMLFont.h>
#import "OTMLAction.h"
#import "OTMLPopupModel.h"
#import <OTMLModels/OTMPColor.h>
#import "OTMLPadding.h"
#import "OTMLMargin.h"


typedef NS_ENUM(NSUInteger, OTMLAlertType){
    
    OTMLAlertType_otml_popup = 0,
    OTMLAlertType_native_popup,
    OTMLAlertType_native_actionsheet
    
    
};

typedef NS_ENUM(NSUInteger, OTMLPopupButtonType){
    
    OTMLPopupButtonType_default = 0,    //accept
    OTMLPopupButtonType_cancel,         //dismiss
    OTMLPopupButtonType_destructive     //destructive
    
    
};

@interface OTMLPopupButtonModel : NSObject

@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) OTMLFont * font;
@property (nonatomic, assign) OTMLPopupButtonType style;
@property (nonatomic, strong) NSString* trigger;


@end


@interface OTMLPopupModel : NSObject

//TITLE
@property (nonatomic, strong) OTMLMargin * headerMargin;
@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) OTMLFont * titleFont;


//POPUP
@property (nonatomic, strong) NSString * datasourceName;
@property (nonatomic, assign) OTMLAlertType alertType;
@property (nonatomic, strong) UIColor * backgroundColor;
@property (nonatomic, strong) OTMLMargin * popupMargin;
@property (nonatomic, assign) int popupCornerRadius;

//FOOTER
@property (nonatomic, strong) OTMLMargin * footerMargin;
@property (nonatomic, strong) UIColor * footerBackgroundColor;

//BUTTONS
@property (nonatomic, assign) int buttonHeight;
@property (nonatomic, strong) UIColor * buttonBackgroundColorN;
@property (nonatomic, strong) UIColor * buttonBackgroundColorP;
@property (nonatomic, strong) NSArray<OTMLPopupButtonModel*>* buttons;



@end



