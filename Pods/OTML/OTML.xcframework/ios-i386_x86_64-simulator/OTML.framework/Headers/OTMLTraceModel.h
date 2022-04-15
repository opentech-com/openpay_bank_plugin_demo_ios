//
//  OTMLTraceModel
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 25/11/15.
//  Copyright © 2015 Opentech ENG. All rights reserved.
//


@interface OTMLTraceModel : NSObject{
@protected
    NSMutableArray<NSString*>* log_errors;
    NSMutableArray * log_infos;
}


//JSON
-(NSData*)getJsonData;
-(NSString*)getJsonString;
-(BOOL)setTraceFromJson:(NSData *)jsonString;

//TRACE
-(void)send;
-(void)sendNow;
-(NSMutableDictionary*)getTrace;


//CALLBACK
-(void)willSendTrace;
-(NSString*)getTraceType;


//FIELDS
-(void)addEntries:(NSDictionary *)toAdd forNode:(NSString *)aNode withTarget:(NSMutableDictionary*)targetDictionary;
-(void)addEntries:(NSDictionary *)toAdd; //specifico per le sottoclassi di trace


//TIMERS
-(void)startTimerWithID:(NSString*)timerID;
-(double)getElapsedForTimerID:(NSString*)timerID;


//ERROR / INFO
-(void)addEventErrorWhereNil:(NSString *)variableName variable:(NSObject*)toCheck;
-(void)addEventErrorDescriptionSwift:(NSString *)aDescription;
-(void)addEventErrorDescription:(NSString *)aDescription, ...;
-(void)addEventInfoDescription:(NSString *)aDescription, ...;
-(void)addEventErrorDescriptionWithError:(NSError *)aError;
-(void)takeTimeWithID:(NSString*)aTimerID Description:(NSString *)aDescription, ...;

@end
