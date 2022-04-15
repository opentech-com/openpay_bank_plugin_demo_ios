//
//  MPCartesianPoint.h
//  GraphPlayGround
//
//  Created by epavoni on 13/04/11.
//  Copyright 2011 Opentech. All rights reserved.
//




@interface OTMPCartesianPoint : NSObject

-(__nonnull instancetype) init;
-(__nonnull instancetype) initWithXCoordinate:(CGFloat)aXCoordinate
                                  yCoordinate:(CGFloat)aYCoordinate
                                  description:(nullable NSString*) aPointDescription
                                       xLabel:(nullable NSString*) aXLabel
                                       yLabel:(nullable NSString*) aYLabel
                                originalIndex:(NSUInteger)aIndex;

-(__nonnull instancetype) initWithXCoordinate:(CGFloat)aXCoordinate
                                  yCoordinate:(CGFloat)aYCoordinate
                                  description:(nullable NSString*) aPointDescription
                                       xLabel:(nullable NSString*) aXLabel
                                       yLabel:(nullable NSString*) aYLabel
                                originalIndex:(NSUInteger)aIndex
                                 interpolated:(BOOL) isInterpolated;

@property (nonatomic, readonly) CGPoint point;
@property (nonatomic, assign) CGPoint pointInGraph;
@property (nonatomic, strong) NSString* __nonnull pointDescription;
@property (nonatomic, strong) NSString* __nonnull xLabel;
@property (nonatomic, strong) NSString* __nonnull yLabel;
@property (nonatomic, assign) BOOL interpolated;
@property (nonatomic, assign) NSUInteger index;

@end
