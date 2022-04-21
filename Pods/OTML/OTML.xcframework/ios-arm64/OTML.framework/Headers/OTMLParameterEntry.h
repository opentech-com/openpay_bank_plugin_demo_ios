//
//  OTMLParameterEntry.h
//  OTML
//
//  Created by enrico on 05/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import <OTMLModels/OTMLParameterType.h>

@interface OTMLParameterEntry : NSObject{

}

-(id) initWithKey:(NSString*) aKey andValue:(NSString*) aValue;
-(id) initWithKey:(NSString*) aKey andValue:(NSString*) aValue andType:(OTMLParameterType) aType;

@property (strong, nonatomic, readonly) NSString* key;
@property (strong, nonatomic, readonly) NSString* value;
@property (nonatomic, assign) OTMLParameterType type;

@end
