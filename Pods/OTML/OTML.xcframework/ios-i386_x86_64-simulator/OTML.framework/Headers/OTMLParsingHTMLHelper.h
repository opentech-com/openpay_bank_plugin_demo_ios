//
//  OTMLParsingHTMLHelper.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 21/03/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMLComponentModel.h>

@interface OTMLParsingHTMLHelper : NSObject

-(id) initWithModel:(OTMLComponentModel*) aModel;

-(NSString*) parsedStringForHTMLString:(NSString*) aHTML;


@end
