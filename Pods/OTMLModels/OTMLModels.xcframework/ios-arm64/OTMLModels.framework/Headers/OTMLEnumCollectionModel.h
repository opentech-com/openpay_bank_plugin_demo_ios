#import "OTMLBarCodeFormat.h"
#import "OTMLCameraCaptureOutputMode.h"
#import "OTMLScrollBarType.h"
#import "OTMLAnimationTypes.h"
#import "OTMLTextResolutionMode.h"
#import "OTMLComponentModel.h"
#import "OTMLPagerMode.h"
#import "OTMLFontStyle.h"
#import "OTMLImageSlideshowAnimationTypes.h"
#import "OTMLComponentErrorMode.h"
#import "OTMLAnchors.h"
#import "OTMLRedirectionPolicy.h"
#import "OTMLPopupButtonPosition.h"
#import "OTMLDirectionSort.h"
#import "OTMLPopupButtonStyle.h"
#import "OTMLUpdatePolicy.h"
#import "OTMLSortableTypes.h"
#import "OTMLAuthenticationMode.h"
#import "OTMLCardType.h"
#import "OTMLInvalidateMode.h"
#import "OTMLExternalEventAppOriginalState.h"
#import "OTMLImeAction.h"





@interface OTMLEnumCollectionModel : OTMLComponentModel<NSCopying>

    @property(nonatomic, assign) OTMLAnimationTypes animation_type;


@property(nonatomic, assign) OTMLExternalEventAppOriginalState appOriginalState;


@property(nonatomic, assign) OTMLAuthenticationMode authenticationMode;


@property(nonatomic, assign) OTMLBarCodeFormat barCodeFormat;


@property(nonatomic, assign) OTMLCameraCaptureOutputMode camera_capture_output_mode;


@property(nonatomic, assign) OTMLCardType card_type;


@property(nonatomic, assign) OTMLComponentErrorMode componentErrorMode;


@property(nonatomic, assign) OTMLDirectionSort direction_sort;


@property(nonatomic, assign) OTMLFontStyle fontStyle;


@property(nonatomic, assign) OTMLImageSlideshowAnimationTypes imageSlideshowAnimationType;


@property(nonatomic, assign) OTMLImeAction ime_action;


@property(nonatomic, assign) OTMLInvalidateMode invalidateMode;


@property(nonatomic, assign) OTMLTextResolutionMode otmlTextResolutionMode;


@property(nonatomic, assign) OTMLPagerMode pagerMode;


@property(nonatomic, assign) OTMLPopupButtonPosition popupButtonPosition;


@property(nonatomic, assign) OTMLPopupButtonStyle popupButtonStyle;


@property(nonatomic, assign) OTMLRedirectionPolicy redirection_policy;


@property(nonatomic, assign) OTMLAnchors responder_anchor;


@property(nonatomic, assign) OTMLScrollBarType scroll_bar_type;


@property(nonatomic, assign) OTMLSortableTypes sortable_type;


@property(nonatomic, assign) OTMLUpdatePolicy update_policy;



-(void)setDefaultAttributeValues;

/* Return the names of all properties*/
-(NSArray *)allKeys;
-(BOOL)setAttributeWithName:(NSString*) aName withValue:(NSString*)aValue;

-(id) initWithXMLEntry:(TBXMLElement*) aEntryElement;
-(void)applyAttributes:(TBXMLElement*) aEntryElement;


@end