//
//  MPCartesianEvent.h
//  IMobilePlasma
//
//  Created by Silvio D'Angelo on 19/10/11.
//  Copyright 2011 Opentech ENG. All rights reserved.
//




@class OTMPCartesianPoint;

@interface OTMPCartesianEvent : NSObject {

@private OTMPCartesianPoint* point;
@private int index;
@private CGPoint relativePoint;
    
}

@property (nonatomic, strong) OTMPCartesianPoint* point;
@property (nonatomic, assign) int index;
@property (nonatomic, assign) CGPoint relativePoint;

@end
