//
//  OTMLVoiceoverDTO.h
//  OTML
//
//  Created by Silvio D'Angelo on 04/04/22.
//

#import <Foundation/Foundation.h>


@class OTMLComponent;
@class OTMLViewController;

NS_ASSUME_NONNULL_BEGIN

@protocol OTMLAccessibleComponent <NSObject>

-(NSString*) componentIntrinsicAccessibleLabel;
-(BOOL) hasButtonComponentsTraits;

@end

@interface OTMLVoiceoverDTO : NSObject

+(OTMLVoiceoverDTO*) dtoFromComponent:(OTMLComponent*) component;


@property BOOL isAccessibilityItem;

@property (nullable) NSString* hint;
@property (nullable) NSString* label;
@property NSInteger index;
@property (nullable) NSString* group;

@end

NS_ASSUME_NONNULL_END
