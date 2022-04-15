//
//  OTMLLifecycle.h
//  OTML
//
//  Created by Valerio Ferrantelli on 08/02/2019.
//

@class OTMLUpdateResult;
@class OTMLAdvancedUpdaterDelegateBase;

@interface OTMLUpdaterBridge : NSObject

-(void)manageAsyncUpdateResult:(OTMLUpdateResult*)aResult_ withError:(NSError*)error onDelegate:(OTMLAdvancedUpdaterDelegateBase*)aDelegate;
-(void)manageSyncUpdateResult:(OTMLUpdateResult*)aResult_ withError:(NSError*)error onDelegate:(OTMLAdvancedUpdaterDelegateBase*)aDelegate;

@end
