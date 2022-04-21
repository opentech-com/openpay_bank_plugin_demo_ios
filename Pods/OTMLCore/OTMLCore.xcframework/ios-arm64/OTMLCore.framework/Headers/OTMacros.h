//
//  OTMPMacros.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 05/12/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#ifndef OTMacros_h
#define OTMacros_h

#define btos(aBool) (aBool?@"true":@"false")
#define contains(str1, str2) ([str1 rangeOfString: str2 ].location != NSNotFound)
#define isNil(obj) (obj==nil || obj==NULL || [obj isKindOfClass:[NSNull class]])

#define MPFunc(lvl) /**/
#define MPTrace()    /**/
#define MPLog(lvl, a, ...) /**/
#define MPTest(condition, desc, ...) /**/

//EX: 0xb1b1b1,100
#define UIColorFromHexIntegerWithAlpha(rgbValue, alphaValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(float)(alphaValue/100.0)]

//EX: 0xb1b1b1
#define UIColorFromHexInteger(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

//EX: @"179.179.179"
#define UIColorFromRGBString(rgbValue) [UIColor colorWithRed: ((float)([[rgbValue substringWithRange:NSMakeRange(0, 3)] floatValue])/255.0) green: ((float)([[rgbValue substringWithRange:NSMakeRange(4, 3)] floatValue])/255.0) blue:((float)([[rgbValue substringWithRange:NSMakeRange(8, 3)] floatValue])/255.0) alpha:1.0]

//EX: @"179.179.179"
#define UIColorFromRGBStringWithAlpha(rgbValue, alphaValue) [UIColor colorWithRed: ((float)([[rgbValue substringWithRange:NSMakeRange(0, 3)] floatValue])/255.0) green: ((float)([[rgbValue substringWithRange:NSMakeRange(4, 3)] floatValue])/255.0) blue:((float)([[rgbValue substringWithRange:NSMakeRange(8, 3)] floatValue])/255.0) alpha:(float)(alphaValue)]

#endif
