typedef enum {
    OTMLBarCodeFormat_code_39 = 0,
    OTMLBarCodeFormat_code_39_mod_43 = 1,
    OTMLBarCodeFormat_code_93 = 2,
    OTMLBarCodeFormat_code_128 = 3,
    OTMLBarCodeFormat_ean_8 = 4,
    OTMLBarCodeFormat_ean_13 = 5,
    OTMLBarCodeFormat_pdf_417 = 6,
    OTMLBarCodeFormat_interleaved_2_of_5 = 7,
    OTMLBarCodeFormat_itf_14 = 8,
    OTMLBarCodeFormat_upc_a = 9,
    OTMLBarCodeFormat_upc_e = 10,
    OTMLBarCodeFormat_upc_ean_extension = 11,
    OTMLBarCodeFormat_qrcode = 12,
    OTMLBarCodeFormat_datamatrix = 13,
    OTMLBarCodeFormat_aztec = 14
} OTMLBarCodeFormat;

@interface OTMLBarCodeFormatSupport : NSObject

+(OTMLBarCodeFormat) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLBarCodeFormat) aValue;

@end
