//
//  OTMLCryptoParamModes.h
//  Pods
//
//  Created by Valerio Ferrantelli on 13/06/17.
//
//

#import "OTMLParamModeAbstractStrategy.h"


@interface OTMLJsonManipulationParamModes : OTMLParamModeStrategyGroup
@end

@interface OTMLJsonObjectSerializationParamMode : OTMLParamModeStrategy
@end

@interface OTMLJsonArraySerializationParamMode : OTMLParamModeStrategy
@end

@interface OTMLJsonPathParamMode : OTMLParamModeStrategy

+(NSString*)getValueFromJson:(NSString*)jsonString withPath:(NSString*)path;

+(NSString*)createJsonStringFromDictionary:(id) jsonObj;

@end

@interface OTMLJsonObjectDSSerializationParamMode : OTMLParamModeStrategy
@end
