//
//  OTMLMutableDatasourceElement.h
//  OTMLFramework
//
//  Created by epavoni on 31/05/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMLDatasourceModel.h>
#import <OTMLModels/OTMLDatasourceElementModel.h>

static NSString* const k_load_DS_prefix = @"otml_load_ds_";

@interface OTMLDatasource : NSObject <NSCopying>

+ (OTMLDatasource*) newFilledDatasourceFromString:(NSString*)someXMLString;
+ (OTMLDatasource*) newEmptyOTMLDataSourceWithKey:(NSString*)aKey;
+ (OTMLDatasource*) newWithKey:(NSString*) aKey andValue:(NSString*) aValue;

- (id)init;
- (id)initWithDatasourceElement:(OTMLDatasource*)aDSElement;
- (id)initWithXMLModel_Datasource_NOT_Element:(OTMLDatasourceModel *)aModel;



+ (NSArray*) differingIndexesBetweenRenderedDSBasedModelArray:(NSArray*) last_model_array
                           andActualRetievedDSBasedModelArray:(NSArray*) actual_ds_model_array;

+(NSString*)getJSONFromDictionary:(NSDictionary*)_dict;

- (id) initWithKey:(NSString*)aKey;
- (id) initWithKey:(NSString*)aKey andValue:(NSString*)aValue;
- (id) initWithModel:(OTMLDatasourceElementModel*)aModel;

- (NSArray<OTMLDatasource*>*) getListElement;
- (OTMLDatasource*) getElementAtIndex:(int) _pIndex;
- (NSString*) getKey;
- (NSString*) getValue;
- (NSString*) getJSON;
-(NSString*)getCompactJsonSerializationSkippingRootKey:(BOOL) skipRootKey;
- (void)setKey:(NSString*)aKey;
- (OTMLDatasource*) getElementWithKey:(NSString*) aKey;

-(NSString*)getXML;
-(NSDictionary*) intermediateSerializationObject;

- (void)setValue:(NSString*)aValue;
- (void)setElements:(NSArray*)aElements;
- (void)setElements:(NSArray *)aElements copy:(BOOL)copyElements;

- (void) insertElement:(OTMLDatasource*)anElement
               atIndex:(unsigned int) _pIndex;

- (void) setElement:(OTMLDatasource*)anElement AtIndex:(unsigned int) _pIndex;
- (void) addElement:(OTMLDatasource*)anElement;
- (void) removeElementAtIndex:(unsigned int)_pIndex;
- (void) removeFirstElementWithKey:(NSString*)aKey;
- (void) removeAllElementWithKey:(NSString*)aKey;

- (void)setElement:(OTMLDatasource*)aDatasource;
-(NSString*) simplifiedDescription;

@end
