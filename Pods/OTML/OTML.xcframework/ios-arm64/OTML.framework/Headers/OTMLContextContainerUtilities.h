//
//  OTMLContextContainerUtilities.h
//  OTMLFramework
//
//  Created by Enrico on 30/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

@interface OTMLEdgeActive : NSObject

@property (nonatomic, retain, nonnull) UIScreenEdgePanGestureRecognizer* edgeGesture;
@property (nonatomic, assign) UIRectEdge activeEdges;
@property (nonatomic, assign) CGPoint inVector;
@property (nonatomic, retain, nonnull) NSString* identifier;

@end

@interface OTMLTemporaryContextBackgroundView : UIImageView

@end
