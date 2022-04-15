//
//  OTMLContentHandlingStrategyReplace.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 15/02/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLContentHandlingStrategyDelegate.h"
/**
 *      Maybe that's useless now but the Strategy idea is the best for reusage
 *      (thinking about future and most complex situations).
 */
@interface OTMLContentHandlingStrategyReplace : NSObject<OTMLContentHandlingStrategyDelegate>
@end


@interface OTMLContentHandlingStrategyAppend : NSObject<OTMLContentHandlingStrategyDelegate>
@end
