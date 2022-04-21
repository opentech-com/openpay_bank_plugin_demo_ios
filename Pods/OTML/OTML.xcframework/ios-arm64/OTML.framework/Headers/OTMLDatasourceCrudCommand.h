//
//  OTMLDatasourceCrudCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 26/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLActionCommandSet.h"
#import "OTMLNewDSSaveAndRemoveCommand.h"

@interface StoreDSCommand : OTMLActionCommand
@end
@interface CleanStoreDSCommand : OTMLActionCommand
@end
@interface SaveAsDSUpdateStrictCommand : OTMLActionCommand
@end
@interface OTMLDatasourceCopyCommand : OTMLActionCommand
@end
@interface DSResetCommand : OTMLActionCommand
@end
@interface OTMLReplaceDSFieldInDSArrayList : OTMLActionCommand
@end
@interface OTMLDatasourceCrudCommand : OTMLActionCommandSet
@end
@interface OTMLDSFilterCommand : OTMLActionCommand
@end


