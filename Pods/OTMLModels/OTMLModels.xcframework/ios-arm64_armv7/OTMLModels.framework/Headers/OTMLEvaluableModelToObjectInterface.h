#import <TBXML/TBXML.h>

@protocol OTMLEvaluableModelToObjectInterface <NSObject>

-(NSObject*)classForOTMLAndModel;
-(NSObject*)classForOTMLClauseModel;
-(NSObject*)classForOTMLConditionRefModel;
-(NSObject*)classForOTMLNotModel;
-(NSObject*)classForOTMLOrModel;

@end
