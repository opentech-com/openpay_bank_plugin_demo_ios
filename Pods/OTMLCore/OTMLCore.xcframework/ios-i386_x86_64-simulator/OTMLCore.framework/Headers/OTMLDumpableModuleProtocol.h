//
//  OTMLDumpableModule.h
//  OTML
//
//  Created by Valerio Ferrantelli on 14/05/2019.
//


@protocol OTMLDumpableModuleProtocol <NSObject>

@optional
+(NSDictionary*)dump;

@optional
+(NSDictionary*)dumpWithOption:(NSString*)anOption;

@end

