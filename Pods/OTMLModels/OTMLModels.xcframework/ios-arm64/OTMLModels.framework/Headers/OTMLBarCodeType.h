typedef enum {
    OTMLBarCodeType_all = 0,
    OTMLBarCodeType_qrcode = 1,
    OTMLBarCodeType_datamatrix = 2,
    OTMLBarCodeType_oned = 3,
    OTMLBarCodeType_code_39 = 4,
    OTMLBarCodeType_code_93 = 5,
    OTMLBarCodeType_code_128 = 6,
    OTMLBarCodeType_ean_8 = 7,
    OTMLBarCodeType_ean_13 = 8,
    OTMLBarCodeType_pdf_417 = 9,
    OTMLBarCodeType_itf = 10,
    OTMLBarCodeType_upc_a = 11,
    OTMLBarCodeType_upc_e = 12,
    OTMLBarCodeType_upc_ean_extension = 13,
    OTMLBarCodeType_aztec = 14
} OTMLBarCodeType;

@interface OTMLBarCodeTypeSupport : NSObject

+(OTMLBarCodeType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLBarCodeType) aValue;

@end
