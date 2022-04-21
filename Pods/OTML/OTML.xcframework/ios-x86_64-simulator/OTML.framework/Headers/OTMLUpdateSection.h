//
//  OTMLUpdateSection.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 23/04/15.
//  Copyright (c) 2012-2020 opentech.com. All rights reserved.
//


#import <OTMLModels/TBXML+Unescape.h>

@interface OTMLUpdateSection : NSObject

@property (nonatomic, strong) NSString* sectionVersion;
@property (nonatomic, strong) NSData* sign; //necessario al momento della scrittura
@property (nonatomic, assign) BOOL isValid;

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSData* rawData;

-(id) initWithXML:(TBXMLElement*)sectionXMLElement;
-(id) initWithRawB64XML:(NSData*)rawb64Section;


/** protected **/
-(void)parseSectionWithXmlElement_:(TBXMLElement*)sectionXMLElement;

@end











