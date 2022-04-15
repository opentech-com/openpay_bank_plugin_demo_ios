//
//  OTMLAbstractUpdateDescriptorModel.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 27/08/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//

#import "OTMLUpdateVersionsSection.h"
#import "OTMLUpdateManifestSection.h"
#import "OTMLUpdateDatasourcesSection.h"
#import "OTMLUpdateActionsSection.h"
#import "OTMLUpdateStringsSection.h"
#import "OTMLUpdateBeansSection.h"
#import "OTMLUpdTraceModel.h"

#define OTML_UPDATE_VERSION_SECTION_NAME @"versions_container"
#define OTML_UPDATE_MANIFEST_SECTION_NAME @"manifest_container"
#define OTML_UPDATE_DATASOURCE_SECTION_NAME @"datasources_container"
#define OTML_UPDATE_ACTIONS_SECTION_NAME @"actions_container"
#define OTML_UPDATE_STRINGS_SECTION_NAME @"strings_container"
#define OTML_UPDATE_BEANS_SECTION_NAME @"bean_container"

@interface OTMLAbstractUpdateDescriptorModel : NSObject

@property (nonatomic, strong) OTMLUpdateVersionsSection* versionsSection;
@property (nonatomic, strong) OTMLUpdateManifestSection* manifestSection;
@property (nonatomic, strong) OTMLUpdateDatasourcesSection* datasourcesSection;
@property (nonatomic, strong) OTMLUpdateActionsSection* actionsSection;
@property (nonatomic, strong) OTMLUpdateStringsSection* stringsSection;
@property (nonatomic, strong) OTMLUpdateBeansSection* beansSection;
@property (nonatomic, strong, readonly) NSString* descriptorName;
@property (nonatomic, strong) OTMLUpdTraceModel * updaterTrace;


-(instancetype)initWithDescriptorModelCopy:(OTMLAbstractUpdateDescriptorModel*)aDescriptor;

-(BOOL)isEqualToDescriptor:(OTMLAbstractUpdateDescriptorModel*)aDescriptor;
-(BOOL)isValid;

-(void)freeMemory;
-(NSArray<OTMLUpdateSection*>*)newArrayOfSections;



@end
