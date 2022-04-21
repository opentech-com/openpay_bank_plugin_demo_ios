//
//  OTMLEntry.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//



@class OTMLLayout;
@class OTMLDatasource;
@class OTMLMapElementModel;
@class OTMLNewCondition;
@class OTMLParameter;
@class OTMLMapEntryModel;
@class OTMLMapModel;

@interface OTMLEntry : NSObject<NSCopying>
{
@private
    BOOL isStartupEnty;
    NSString* entryName;
    NSString* script;
    OTMLLayout* layout;
    NSDictionary* datasources;
    NSDictionary<NSString*, OTMLNewCondition*>* conditions;
    NSDictionary<NSString*, OTMLParameter*>* parameters;
}


@property (nonatomic, assign) BOOL inAnimation;
@property (nonatomic, assign) BOOL ignoreContextAnimation;
@property (nonatomic, assign) BOOL in_animation_fade_previous;
@property (nonatomic, strong) NSString* _Nonnull entryName;

-(nonnull id) initWithModel:(nonnull OTMLMapElementModel*)aModel;

-(nonnull NSString*) getScript;
-(nonnull OTMLLayout*) getLayout;
-(nonnull NSDictionary*) getDatasources;
-(nonnull NSDictionary<NSString*, OTMLNewCondition*>*) getConditions;
-(nonnull NSDictionary<NSString*, OTMLParameter*>*) getParameters;
-(BOOL) showCanGoBack;

-(void) setFrame:(CGRect) aFrame;
-(void) setIsStarttup:(BOOL)aIsStartup;
-(BOOL) getIsStartup;
-(nullable NSString*)valueForCustomEntryAttribute:(nonnull NSString*)aCustomKey;

@end
