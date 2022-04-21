//
//  OTMLCrashlyticsManager.h
//  OTML
//
//  Created by Valerio Ferrantelli on 24/04/18.
//

#import "OTMLTraceModel.h"

#define OTMLDomain
#define MTDomain
#define APPDomain
#define AddonDomain

@interface OTMLCrashlyticsConfigurator : NSObject

+(OTMLCrashlyticsConfigurator*)getInstance;

-(void)setLogHandler:(OTMLSimpleCallback)logHandler;
-(void)setKeyHandler:(OTMLSimpleCallback)keyHandler;
-(void)setErrorHandler:(OTMLSimpleCallback)errorHandler;

-(void)addCustomLog:(NSString *)aDescription, ...;
-(void)addCustomKey:(NSString *)aKey withValue:(NSString*)aValue;
-(void)addCustomKeyWithDictionary:(NSDictionary*)aDic;

-(void)doCrashWithMessage:(NSString*)aMessage;
-(void)recordError:(NSError*)anError;

@end
