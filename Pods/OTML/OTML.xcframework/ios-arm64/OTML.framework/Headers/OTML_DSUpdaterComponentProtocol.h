//
//  OTML_DSUpdaterComponentProtocol.h
//  OTMLFramework
//
//  Created by epavoni on 14/03/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


@class OTMLDatasource;

@protocol OTML_DSUpdaterComponentProtocol

-(OTMLDatasource*) getLastResponseDSForID:(NSString*) anID;

@end
