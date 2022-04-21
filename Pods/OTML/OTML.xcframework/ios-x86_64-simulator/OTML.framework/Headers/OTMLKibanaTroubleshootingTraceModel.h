//
//  OTMLKibanaTroubleshootingTraceModel.h
//  Pods
//
//  Created by Enrico on 08/06/2020.
//

#import "OTMLTraceModel.h"

@interface OTMLKibanaTroubleshootingTraceModel : OTMLTraceModel

@property (nonatomic, strong, readonly) NSString * issueID;

- (instancetype)initWithIssueID:(NSString*)aIssueId;

@end
