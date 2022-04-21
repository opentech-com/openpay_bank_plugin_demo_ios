//
//  OTMLLayout.h
//  OTML
//
//  Created by enrico on 30/05/12.
//  Copyright (c) 2012 Opentech. All rights reserved.
//


#import "OTMLComponent.h"
#import <OTMLModels/OTMLLayoutModel.h>

@interface OTMLLayout : NSObject<NSCopying>{
@private 
    OTMLComponent* rootComponent;
    CGRect frame;
}
@property (nonatomic, strong) NSArray* tags;

- (id)initWithModel:(OTMLLayoutModel*)aModel;

-(BOOL) setFrame:(CGRect) aFrame;
-(CGRect) getFrame;
-(BOOL) setFrame:(CGRect) aFrame wrappingH:(BOOL) isWrappingH;
-(BOOL) setFrame:(CGRect) aFrame wrappingW:(BOOL) isWrappingW;
-(OTMLComponent*) getRootComponent;
-(BOOL) didTrigger:(NSString*) aTrigger;
-(BOOL)hasActionsForTrogger:(NSString*)aTrigger;

@end
