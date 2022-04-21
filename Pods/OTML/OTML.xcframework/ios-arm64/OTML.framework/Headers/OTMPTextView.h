//
//  OTMPTextView.h
//  Pods
//
//  Created by Silvio D'Angelo on 02/04/2020.
//

#import <UIKit/UIKit.h>

@class OTMLFont;
@class OTMPTextView;

NS_ASSUME_NONNULL_BEGIN

@protocol MPTextURLTappedListener <NSObject>

-(void) textURLTapped:(NSString*) aURL;

@optional
-(void) tapOnNonUrlText;

@end

@interface OTMPTextView : UITextView

@property BOOL linksEnabled;
@property BOOL shouldUnderlineLinks;

@property (strong) OTMLFont* linksFont; // default is NO

@property NSLineBreakMode lineBreakMode; // Base UItextView doeas not implement this property.
@property NSUInteger numberOfLines; // Base UItextView doeas not implement this property.

- (instancetype) initWithFrame:(CGRect) frame
                      otmlFont:(OTMLFont*) aFontWrapper;

- (void) setURLTappedListener:(id<MPTextURLTappedListener>) aListener;
- (void) setOTMLFont:(OTMLFont*)theFont;

+ (void) enumerateUrlsinText:(NSString*) string
                   withBlock:(void(^_Nonnull)(NSRange, NSString*)) block;

@end

NS_ASSUME_NONNULL_END
