//
//  LEOAEmailLoginControllerView.h
//  LinKingOASDK
//
//  Created by leon on 2021/9/8.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import "LEBaseViewController.h"
@class LEUser;
NS_ASSUME_NONNULL_BEGIN

@interface LEOAEmailLoginControllerView : LEBaseViewController
@property (nonatomic, copy) void(^closeViewController)(void);
@property (nonatomic, copy) void(^gotoBackViewController)(void);
@property (nonatomic, copy) void(^loginEmailCompleteCallBack)(LEUser * _Nullable user, NSError * _Nullable error);
@property (nonatomic, copy) void(^gotoRegisterViewController)(void);
@property (nonatomic, copy) void(^gotoForgetPasswordViewController)(void);
@end

NS_ASSUME_NONNULL_END
