//
//  OTMLListTableAdapter.h
//  OTMLFramework
//
//  Created by epavoni on 12/12/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLComponent.h"
#import "OTMLListTableProcedure.h"

#define APPEND_EXCEPTION_NAME @"OTML_APPEND_EXCEPTION"

@protocol OTMLListTableAdapterDelegate <NSObject>

// e.g.
//-(void) elementWillChange;
//-(void) elementIsChanged;

@end

@interface OTMLTableListAdapterViewConfig : NSObject

-(id)initWithIndexPath:(NSIndexPath*) aIndexPath referemceSize:(CGSize) aReferemceSize fixedWidth:(BOOL)isFixedWidth fixedHeight:(BOOL)isFixedHeight refComponent:(OTMLComponent*)aRefComponent;

@property (nonatomic, strong) NSIndexPath* indexPath;
@property (nonatomic, assign) CGSize referemceSize;
@property (nonatomic, assign) BOOL fixedWidth;
@property (nonatomic, assign) BOOL fixedHeight;
@property (nonatomic, weak) OTMLComponent* refComponent;

@end

@interface OTMLTableListAdapterSectionBean : NSObject

@property (nonatomic, strong) OTMLComponent* parent_table;
@property (nonatomic, assign) unsigned int the_Section_index;

@property (nonatomic, strong) NSString* header;
@property (nonatomic, strong) NSString* footer;
@property (nonatomic, assign) BOOL swipeMode;
@property (nonatomic, strong) NSString* swipeModeModel;
@property (nonatomic, strong) NSString* componentGroupID;
@property (nonatomic, strong) NSString* sectionDatasourceID;
@property (strong, nonatomic, readonly) NSArray* datasourceElements;
@property (strong, nonatomic, readonly) NSArray* datasourceFilteredElements;
@property (strong, nonatomic, readonly) NSArray* filterMap;
@property (nonatomic, weak) OTMLViewController* referenceOTMLVC;

-(void)setFilter:(NSObject<OTMLListTableProcedure>*)aProcedureFilter;
-(void)setVolatileDatasourceElenents:(NSArray*)volatileSectionDSElement;
-(NSArray*)datasourceElements;
-(NSArray<NSNumber*>*)filterMap;
-(NSArray*)datasourceFilteredElements;
-(void)refresh;
-(BOOL)alreadyProvidedElements;
-(BOOL)isFiltered;

@end

/**
 OTMLListTableAdapter is the adapter from DS to a list of view created using a componentGroup.
 This class embeds the caching mechanic that by default is limitless, take also care of filters (ordering is considered a filter).
 
 */
@interface OTMLListTableAdapter : NSObject

#pragma mark - Setup

/**
 Init
 @param aReferenceComponent
 The reference component. It cannot be nil. It IS NOT retained by the adapter.
 */
- (id)initForOTMLComponent:(OTMLComponent*)aReferenceComponent;

/**
 @discussion This method performs a complete setup for the adapter. Can be called to completely refresh the table, please keep in mind that the adapter itself will be fully cleared and rebuilt if applied.
 @param aDSPath The DS describing sections (each one will have an entry for component group, section ds). Can be nil, if nil the adapter will be cleared
 @param aOTMLVC  The OTML View Controller. Can be nil, if nil the adapter will be cleared
 @return
 YES if adapter has refreshed or cleared, in the either case will not be evauated if the refresh will return an equivalent of the previous adapter state or not. Will return NO if nothing has changed (this usually implies an unready adapter setted up with invalid parameters).
 */
- (BOOL) setupAdapterFromDs:(NSString*)aDSPath inOTVC:(OTMLViewController*) aOTMLVC;

/**
 @discussion
 This method update the already setted up adapter in order to append to the current section list the sections exceding previous sections. The DS describing sections will be the same that the table is currently using (each one will have an entry for component group, section ds).
 @param aOTMLVC  The OTML View Controller. Cannot be nil, if nil the method will be a no-op;
 @throws
 APPEND_EXCEPTION exception if sections other than the appened one has been modified
 @return
 the index set of appended sections. can be empty if no sections was added
 */
- (NSIndexSet*) appendSectionsInOTVC:(OTMLViewController*) aOTMLVC;

