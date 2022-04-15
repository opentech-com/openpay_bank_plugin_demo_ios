//
//  OTMLContextDescriptor.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 12/09/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//


@class OTMPColor;
@class OTMLImage;
@class OTMLMainViewController;
@class OTMLContextDescriptor;
@class OTMLContextContainerViewController;


typedef NS_ENUM(NSUInteger, OTMLContextDescriptorPresentationMode){
    OTMLContextDescriptorPresentationMode_OVERLAY = 0,
    OTMLContextDescriptorPresentationMode_MOVE = 1,
};

typedef NS_ENUM(NSUInteger, OTMLContextDescriptorAnimation){
    OTMLContextDescriptorAnimation_NONE = 0,
    OTMLContextDescriptorAnimation_TRANSLATE = 1,
    OTMLContextDescriptorAnimation_FADE = 2
};

typedef NS_ENUM(NSUInteger, OTMLContextGroupDescriptorStack){
    OTMLContextGroupDescriptorStack_MAIN = 0,
    OTMLContextGroupDescriptorStack_HEAD = 1,
    OTMLContextGroupDescriptorStack_TAIL = 2
};

//il behaviour è definito dai contesti
typedef NS_ENUM(NSUInteger, OTMLContextOrientationBehaviour){
    OTMLContextOrientationBehaviour_IGNORE = 0, //orientamento ignorato, sempre portrait
    OTMLContextOrientationBehaviour_SUPPORT = 1, //se un contesto ha specificato un determinato orientamento lo devo onorare
    OTMLContextOrientationBehaviour_FORCED = 2 //forza l'orientamento ad un determinato valore (diverso da portrait che è default)
    //OTMLContextOrientationBehaviour_PAGE_DEPENDANT = 3
};

typedef NS_ENUM(NSUInteger, OTMLContextGroupDescriptorEvent){
    OTMLContextGroupDescriptorEvent_TAP = 0
};

typedef NS_ENUM(NSUInteger, OTMLContextGroupVisibilityChange){
    OTMLContextGroupVisibilityChange_OPEN = 0,
    OTMLContextGroupVisibilityChange_CLOSE = 1
};

typedef NS_ENUM(NSUInteger, OTMLContextGroupVisibilityChangeMode){
    OTMLContextGroupVisibilityChangeMode_SWIPE = 0,
    OTMLContextGroupVisibilityChangeMode_COMMAND = 1
};

typedef void(^ContextEventActions)(OTMLContextGroupDescriptorEvent event, NSString* contextID, OTMLMainViewController* otmlNavcon);
typedef void(^GroupEventActions)(OTMLContextGroupDescriptorEvent event, NSString* groupID, OTMLContextContainerViewController* contextController);
typedef BOOL(^GroupEventEdgeAnimationActive)(OTMLContextContainerViewController* contextController, NSArray<NSString*>* orderedGroupsIDs);
typedef void(^GroupEventVisibilityChanged)(OTMLContextContainerViewController* contextController, NSString* groupID, OTMLContextGroupVisibilityChange visibility, OTMLContextGroupVisibilityChangeMode changeMode);











typedef NSString*(^OTMLContextFrameTransforCallback)(NSObject* me, NSString* param);


@interface OTMLContextDescriptorItem : NSObject

@property (nonatomic, retain) NSString* contextID;

//Che tipo di mainvc deve istanziare in questo contesto
@property (nonatomic, retain) NSString* otmlNavigationControllerClassIdentifier;

@property (nonatomic, assign) BOOL allowBackGesture;
@property (nonatomic, assign) OTMLContextDescriptorAnimation inAnimation;
@property (nonatomic, assign) OTMLContextDescriptorAnimation outAnimation;
@property (nonatomic, retain) OTMPColor* bgcolor;
@property (nonatomic, retain) OTMLImage* bgImage;
@property (nonatomic, assign) BOOL blurBackground;
@property (nonatomic, assign) BOOL skipLifecycleEvents;
@property (nonatomic, retain) OTMPColor* statusbarColor;

//Used to remap a context id to different, generic context id that may be present in different context groups (eg. bp, each in a different tab so that a bpx may be associated in tab tx (with tx and bpx in the same context group) and from the map side you can refer only to the generic bp context
@property (nonatomic, retain) NSString* remapTocontextID;

//Elimina
@property (nonatomic, assign) BOOL skipBlurInNextPush;

@property (nonatomic, assign) BOOL autoOpenOnFirstPush;
@property (nonatomic, assign) CGRect openFrame;
@property (nonatomic, assign) CGRect closeFrame;
@property (nonatomic, copy) ContextEventActions tapGestureCallback;


//FORCED: indica che orientamento deve avere, verrà forzato da codice
//SUPPORT: indica di onorare l'orientamento che trova
@property (nonatomic, assign) OTMLContextOrientationBehaviour orientationBehaviour;
//L'orientamento del contesto in caso di FORCED
@property (nonatomic, assign) UIInterfaceOrientationMask preferredOrientation;

