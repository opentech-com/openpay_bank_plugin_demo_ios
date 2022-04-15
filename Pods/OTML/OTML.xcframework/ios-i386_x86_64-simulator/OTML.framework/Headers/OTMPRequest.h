//
//  MPRequest.h
//  OTML
//
//  Created by Silvio D'Angelo on 16/08/11.
//  Copyright 2011 Opentech ENG. All rights reserved.
//


@interface OTMPRequest : NSObject 

@property(nonatomic, strong) NSString *url;
-(id) initWithAnURL:(NSString*) aUrl;

-(NSString *)toString;

-(void) setParameter:(NSString*)aValue forKey:(NSString*)aKey;
-(void) setParametersFromDicrionary:(NSDictionary*) aParametersDictionary;

@end