-(void) updateModelForDeletionOfIndexPath:(NSIndexPath*) indexPath;

#pragma mark - Fast Information Getter

/**
 @discussion
 Information Getter method to retreive the number of sections
 @return
 The number of section. 0 if the adapter is not ready.
 */
-(NSUInteger)numberOfSections;

/**
 verfy consistency (no structural change) respect the latest responses
 */
-(BOOL)consistencyChechEnsuringNumberOfSections:(BOOL)verifyNumberOfSections
                    ensuringLastSectionRowCount:(BOOL) verifyAllRowCountIncludingLastSection;

/**
 @discussion
 Information Getter method to get the number of entry (row in case of a list) for a specific section.
 @param aCurrentSection
 The section to be inquired
 @return
 the number of entry. 0 if the adapter is not ready.
 */
-(NSUInteger)currentNumberOfEntryInSection:(NSUInteger) aCurrentSection;

/**
 Ingformation Getter method to retreive the total number of entry (row in case of a list) for the entire adapter. Please note that this method just iterates over sections. This ensure to have anytime a consistent entryNumber but can harm performance if invoked frequently,
 */
-(NSUInteger)currentTotalEntryNumber;

#pragma mark indexPath translation
/**
 Translation method to get the current indexPath (section/entry) giving a known original index path.
 @param aOriginalIndexPath
 The indexPath (section/entry) in datasource.
 @return aCurrentIndexPath
 The indexPath (section/entry) displayed. Can return nil if originalIndexPath is invalid or currently filtered.
 */
-(NSIndexPath*) getCurrentIndexPathFromOriginalIndexPath:(NSIndexPath*) aOriginalIndexPath;

/**
 @discussion Translation method to get the original indexPath (section/entry) giving a known current index path.
 @return aCurrentIndexPath
 The indexPath (section/entry) displayed.
 @return OriginalIndexPath
 The indexPath (section/entry) in datasource. Can return nil if originalIndexPath is invalid.
 */
-(NSIndexPath*) getOriginalIndexPathFromCurrentIndexPath:(NSIndexPath*) aCurrentIndexPath;

#pragma mark - Content Provider

/**
 @discussion
 This method provides the Root Component for an OTMLTableListAdapterViewConfig using the OTMLTableListAdapterViewConfig.
 NOTE: use this method in order to obtain entry Root Component.
 @param aConfig The section/entry (CURRENT ONES!) to inqure and parameters needed for the inquiring.
 @return OTMLComponent: The Root Component already initialized and with a corresponded view eventyally to be displayed with the correct frame size.
 */
-(OTMLComponent*) componentForCurrentConfig:(OTMLTableListAdapterViewConfig*)aConfig;

/**
 @discussion
 This method provides the view for an OTMLTableListAdapterViewConfig using the OTMLTableListAdapterViewConfig.
 @note
 use this method in order to obtain entry final size.
 @param aConfig The section/entry (CURRENT ONES!) to inqure and parameters needed for the inquiring.
 @return UIView
 The view to be displayed with the correct frame size.
 */
-(UIView*)viewForCurrentConfig:(OTMLTableListAdapterViewConfig*)aConfig;

/**
 @discussion 
  Clean all cached info (row cache and filter cache) and reload any NON-Dynamic section DS.
 @note 
  Please keep in mind that the DS of NON-Dynamic section (setted via "Volatile" method) will not be refreshed (does not exists anymore...), still all cached info will be invalidated
 */
-(void)hardRefresh;

/**
 @discussion
  Clean all cached info (for indexes of rows whose input datasource has changed from last load, reload or soft_reload) and reload any NON-Dynamic section DS immediatelly.
 @returns index of changes rows. May be used directly to perform a punctual table reload
 */
-(NSArray*) softRefresh;

-(NSInteger) lastResponseForNumberOfSections;

#pragma mark - OTML Compliancy
/**
 @discussion
  TODO
 */
-(OTMLComponent*) rootComponentAtCurrentIndexPath:(NSIndexPath*) aCurrentIndexPath;

/**
 @discussion
  This method provides a way to find a component inside the table given the section/entry (ORIGINAL ONES!) to inquire.
 */
-(OTMLComponent*)findComponentByID:(NSString*) aOtmlID
               atOriginalIndexPath:(NSIndexPath*) aOriginalIndexPath;

