typedef enum {
    OTMLClauseTypes_is_empty = 0,
    OTMLClauseTypes_is_not_empty = 1,
    OTMLClauseTypes_is_equals = 2,
    OTMLClauseTypes_is_not_equals = 3,
    OTMLClauseTypes_is_equals_no_case = 4,
    OTMLClauseTypes_is_not_equals_no_case = 5,
    OTMLClauseTypes_is_true = 6,
    OTMLClauseTypes_is_false = 7,
    OTMLClauseTypes_is_num_greater = 8,
    OTMLClauseTypes_is_num_smaller = 9,
    OTMLClauseTypes_is_num_greater_eq = 10,
    OTMLClauseTypes_is_num_smaller_eq = 11,
    OTMLClauseTypes_is_num_equals = 12,
    OTMLClauseTypes_is_num_not_equals = 13,
    OTMLClauseTypes_starts_with = 14,
    OTMLClauseTypes_ends_with = 15,
    OTMLClauseTypes_contains = 16,
    OTMLClauseTypes_contains_no_case = 17,
    OTMLClauseTypes_is_length_greater = 18,
    OTMLClauseTypes_is_length_smaller = 19,
    OTMLClauseTypes_is_length_equals = 20,
    OTMLClauseTypes_is_length_greater_eq = 21,
    OTMLClauseTypes_is_length_smaller_eq = 22,
    OTMLClauseTypes_is_luhn_valid = 23,
    OTMLClauseTypes_ds_exist = 24,
    OTMLClauseTypes_ds_list_empty = 25,
    OTMLClauseTypes_ht_exists = 26,
    OTMLClauseTypes_ht_is_empty = 27,
    OTMLClauseTypes_contains_word_starting_with = 28,
    OTMLClauseTypes_contains_word_ending_with = 29,
    OTMLClauseTypes_matches_regex = 30,
    OTMLClauseTypes_rsa_sign_check = 31,
    OTMLClauseTypes_is_iban_valid = 32,
    OTMLClauseTypes_otml_secure_storage_exists = 33,
    OTMLClauseTypes_is_barcode_valid = 34,
    OTMLClauseTypes_is_luhn_mod_n_valid = 35
} OTMLClauseTypes;

@interface OTMLClauseTypesSupport : NSObject

+(OTMLClauseTypes) valueFromString:(NSString*) aStringValue;
+(NSString*) stringFromValue:(OTMLClauseTypes) aValue;

@end
