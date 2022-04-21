//
//  OTMLTroubleshootingTraceModel.h
//  Pods
//
//  Created by Valerio Ferrantelli on 19/01/17.
//
//

#import "OTMLTraceModel.h"

@interface OTMLTroubleshootingTraceModel : OTMLTraceModel

@property (nonatomic, strong, readonly) NSString * issueID;

- (instancetype)initWithIssueID:(NSString*)aIssueId;


@end
