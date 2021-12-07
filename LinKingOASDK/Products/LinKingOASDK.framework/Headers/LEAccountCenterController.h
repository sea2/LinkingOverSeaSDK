//
//  LEAccountCenterController.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/10.
//  Copyright © 2020 "". All rights reserved.
//

#import "LEBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LEAccountCenterController : LEBaseViewController
@property (nonatomic, copy) void(^selectBannerAtIndex)(NSInteger index);
@end

NS_ASSUME_NONNULL_END
