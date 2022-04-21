typedef enum {
    OTMLParameterType_string = 0,
    OTMLParameterType_integer = 1,
    OTMLParameterType_bool = 2,
    OTMLParameterType_floatnumber = 3,
    OTMLParameterType_bigdecimal = 4,
    OTMLParameterType_longinteger = 5,
    OTMLParameterType_bin = 6,
    OTMLParameterType_ds = 7,
    OTMLParameterType_color = 8,
    OTMLParameterType_json_object = 9,
    OTMLParameterType_json_array = 10,
    OTMLParameterType_font = 11,
    OTMLParameterType_maptype = 12,
    OTMLParameterType_visibility = 13,
    OTMLParameterType_dynamic_container_local_loading_mode = 14,
    OTMLParameterType_otml_mt_autentication = 15,
    OTMLParameterType_directional_sort = 16,
    OTMLParameterType_sortable_types = 17,
    OTMLParameterType_barcode_format = 18,
    OTMLParameterType_barcode_type = 19,
    OTMLParameterType_barcode_validator = 20,
    OTMLParameterType_content_scale = 21,
    OTMLParameterType_ocr_type = 22,
    OTMLParameterType_input_keyboard_type = 23,
    OTMLParameterType_tabbarlabelvisibility = 24,
    OTMLParameterType_otml_animation_image_lottie_scale_type = 25,
    OTMLParameterType_dynamic_content_handling_strategy = 26
} OTMLParameterType;

@interface OTMLParameterTypeSupport : NSObject

+(OTMLParameterType) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLParameterType) aValue;

@end
