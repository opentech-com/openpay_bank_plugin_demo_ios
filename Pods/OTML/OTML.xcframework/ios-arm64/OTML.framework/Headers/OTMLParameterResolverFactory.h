//
//  OTMLParameterResolverFactory.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/04/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "OTMLParameter.h"


@interface OTMLAbstractParameterResolverSubFactory : NSObject
-(NSString*)resolveParameter:(OTMLParameter*)aParameter;
@end


@interface OTMLParameterResolverFactory : NSObject
+(OTMLParameterResolverFactory*)getInstance;
-(NSString*)resolveParameter:(OTMLParameter*)aParameter;
@end
