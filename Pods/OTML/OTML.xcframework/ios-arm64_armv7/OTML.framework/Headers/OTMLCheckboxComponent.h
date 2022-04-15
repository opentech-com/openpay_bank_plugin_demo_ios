//
//  OTMLCheckbox.h
//  ING
//
//  Created by Valerio Ferrantelli on 18/10/12.
//
//


#import "OTMLComponent.h"
#import "OTMLInteractiveResponder.h"

@interface OTMLCheckboxComponent : OTMLComponent <OTMLInteractiveResponder, OTMLStatefulComponent>{
    
    @protected
    OTMLImage* checkedImage;
    OTMLImage* uncheckedImage;
    
    OTMLImage* checkedImagep;
    OTMLImage* uncheckedImagep;
    
    OTMLImage* checkedImaged;
    OTMLImage* uncheckedImaged;

    BOOL checked;

    
}

@end
