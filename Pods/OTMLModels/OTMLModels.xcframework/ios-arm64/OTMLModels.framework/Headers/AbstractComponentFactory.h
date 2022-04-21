//
//  AbstractComponentFactory.h
//  Pods
//
//  Created by Silvio D'Angelo on 25/05/2017.
//
//

#import <Foundation/Foundation.h>
#import "OTMLComponentModel.h"
#import <TBXML/TBXML.h>
 
@class OTMLComponentModel;

@protocol AbstractComponentFactory <NSObject>

-(OTMLComponentModel*)initializeModel:(Class)toInitModel
                              withXML:(TBXMLElement*) aEntryElement;

@end
