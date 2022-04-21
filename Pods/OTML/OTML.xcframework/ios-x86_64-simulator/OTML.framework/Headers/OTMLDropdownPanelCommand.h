//
//  OTMLDropdownPanleCommand.h
//  Pods
//
//  Created by Enrico on 25/10/2019.
//

#import "OTMLActionCommand.h"
#import "OTMLVerticalAlignment.h"
#import "OTMLActionCommandSet.h"
@class OTMLFont;
@class OTMPColor;


NS_ASSUME_NONNULL_BEGIN
@interface OTMLDropdownPanelCommandDTO : NSObject

@property(nonatomic, assign) NSTimeInterval duration;
@property(nonatomic, assign) BOOL dismissPrevious;

@property(nonatomic, strong, nullable) OTMLFont* titleFont;
@property(nonatomic, strong, nullable) NSString* titleString;

@property(nonatomic, strong, nullable) OTMLFont* bodyFont;
@property(nonatomic, strong, nullable) NSString* bodyString;

@property(nonatomic, assign) OTMLVerticalAlignment leftImagePosition;
@property(nonatomic, strong, nullable) OTMLImage* leftImage;

@property(nonatomic, assign) OTMLVerticalAlignment rightImagePosition;
@property(nonatomic, strong, nullable) OTMLImage* rightImage;
@property(nonatomic, strong, nullable) OTMLImage* rightImagePressed;

@property(nonatomic, strong, nullable) OTMPColor* bottomSeparatorColor;


@property(nonatomic, strong) OTMPColor* background_color;



/*
 //Currently not required
 
@property(nonatomic, strong, nullable) OTMLFont* leftButtonFont;
@property(nonatomic, strong, nullable) NSString* leftButtonString;
@property(nonatomic, strong, nullable) OTMPColor* leftButtonBackgroundColor;

@property(nonatomic, strong, nullable) OTMLFont* centerButtonFont;
@property(nonatomic, strong, nullable) NSString* centerButtonString;
@property(nonatomic, strong, nullable) OTMPColor* centerButtonBackgroundColor;

@property(nonatomic, strong, nullable) OTMLFont* rightButtonFont;
@property(nonatomic, strong, nullable) NSString* rightButtonString;
@property(nonatomic, strong, nullable) OTMPColor* rightButtonBackgroundColor;
 
@property(nonatomic, strong, nullable) OTMPColor* buttonsSeparatorColor;
*/

@end

@interface OTMLDropdownPanelCommand : OTMLActionCommand

@end

@interface OTMLDropdownPanelCloseCommand : OTMLActionCommand

@end

@interface OTMLDropdownPanelCommandPlug : OTMLActionCommandSet

@end

NS_ASSUME_NONNULL_END
