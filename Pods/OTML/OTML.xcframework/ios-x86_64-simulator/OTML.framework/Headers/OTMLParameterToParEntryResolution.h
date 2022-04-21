//
//  OTMLParameterToParEntryResolution.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 25/08/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//


#import "OTMLParameter.h"
#import "OTMLParameterEntry.h"
#import "OTMLParamModeAbstractStrategy.h"
#import "OTMLParameterDataFetcher.h"

@class OTMLComponent;
@class OTMLDatasource;
@class OTMLViewController;

typedef enum {
    OTMLParameterToParEntryAsyncResolutionError_generic=0,
    OTMLParameterToParEntryAsyncResolutionError_noParamFound=1,
    OTMLParameterToParEntryAsyncResolutionError_asyncPrevalidationError=2,
    OTMLParameterToParEntryAsyncResolutionError_ValidationError=3
} OTMLParameterToParEntryAsyncResolutionError;

#define OTMLPARAMETERTOPARENTRYASYNCRESOLUTIONERRORDOMAIN @"OTMLParameterToParEntryAsyncResolutionErrorDomain"

@interface OTMLResolveParameterRefConfiguration : NSObject

- (nullable instancetype) initWithRefID:(nonnull NSString*)aParameterRefID
                               withOTVC:(nullable OTMLViewController*)aOTVC
                          parameterPath:(nullable NSString*) dsPath
                orSingleIndexResolution:(NSInteger) singleIndex
                        parentComponent:(nullable OTMLComponent*)aParentComponent;

- (nullable instancetype) initWithRefID:(nonnull NSString*)aParameterRefID
                               withOTVC:(nullable OTMLViewController*)aOTVC
                                 stubDS:(nonnull OTMLDatasource*) stubDS
                  singleIndexResolution:(NSInteger) singleIndex
                        parentComponent:(nullable OTMLComponent*)aParentComponent;

@property(nonatomic, readonly) NSString* __nonnull parameterRefID;
@property(nonatomic, readonly) OTMLViewController* __nullable otVC;
@property(nonatomic, readonly) NSString* __nullable dsPath;
@property(nonatomic, readonly) OTMLDatasource* __nullable stubDS;
@property(nonatomic, readonly) NSInteger index;
@property(nonatomic, readonly) OTMLComponent* __nullable parentComponent;

@end


@interface OTMLParameterToParEntryResolution : NSObject

+(nullable OTMLParameterEntry*) entryFromUnresolvedParamether:(nonnull OTMLParameter*) theUnresolvedParam
                                                 usingFetcher:(nullable id<OTMLParameterDataFetcher>) aParamDataFetcher
                                           appliyngValidation:(BOOL) shouldValidate;

+(nonnull NSString*)unescapeDollarPlaceholders:(nonnull NSString*)aValue;

/**
 @discussion Utility method that returns a parameter reference copy.
 @param aParamRefID the parameter reference identifier. Cannot be nil
 @param aOTVC if nil you have should still provide a parent component
 @param aSourceComponent the component to be used within resolution, please note that You will should to provide at least one between OTVC or ParentComponent.
 */
+(nullable OTMLParameter*) findParamRefWithID:(nullable NSString*) aParamRefID
                          fromSourceComponent:(nullable OTMLComponent*) aSourceComponent
                     orFromOTMLViewController:(nullable OTMLViewController*)aOTVC;

/**
 @discussion Utility method that performs an async resolve of a parameter mode
 @note asyncSupportedOTMLParamModeStrategy will be resolved asynchrously
 @param aParamRef
    the parameter reference
 @param aOTVC
    if nil you have should still provide a parent component
 @param aSourceComponent
    the component to be used within resolution, please note that You will should to provide at least one between OTVC or ParentComponent.
 @param preValidationBlock
    block executed BEFORE asking isValidConditions
 @param preResolveSubParamBlock
    block executed AFTER asking isValidConditions BEFORE sub params resolution
 @param onResolutionCompleteBlock
    block executed AFTER sub params resolution when parameter is resolved
 @param onResolutionErrorBlock
    block executed IF an error occurs
 
 
 */
+(void) asyncResolveIfSupportedByParameterRef:(nonnull OTMLParameter*) aParamRef
                         usingSourceComponent:(nullable OTMLComponent*)aSourceComponent
                     orFromOTMLViewController:(nullable OTMLViewController*) aOTVC
                       preValidationCodeBlock:(BOOL (^ __nullable)(OTMLParameter* __nonnull paramRef, OTMLParamModeStrategy* __nullable parameterModeStrategy))preValidationBlock
                  preResolveSubParamCodeBlock:(void (^ __nullable)(OTMLParameter* __nonnull paramRef, OTMLParamModeStrategy* __nullable parameterModeStrategy))preResolveSubParamBlock
                onResolutionCompleteCodeBlock:(void (^ __nonnull)(OTMLParameterEntry* __nullable resolvedParameter))onResolutionCompleteBlock
                                      onError:(NSString* _Nullable (^ __nonnull)(NSError* __nonnull error))onResolutionErrorBlock;

/**
 @discussion 
 Utility method that resolves a parameter reference using a datasource as reference. You can pass either a ds elements list (in this scenario you will receive an array of resolved parameters, each one using the datasource element) or a single index resolution (in this scenario you will receive a single resolved parameter using a stub ds).
 @param aConfiguration
    WRAPPER for relevant data
  @param resolverBlock
    the code block that resolves the parmeter value in custom object. If not provided the array will be an array of NSString. The code block will receive the resolved value of parameter ref and is expected to return the resulting Object as the custom object built. Implementing the codeblock and returning a nil object will result in a nil resolution
 @return 
    the array of object as built in resolverBlock or an array of NSString if no codeblock provided. Please note that a failure resolution will result in nil as returned value.
 */
+(nullable NSArray*)resolveAsArrayWithParameterRefConfig:(OTMLResolveParameterRefConfiguration*__nonnull) aConfiguration
                              resolvedValueToObjectBlock:(NSObject* __nullable (^ __nonnull)(NSString* __nonnull resolvedValue))resolverBlock;

/**
 @discussion  Create an array of parameters ref from string separated by ';'.
 @param aImageManipulationsString string of parameters ref for image manipulation
 @return the NSArray<OTMLParameter*>
 **/
+(nullable NSArray <OTMLParameter *> *)arrayOfImageManipulationParamRefFromString:(nullable NSString*)aImageManipulationsString
                                                              fromSourceComponent:(nullable OTMLComponent*) aSourceComponent
                                                         orFromOTMLViewController:(nullable OTMLViewController*) aOTVC;
@end
