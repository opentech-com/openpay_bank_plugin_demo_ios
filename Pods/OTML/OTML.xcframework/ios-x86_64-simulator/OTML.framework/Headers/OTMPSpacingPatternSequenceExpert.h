//
//  OTMPSpacingPatternSequenceExpert.h
//  OTML
//
//  Created by Silvio D'Angelo on 28/02/2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OTMPSpacingPatternSequenceExpert : NSObject

- (instancetype) initWithSequence:(NSArray<NSNumber*>*) sequence;
- (BOOL) needsSpaceAtIndex:(NSUInteger)index;

@end

NS_ASSUME_NONNULL_END
