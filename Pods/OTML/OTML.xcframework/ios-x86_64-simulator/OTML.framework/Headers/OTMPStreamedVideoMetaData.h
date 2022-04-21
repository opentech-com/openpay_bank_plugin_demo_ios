//
//  OTMPStreamedVideoMetaData.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 31/10/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLDatasource.h"

@interface OTMPStreamedVideoMetaData : NSObject

-(id) initWithDatasourceElement:(OTMLDatasource*) aElement;
-(id) initWithDatasourceElement:(OTMLDatasource*) aElement withBaseAddr:(NSString*)aBaseAddr withSignature:(NSString*) aSignature withFragment:(NSString*)aFragment;

-(NSString*) urlToInvokeOnZeroBasedFragment:(int) aFragmentIndex;
-(int) numberOfFragments;
-(NSString*) signatureForRequests;

@end
