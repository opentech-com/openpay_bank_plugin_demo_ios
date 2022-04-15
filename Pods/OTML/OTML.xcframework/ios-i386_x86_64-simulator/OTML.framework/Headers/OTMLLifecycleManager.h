#import <Foundation/Foundation.h>
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>
#import "OTMLDumpableModuleProtocol.h"


extern NSString* const c_OTMLAppConstants_EVENT_ON_RESTART;


@interface OTMLLifecycleManager : NSObject <OTMLRestartAppAwareProtocol, OTMLDumpableModuleProtocol>

+(OTMLLifecycleManager*)getInstance;

-(void) addRestartAwareObject:(NSObject<OTMLRestartAppAwareProtocol>*) aRestartAwareObject;
-(void) removeRestartAwareObject:(NSObject<OTMLRestartAppAwareProtocol>*) aRestartAwareObject;
-(void) reinitializeRestartappAwareObjects;
-(void) resetRestartappAwareObjectsAfterOTMLUpdate;


-(BOOL) isNewAppVersion;
-(BOOL) isUpdateAsync;
-(void) markUpdateCompleted;
@end
