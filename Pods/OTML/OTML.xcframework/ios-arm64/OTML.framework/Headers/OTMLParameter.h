//
//  OTMLParameter.h
//  OTML
//
//  Created by enrico on 04/06/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



#import "OTMLNewCondition.h"
#import <OTMLModels/OTMLParameterType.h>
#import <OTMLModels/OTMLParameterMode.h>

@class OTMLComponent;
@class OTMLParameterModel;
@class OTMLNewCondition;

@interface OTMLParameter : NSObject<NSCopying>

@property (nonatomic, strong) OTMLComponent* sourceComponent;
@property (nonatomic, strong) OTMLNewCondition * condition;
@property (nonatomic, strong) NSArray<OTMLParameter*>* param_mode_arguments;
@property (nonatomic, assign) BOOL requiresResolution;


//Questi ora sono dei semplici bridge

@property (nonatomic, strong) NSString * srcid;
@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * flagforsrc;
@property (nonatomic, strong) NSString * value;
@property (nonatomic, assign) OTMLParameterMode paramMode;
@property (nonatomic, strong) NSString * custom_mode;
@property (nonatomic, assign) OTMLParameterType paramType;


-(BOOL) hasValidConditions;

-(id) initWithModel:(OTMLParameterModel*) aModel;
-(id) initWithDictionary:(NSDictionary*) aDictionary;
-(id) initWithValue:(NSString*)aValue srcID:(NSString*)aSrcID flagForSrc:(NSString*)aFlagForSrc name:(NSString*)aName;

-(NSDictionary*) toDictionaryDescription;

@end
