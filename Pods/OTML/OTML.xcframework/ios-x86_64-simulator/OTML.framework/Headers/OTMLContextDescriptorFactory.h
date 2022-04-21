//
//  OTMLContextDescriptorFactory.h
//  Bolts
//
//  Created by Silvio D'Angelo on 19/08/2019.
//

#import <OTML/OTMLContextDescriptor.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, OTMLContextDescriptorMenuStyle) {
    OTMLContextDescriptor_SwipeToShowMenu,
    OTMLContextDescriptor_SwipeToShowMenuOnTheLeft,
    OTMLContextDescriptorMenuStyle_TabbarMenu,
    OTMLContextDescriptorMenuStyle_TabbarMenu_GroupViewsCanSwipePositions
};

@interface OTMLContextDescriptorFactory : NSObject

+(OTMLContextDescriptor*) newContextsDescriptorWithMenuStyle:(OTMLContextDescriptorMenuStyle) style;

@end

NS_ASSUME_NONNULL_END
