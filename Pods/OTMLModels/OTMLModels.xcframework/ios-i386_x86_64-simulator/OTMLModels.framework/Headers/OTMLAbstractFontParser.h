//
//  OTMLAbstractFontParser.h
//  Pods
//
//  Created by Silvio D'Angelo on 20/06/2017.
//
//


@class OTMLFont;
@protocol OTMLAbstractFontParser <NSObject>

-(void)parseFont:(OTMLFont*)fontToPopulate withFamily:(NSString*)aFamily;
-(UIFont*)wrappedFontForOTMLFont:(OTMLFont*)aFont;

@end
