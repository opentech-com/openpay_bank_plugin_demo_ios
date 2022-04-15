//
//  OTMLFont.h
//  OTML
//
//  Created by Silvio D'Angelo on 20/09/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//


#import "OTMPColor.h"
#import "OTMLStatefulComponent.h"
#import "OTMLFontStyle.h"
@protocol OTMLAbstractFontParser;

#define FALLBACK_DEFAULT_FONT_SIZE 17.0
#define FALLBACK_DEFAULT_FONT [UIFont systemFontOfSize:FALLBACK_DEFAULT_FONT_SIZE]


@interface OTMLFont : NSObject <NSCopying>

@property (nonatomic, strong) NSString * family;
@property (nonatomic, strong) NSString * name;
@property (nonatomic, assign) CGFloat size;
@property (nonatomic, strong) NSString * style;
@property (nonatomic, strong) NSArray<OTMPColor*>* colors;

@property (nonatomic, readonly, strong) UIFont * wrappedFont;

+(void) setFontParser:(id<OTMLAbstractFontParser>)aParser;
-(id) initWithFontStyleName:(NSString*) aFontName;

+(OTMLFont*) defaultFont;
+(OTMLFont*) fontWithStyleName:(NSString*) aFontName;
-(OTMPColor*) getTextColor:(OTMLComponentStatus) stateIdx;
-(NSDictionary*)getFontAttributes;

@end

@interface OTMLDefaultFont : OTMLFont
@end
