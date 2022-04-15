//
//  OTMLAbstractClauseConditionResolver.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 10/05/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <OTMLModels/OTMLClauseTypes.h>
#import "OTMLParameterDataFetcher.h"

@interface OTMLAbstractClauseConditionResolver : NSObject

- (BOOL) canResolveConditionWithType:(OTMLClauseTypes)aType;

- (BOOL) isClauseValidWithType:(OTMLClauseTypes)aType
        usingResolvedOperators:(NSDictionary*)operators
   andResolvedDefaultOperators:(NSDictionary*)defaultOperators;

- (NSString*) conditionResolutionDescriptionWithType:(OTMLClauseTypes)aType
                              usingResolvedOperators:(NSDictionary*)operators
                         andResolvedDefaultOperators:(NSDictionary*)defaultOperators
                             andUnresolvedParameters:(NSDictionary*)unresolvedOperators;

@end
