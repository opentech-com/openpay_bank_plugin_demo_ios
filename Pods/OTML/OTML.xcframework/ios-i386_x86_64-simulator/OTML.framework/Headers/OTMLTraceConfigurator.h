//
//  OTMLTraceManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 25/11/15.
//  Copyright © 2015 Opentech ENG. All rights reserved.
//


@class OTMLTraceModel;
@class OTMLTracePredicate;

@protocol OTMLTraceSenderDelegate <NSObject>
-(void)sendTrace:(nonnull OTMLTraceModel*)aTrace now:(BOOL)sendNow;
@end

@interface OTMLTraceDelegateMap : NSObject

@property (nonatomic, strong, readonly) NSObject<OTMLTraceSenderDelegate>* __nonnull delegate;
@property (nonatomic, strong, readonly) OTMLTracePredicate* __nonnull predicate;

- (nonnull instancetype)initWithPredicate: (nonnull OTMLTracePredicate*) predicate andDelegate:(nonnull NSObject<OTMLTraceSenderDelegate>*) delegate;

@end

@interface OTMLTraceConfigurator : NSObject
+(nonnull OTMLTraceConfigurator *)getIntance;

/**
 @deprecated
 is metod is Deprecated. Use addTraceSenderDelegate:withTracePredicate: instead.
 If you want the class based predicate please use OTMLClassTracePredicate explicitly
 **/
-(void)addTraceSenderDelegate:(nonnull NSObject<OTMLTraceSenderDelegate>*)aDelegate withTraceClass:(nonnull Class)aClass __deprecated;

-(void)addTraceSenderDelegate:(nonnull NSObject<OTMLTraceSenderDelegate>*)aDelegate withTracePredicate:(nonnull OTMLTracePredicate*)aPredicate;
-(void)dispatchTrace:(nonnull OTMLTraceModel*)aTrace now:(BOOL)sendNow;
@end
