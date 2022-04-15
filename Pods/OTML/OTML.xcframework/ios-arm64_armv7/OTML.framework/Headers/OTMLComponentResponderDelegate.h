//
//  OTMLResponderDelegate.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


@protocol OTMLComponentResponderDelegate <NSObject>

//metodo richiamato subito dopo che il componente è diventato firstResponder
-(void)componentDidBecameFirstResponder;
//metodo richiamato subito dopo che il componente non è più firstResponder
-(void)componentDidResignFirstResponder;

//metodo da invocare se si vuole che il componente diventi firstResponder
-(void)doBecameFirstResponder;
//metodo da invocare se si vuole che il componente non sia più firstResponder
-(void)doResignFirstResponder;


@end


