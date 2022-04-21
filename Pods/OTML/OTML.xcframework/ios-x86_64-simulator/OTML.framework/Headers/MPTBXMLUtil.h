//
//  MPTBXMLUtil.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 27/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import <OTMLModels/TBXML+Unescape.h>

@interface MPTBXMLUtil : NSObject

+(TBXMLElement*)TBXMLElementDeepCopy:(TBXMLElement*)element;

@end