/**
 @discussion
  This method provides a way to find a component inside the table given the section/entry (CURRENT ONES!) to inquire.
 */
-(OTMLComponent*)findComponentByID:(NSString*) aOtmlID
                atCurrentIndexPath:(NSIndexPath*) aCurrentIndexPath;

/**
 @discussion 
  This method allows the hierarchicParameterResolve within an entry
 */
-(OTMLParameterEntry*) hierarchicParameterResolveAsKeyValueParameter:(OTMLParameter*) aParameter
                                                        forComponent:(OTMLComponent*)aComponent
                                                            validate:(BOOL)validateNow;

#pragma mark - Mutable entry Points

/**
 @discussion
  Allows to dynamically change the DS ID for a given section.
 @param aSectionDataSourceID
  a new ds. Cannot be nil
 @param aSection   the section index
 @param aOtmlViewController the reference OTMLVC. Cannot be nil
 @note 
  Refresh section if true is returned!
 @return 
  if the request does changed the section or not. Invalid parameters does not change the ds
 */
-(BOOL) setSectionDatasourceID:(NSString*) aSectionDataSourceID forSection:(NSUInteger) aSection withReferenceOTMLVC:(OTMLViewController*)aOtmlViewController;

/**
 @discussion 
  Allows to dynamically change the DS with a ds eventually not reperible via dsID.
 @param aDataSourceElements 
  a new ds elements list. Cannot be nil
 @param aSection  the section index
 @note Refresh section if true is returned!
 @return if the request does changed the section or not. Invalid parameters does not change the ds
 */
-(BOOL) setVolatileDatasourceElements:(NSArray*) aDataSourceElements inSection:(NSUInteger) aSection;

/**
 @discussion 
  Allows to dynamically insert a DS for a given section. (This will change the section indexes shifting following section forward.)
 @param aNewSection The new section to be inserted. Cannot be nil.
 @param aSectionIndex The section in whom the new section will be inserted
 @note 
  Refresh section if true is returned!
 @return 
  if the request does insert the section or not.
 */
-(BOOL) insertSection:(OTMLTableListAdapterSectionBean*) aNewSection atIndex:(NSUInteger) aSectionIndex;

/**
 @discussion  
 Allows to set the the cache size. The cache is used to avoid continuous rebuild of view when viewForConfig is invoked.
 @param cacheSize the cache size. 
 @note Will drain the cache.
 */
-(void) setCacheSize:(int) cacheSize;


-(OTMLTableListAdapterSectionBean*) getSectionAtIndexPath:(NSUInteger)_index;

/**
 @discussion 
  apply a filter procedure to ALL the table sections.
 @note 
  The filter should be applied section-by-section.
 @param aGlobalProcedure  The procedure to be applied to all the sections
 @deprecated
 */

-(void) applyGlobalFilter:(NSObject<OTMLListTableProcedure>*)aGlobalProcedure __attribute__((deprecated));

/**
 @discussion 
  returns the ds element used by the row at original index path
 @param aCurrentIndexPath The current index path
 @return 
  the ds element used by the row at original index path or nil if index is not in range
 
 */
-(OTMLDatasource*)getElementForOriginalIndexPath:(NSIndexPath*)aCurrentIndexPath;

/**
 @discussion 
  updates hard (read from source ds) only the row at the specified index path.
 @param aOriginalIndexPath the index path to update
 @return 
  the current index path to update. nil if error occurred.
 */
-(NSIndexPath*)updateRowAtIndexPath:(NSIndexPath*)aOriginalIndexPath inOTVC:(OTMLViewController*) aOTMLVC;

#pragma mark - Utilities

/**
 Creates an array of SectionBean
 @param aDSPath The datasourcePath. Cannot be nil.
 @param aOTMLVC The reference OTMLVC. Cannot be nil.
 @return An Array of OTMLTableListAdapterSectionBean or nil if an error occurred.
 
 */
+(NSMutableArray*) arrayOfSectionBeansFromDs:(NSString*)aDSPath
                                      inOTVC:(OTMLViewController*) aOTMLVC forParentTable:(OTMLComponent*) parent_table;


@property(nonatomic, weak) NSObject<OTMLListTableAdapterDelegate>* delegate;

@end
