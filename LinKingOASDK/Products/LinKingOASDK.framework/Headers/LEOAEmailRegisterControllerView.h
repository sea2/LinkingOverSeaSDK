//
//  LEOAEmailRegisterControllerView.h
//  LinKingOASDK_Example
//
//  Created by leon on 2021/9/8.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import "LEBaseViewController.h"
@class LEUser;
NS_ASSUME_NONNULL_BEGIN

@interface LEOAEmailRegisterControllerView : LEBaseViewController
@property (nonatomic, copy) void(^closeViewController)(void);
@property (nonatomic, copy) void(^gotoBackViewController)(void);
@property (nonatomic, copy) void(^registerCompleteCallBack)(LEUser * _Nonnull user, NSError * _Nonnull error);
@property (nonatomic, copy) void(^gotoLoginEmailViewController)(void);
@end

NS_ASSUME_NONNULL_END
