//
//  OTMLResolvedAction.h
//  OTMLFramework
//
//  Created by epavoni on 25/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

@class OTMLComponent;

@interface OTMLResolvedAction : NSObject


@property(nonatomic, strong) NSString* target;
@property(nonatomic, strong) NSString* type;
@property(nonatomic, strong) NSString* trigger;
@property(nonatomic, strong) NSDictionary* parameters;
@property(nonatomic, strong) OTMLComponent* sourceComponent;


- (instancetype)initWithTarget:(NSString*)target
                          type:(NSString*)type
                       trigger:(NSString*)trigger
            resolvedParameters:(NSDictionary*)parameters;


/***
 * per ogni k ∈ aAction.parameters : k ha "otml_" per prefisso
 * ==> esiste k2 in aAction.otmlPrefixedParameters : k = concat("otml_", k2)
 * ==> aAction.otmlPrefixedParameters[k2] == aAction.parameters[k]
 */
-(NSDictionary<NSString*,NSString*>*) otmlPrefixedParameters;

@end