@property (nonatomic, readonly) CGPoint inTranslation;
@property (nonatomic, readonly) CGPoint outTranslation;
@property (nonatomic, readonly) CGPoint inAnimationTranslationVector;
@property (nonatomic, readonly) CGPoint ouAnimationTranslationVector;
@property (nonatomic, assign) UIInterfaceOrientationMask contextCurrentOrientation;

@property (nonatomic, copy) OTMLContextFrameTransforCallback openFrameTransform;
@property (nonatomic, copy) OTMLContextFrameTransforCallback closeFrameTransform;

@end

@interface OTMLContextGroupDescriptorItem : NSObject

//Serve a:
@property (nonatomic, retain) NSString* contextGroupID;

//Serve a:
@property (nonatomic, assign) OTMLContextGroupDescriptorStack stack;

//Move: il gruppo viene messo a schermo muovendosi dalla coordinata A a quella B
//Overlay: il gruppo viene messo a schermo sopra a tutto il resto
@property (nonatomic, assign) OTMLContextDescriptorPresentationMode presentationMode;

//Solo in caso di OTMLContextDescriptorPresentationMode quale gruppo deve spostare
@property (nonatomic, retain) NSArray<NSString*>* presentationModeImpactedGroupIDs;

//Nel fare OTMLContextDescriptorPresentationMode che animazione uso?
@property (nonatomic, assign) OTMLContextDescriptorAnimation inAnimation;
@property (nonatomic, assign) OTMLContextDescriptorAnimation outAnimation;


@property (nonatomic, retain) OTMPColor* bgcolor;
@property (nonatomic, retain) OTMLImage* bgImage;
@property (nonatomic, retain) OTMPColor* statusbarColor;

//Eliminare
@property (nonatomic, assign) BOOL blurBackground;

@property (nonatomic, assign) BOOL autoOpenOnFirstPush;

//It should be set ig you have a group (eg. tab_group) that has contexts of different sizes and it is forced to have the bigger frame of the group (eg. bpx), but should not get the tap for the smaller frames (eg. tx). It has been added as part of the tab bar development
@property (nonatomic, assign) BOOL tapSkipsEmptyContent;

//If it is a service context group, it does not require to be managed in therms of lifecycle events (did_show)
@property (nonatomic, assign) BOOL skipLifecycleEvents;

@property (nonatomic, assign) BOOL edgeAnimationActive;
@property (nonatomic, assign) UIRectEdge activeEdgeMap;



@property (nonatomic, assign) CGRect openFrame;
@property (nonatomic, assign) CGRect closeFrame;

//Servono per modificare open frame e closed frame a runtime in base a delle condizioni (es: orientamento dello schermo)
@property (nonatomic, copy) OTMLContextFrameTransforCallback closeFrameTransform;
@property (nonatomic, copy) OTMLContextFrameTransforCallback openFrameTransform;


//Chiamato quando il tap è arrivato al groupvc
@property (nonatomic, copy) GroupEventActions tapGestureCallback;

//Chiamato quando la visibilità cambia (open-closed)
@property (nonatomic, copy) GroupEventVisibilityChanged groupEventVisibilityChangedBlock;

//Ritorna YES o NO indica se il gruppo....
@property (nonatomic, copy) GroupEventEdgeAnimationActive groupEdgeActiveRules;



//INTERFACCIA NON IN INGRESSO
@property (nonatomic, readonly) CGPoint inTranslation;
@property (nonatomic, readonly) CGPoint outTranslation;
@property (nonatomic, readonly) CGPoint inAnimationTranslationVector;
@property (nonatomic, readonly) CGPoint ouAnimationTranslationVector;
//Contiene l'orientamento attuale. Non deve essere settato, questo insegue il comportamento dettato dai contesti.
@property (nonatomic, assign) UIInterfaceOrientationMask contextGroupCurrentOrientation;


@property (nonatomic, readonly) NSMutableArray<OTMLContextDescriptorItem*>* contextDescriptorItems;

-(void) addContextDescriptorItem:(OTMLContextDescriptorItem*) aContextDescriptorItem;

@end

@interface OTMLContextDescriptor : NSObject

@property (nonatomic, readonly) NSMutableArray<OTMLContextGroupDescriptorItem*>* contextGroupDescriptorItems;
@property (nonatomic, strong) NSString* defaultContext;
@property (nonatomic) BOOL groupViewsSwipeEnabled; // defaults to NO.


-(void) addContextGroupDescriptorItem:(OTMLContextGroupDescriptorItem*) aContextGroupDescriptorItem;

-(OTMLContextGroupDescriptorItem*) contextGroupDescriptorItemsForGroupID:(NSString*) aGroupID;
-(OTMLContextGroupDescriptorItem*) contextGroupDescriptorItemsForContextID:(NSString*) aContextID;
-(OTMLContextDescriptorItem*) contextDescriptorItemForContextID:(NSString*) aContextID;

@end
