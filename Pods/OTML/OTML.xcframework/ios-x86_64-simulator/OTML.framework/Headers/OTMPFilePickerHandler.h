//
//  OTMPFilePickerHandler.h
//  OTML
//
//  Created by Silvio D'Angelo on 23/06/2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^OTMPOnFileSelection)(NSURL* _Nullable url);

@interface OTMPFilePickerHandler : NSObject

-(instancetype) initWithUTIs:(NSArray<NSString*>*) utis;

- (void) openFilePickerFromVC:(UIViewController*) avc
               withCompletion:(OTMPOnFileSelection) completion;

@end

NS_ASSUME_NONNULL_END
