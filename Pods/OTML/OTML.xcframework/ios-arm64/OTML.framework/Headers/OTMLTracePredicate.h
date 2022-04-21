//
//  OTMLTracePredicate.h
//  Pods
//
//  Created by Enrico on 15/07/2019.
//

@class OTMLTraceModel;

@interface OTMLTracePredicate : NSObject

-(BOOL) isSatistied:(OTMLTraceModel*)aTrace;

@end
