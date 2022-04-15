//
//  OTMLStyleElement.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 29/04/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMLComponentModel.h>
#import <OTMLModels/TBXML+Unescape.h>


typedef enum {
	OTMLStyleTypeComponent = 0,
    OTMLStyleTypeClass = 1,
    OTMLStyleTypeID = 2,
    OTMLStyleTypeBehaviour = 3
} OTMLStyleType;

@interface OTMLStyleElement : NSObject

@property (nonatomic, strong) OTMLComponentModel * stylemodel;
@property (nonatomic, assign) TBXMLElement * xmlElement;
@property (nonatomic, assign) OTMLStyleType type;

+(NSString*)styleTypeStringWith:(OTMLStyleType)styleType;

@end
