//
//  FramePropagationResponse.h
//  OTML
//
//  Created by enrico on 11/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



@interface FramePropagationResponse : NSObject {
@private
    BOOL propagationNeedsRework;
    CGSize usedSize;
}

@property (nonatomic, assign) BOOL propagationNeedsRework;
@property (nonatomic, assign) CGSize usedSize;

@end
