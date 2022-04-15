typedef enum {
    OTMLCardType_none = 0,
    OTMLCardType_visa = 1,
    OTMLCardType_visa_electron = 2,
    OTMLCardType_amex = 3,
    OTMLCardType_unionpay = 4,
    OTMLCardType_mastercard = 5,
    OTMLCardType_maestro = 6,
    OTMLCardType_diners_int = 7,
    OTMLCardType_diners_us = 8,
    OTMLCardType_diners_discover = 9,
    OTMLCardType_jcb = 10,
    OTMLCardType_uatp = 11,
    OTMLCardType_dankort = 12,
    OTMLCardType_interpayment = 13
} OTMLCardType;

@interface OTMLCardTypeSupport : NSObject

+(OTMLCardType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLCardType) aValue;

@end
