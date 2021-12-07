//
//  LEWebPayViewController.h
//  LinKingOASDK
//
//  Created by leon on 2021/11/26.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import "LEBaseViewController.h"

@class LEApplePayManager;
NS_ASSUME_NONNULL_BEGIN

@interface LEWebPayViewController : LEBaseViewController

@property (nonatomic, copy) void(^applePayComplete)(void);
@property (nonatomic, copy) void(^payPalComplete)(void);

@end
NS_ASSUME_NONNULL_END
