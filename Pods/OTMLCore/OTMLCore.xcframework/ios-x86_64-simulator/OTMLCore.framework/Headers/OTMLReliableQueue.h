//
//  OTMLReliableQueue
//  Pods
//
//  Created by Valerio Ferrantelli on 27/04/17.
//
//


typedef void(^OTMLReliableQueueHandler)(NSData*payload, NSString*queueID, NSNumber* remainingPayloadsCount, OTMLSimpleCallback onDone);


/**
 
 Usage:
 
 
 Create a OTMLReliableQueueHandler for each queue to be managed.
 Example:
 
 OTMLReliableQueueHandler handler = ^(NSData*payload, NSString*queueID, NSNumber*remainingPayloadsCount, OTMLSimpleCallback onDone){

    
    here process the payload, it is guarantee that payload is not removed from queue
    until this code block is executed (crash or user force quit)
 
    REMEMBER TO CALL onDone!!!!
 
  };

 
 //Set a dictionary that map handler and queue name
 NSMutableDictionary * map = [[NSMutableDictionary alloc] init];
 [map setObject:handler forKey:@"my_queue_id"];
 
 [[OTMLReliableQueue getInstance] setProcessorHandlerTable:map];

 
 [[OTMLReliableQueue getInstance] commitPayload:<my_payload> withQueueID:@"my_queue_id"];

 
 
 **/




@interface OTMLReliableQueue : NSObject

@property (nonatomic, strong) NSData * filesystemKey;
@property (nonatomic, strong) NSData * filesystemIV;
@property (nonatomic, strong) NSString * queueFilePath;


+(OTMLReliableQueue*)getInstance;
-(void)setProcessorHandler:(id)anHandler withQueueID:(NSString*)aQueueID;
-(void)resetQueueWithID:(NSString*)queueID;

//commit separato tra save e process
-(void)savePayload:(NSData *)aPayload withQueueID:(NSString*)aQueueID;
-(void)processQueueWithID:(NSString*)aQueueID;

@end
