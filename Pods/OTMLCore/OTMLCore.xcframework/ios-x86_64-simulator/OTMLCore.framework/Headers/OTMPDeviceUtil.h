//
//  MPDeviceUtil.h
//  OTML
//
//  Created by Silvio D'Angelo on 04/10/12.
//  Copyright (c) 2012 Opentech ENG. All rights reserved.
//

#import "OTMLDumpableModuleProtocol.h"
#import <CoreGraphics/CoreGraphics.h>

@interface OTMPDeviceUtil : NSObject <OTMLDumpableModuleProtocol>



+(CGFloat) getScreenScale;

//Logical values, internamente funziona tutto con valori logici (esempio uiview alloc init)
//I valori sono sensibili alla rotazione dell'interfaccia quindi cambiano nel tempo
+(CGSize)screenSize;
+(CGSize)screenSizeWithoutStatusbar;
+(CGFloat)heightOfTheStatusBar;

+(NSString*) ramAmount;

+(BOOL) isSystemAtLeastVersion:(unsigned int) mainVersion subversion:(unsigned int) subersion revision:(unsigned int) revision;
+(BOOL) isAtLeastiOS10;
+(BOOL) isAtLeastiOS11;

+(int) getMainOSVersion;

+(NSString*) getModel;

+(BOOL) hasInternetConnection;

+(BOOL)areWeBeingUnitTested;

+(NSString*)getCarrierInfo;
+(BOOL) isJailbroken;
+(BOOL) isIpadDevice;

+(BOOL)canBlur;
+(NSString*)getConnectionType;


@end
