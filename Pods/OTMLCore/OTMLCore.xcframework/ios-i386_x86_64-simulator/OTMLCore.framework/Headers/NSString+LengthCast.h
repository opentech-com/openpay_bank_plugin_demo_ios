//
//  NSString+(Cast).h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 18/11/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//


@interface NSString (LengthCast)

-(int)lengthInt;
-(unsigned int)lengthUnsignedInt;
-(NSString*)substringFromMarkerString:(NSString*)startMarker toMarkerString:(NSString*)endMarker;
-(NSString*)substringFromMarkerString:(NSString*)startMarker;

@end
