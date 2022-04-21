typedef enum {
    OTMLFontStyle_regular = 0,
    OTMLFontStyle_bold = 1,
    OTMLFontStyle_boldItalic = 2,
    OTMLFontStyle_condensedBlack = 3,
    OTMLFontStyle_condensedBold = 4,
    OTMLFontStyle_italic = 5,
    OTMLFontStyle_light = 6,
    OTMLFontStyle_lightItalic = 7,
    OTMLFontStyle_medium = 8,
    OTMLFontStyle_mediumItalic = 9,
    OTMLFontStyle_ultraLight = 10,
    OTMLFontStyle_ultraLightItalic = 11,
    OTMLFontStyle_thin = 12,
    OTMLFontStyle_thinItalic = 13,
    OTMLFontStyle_semiBold = 14
} OTMLFontStyle;

@interface OTMLFontStyleSupport : NSObject

+(OTMLFontStyle) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLFontStyle) aValue;

@end
