//
//  OTMLLabelInteractiveResponder.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 04/06/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//



@protocol OTMLInteractiveResponder <NSObject>

-(void)delegateDidPressed:(NSNumber*)isPressed withSender:(NSObject*)sender;

@end
