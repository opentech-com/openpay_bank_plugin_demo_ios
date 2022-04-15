//
//  OTMLDatasourceFilter.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 01/10/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//


@interface OTMLDatasourceFilter : NSObject

-(BOOL) isEqualTofilter:(OTMLDatasourceFilter*) anotherFilter;
+(OTMLDatasourceFilter*) filterWithRule:(NSString*) aruleToApply;

@property (nonatomic,strong) NSString* filterRule;

@end
