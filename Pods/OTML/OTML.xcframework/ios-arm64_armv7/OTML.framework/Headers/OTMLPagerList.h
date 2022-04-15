//
//  OTMLPagerList.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 17/07/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "OTMLContainer.h"

typedef enum {
    OTMLPagerListViewDatasourceProcessResultNotProcessed,
    OTMLPagerListViewDatasourceProcessResultProcessed,
    OTMLPagerListViewDatasourceProcessResultProcessedNeedNoElemView,
    OTMLPagerListViewDatasourceProcessResultError
}OTMLPagerListViewDatasourceProcessResult;

@interface OTMLPagerList : OTMLContainer <UIScrollViewDelegate>

@end
