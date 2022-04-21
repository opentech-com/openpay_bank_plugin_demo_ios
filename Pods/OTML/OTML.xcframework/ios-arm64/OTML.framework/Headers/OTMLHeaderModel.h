//
//  OTMLHeaderModel.h
//
//  Created by Alessandro Ruggeri on 31/08/16.
//  Copyright © 2016 Valerio Ferrantelli. All rights reserved.
//

#import <OTMLModels/OTMLHeaderConfigurationConstants.h>
#import <OTMLModels/OTMLHeaderEntryConstants.h>
#import <OTMLModels/OTMLTextResolutionMode.h>
#import <OTMLModels/OTMLCoreCommandsConstants.h>
#import <OTMLModels/OTMPColor.h>
#import <OTMLModels/OTMLFont.h>
#import "OTMLDatasource.h"
#import "OTMLViewController.h"
#import "UIImage+OTMLBridge.h"
#import "OTMLImage.h"

@interface HeaderButtonModelDTO : NSObject
@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* subtitle;
@property (nonatomic, strong) NSString* position;
@property (nonatomic, assign) NSUInteger buttonDatasourceIndex;
@property (nonatomic, strong) NSString* icon;
@property (nonatomic, strong) NSString* iconDisabled;
@property (nonatomic, strong) NSString* icon_param_ref;
@property (nonatomic, strong) NSString* icon_disabled_param_ref;
@property (nonatomic, strong) NSArray* action_set;
@property (nonatomic, strong) NSString* condition_reference_enabled;
@property (nonatomic, strong) NSString* condition_reference_visible;
@property (nonatomic, strong) NSString* badge_text;
@property (nonatomic, strong) OTMPColor* badge_color;
@property (nonatomic, strong) OTMLFont* badge_font;
@property (nonatomic, assign) CGFloat badge_radius;
@property (nonatomic, assign) CGFloat maxBtHeight;
@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) NSString* accessibility_id_back_button;

-(instancetype)initWithModel:(OTMLDatasource*) theModelOfButton withOtmlVC:(OTMLViewController *)theVC andLocalizationType:(NSString*)_locType;
@end

@interface OTMLHeaderModel : NSObject

@property (nonatomic, assign) NSString * otmlTextResolutionMode;
@property (nonatomic, assign) BOOL isHidden;
@property (nonatomic, retain) NSString * largeTitlesMode;
@property (nonatomic, retain) NSString * textTitle;
@property (nonatomic, retain) NSString * subTextTitle;
@property (nonatomic, retain) NSString * header_logo;
@property (nonatomic, retain) UIImage * headerBgImage;
@property (nonatomic, retain) OTMLImage * otheaderBgImage;
@property (nonatomic, retain) OTMPColor * header_bg_color;
@property (nonatomic, assign) BOOL show_back;
@property (nonatomic, assign) BOOL show_menu;
@property (nonatomic, assign) BOOL menuButtonRight;
@property (nonatomic, assign) BOOL backButtonRight;
@property (nonatomic, retain) HeaderButtonModelDTO* menuButtonDTO;
@property (nonatomic, retain) HeaderButtonModelDTO* backButtonDTO;
@property (nonatomic, retain) HeaderButtonModelDTO* freeButtonDTO;
@property (nonatomic, retain) NSArray* buttonsList;
@property (nonatomic, retain) OTMLFont * headerLabelTitleFont;
@property (nonatomic, retain) OTMLFont * headerLabelSubTitleFont;
@property (nonatomic, retain) OTMLFont * headerButtonFont;
@property (nonatomic, assign) BOOL show_bottom_line;
@property (nonatomic, retain) UIImage * headerMenuIcon;
@property (nonatomic, retain) UIImage * headerBackIcon;
@property (nonatomic, assign) CGFloat headerIconDisabledAlpha;

@property (nonatomic, retain) NSString * textfield_placeholder;
@property (nonatomic, retain) OTMLFont* textfieldFontStyle;
@property (nonatomic, retain) NSString* textfieldBGImage;
@property (nonatomic, retain) NSString* textfieldNcKey;
@property (nonatomic, retain) NSString* textfieldNDelay;
@property (nonatomic, retain) NSString* textfieldDoneText;

@property (nonatomic, retain) OTMLFont* searchButtonDismissedFontStyle;

-(instancetype) initWithModel:(OTMLDatasource*) theModelOfTheModel withOtmlVC:(OTMLViewController *)theVC;
+(NSArray*)parseActionsWithDatasource:(OTMLDatasource*)ds;
/***
 *  Crea un Dictionary stringa-datasource rispettando la gerarchia di iverride su base piattaforma.
 */
+(NSDictionary<NSString*, OTMLDatasource*>*) convertToDictionaryFromDatasource:(OTMLDatasource*) _theModelOfTheModel;

@end
