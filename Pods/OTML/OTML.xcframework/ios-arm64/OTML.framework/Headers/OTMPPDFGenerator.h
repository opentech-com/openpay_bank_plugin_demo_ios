//
//  OTMPPDFGenerator.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 28/10/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import <OTMLModels/OTMPColor.h>
#import <OTMLModels/OTMLFont.h>


@class OTMLfont;

@interface OTMPPDFGenerator : NSObject{
    NSString * contentText;
}

@property(nonatomic, assign) BOOL showPageNumber;
@property(nonatomic, strong) NSString * headerText;
@property(nonatomic, strong) OTMPColor * colorHeader;
@property(nonatomic, strong) OTMLFont * fontHeader;
@property(nonatomic, strong) OTMPColor * colorText;
@property(nonatomic, strong) OTMLFont * fontContentText;
@property(nonatomic, strong) NSString * filePath;

-(id)initWithText:(NSString*) aText;
- (BOOL)generatePdf;

@end
