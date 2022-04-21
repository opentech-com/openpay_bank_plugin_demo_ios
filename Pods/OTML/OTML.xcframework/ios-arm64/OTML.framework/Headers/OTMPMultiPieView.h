//
//  PieView.h
//  PieChart
//
//  Created by Pavan Podila on 2/21/12.
//  Copyright (c) 2012 Pixel-in-Gene. All rights reserved.
//

typedef enum{
	COUNTERCLOCKWISE,
	CLOCKWISE
} PIECHART_ORIENTATION;


@interface OTMPMultiPieView : UIView{
    CGRect lastFrame;
}

@property (nonatomic, strong) NSArray *sliceValues;

-(void)updateSlices;

+(OTMPMultiPieView*) newPieSLiceContainerWithFrame:(CGRect) aFrame
                     animationOrientation:(PIECHART_ORIENTATION) aOrientation
                              colorsArray:(NSArray*) someColors
                           andSliceValues:(NSArray*) someValues;


+(OTMPMultiPieView*) newPieSLiceContainerWithFrame:(CGRect) aFrame
							  animationOrientation:(PIECHART_ORIENTATION) aOrientation
									   colorsArray:(NSArray*) someColors
									andSliceValues:(NSArray*) someValues
											   arc:(BOOL)arcMode
										  arcWidth:(CGFloat)aArcWidth
									   strokeWidth:(CGFloat)aStrokeWidth
									   strokeColor:(UIColor*)aStrokeColor;

@property(nonatomic,assign) PIECHART_ORIENTATION orientation;
@property(nonatomic,assign) BOOL hole;
@property(nonatomic,strong) UIColor* holeBGColor;
@property(nonatomic,assign) CGFloat holeBGSize;
@property(nonatomic,assign) CGFloat holeCircleSize;
@property(nonatomic,strong) NSArray* colors;
@property(nonatomic) CGFloat offsetInRadiants;
@property(nonatomic) BOOL useStroke;

-(void) stopBlinkingPieAtIndex:(int)aIndex;
-(void) startBlinkingPieAtIndex:(int)aIndex;

@end
