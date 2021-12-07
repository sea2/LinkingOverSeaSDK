//
//  LEOABindControllerView.h
//  LinKingOASDK_Example
//
//  Created by leon on 2021/9/8.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import "LEBaseViewController.h"
@class LEUser;
NS_ASSUME_NONNULL_BEGIN

@interface LEOABindControllerView : LEBaseViewController
@property (nonatomic,copy)void(^bindingCompleteCallBack)(LEUser *_Nullable user,NSError * _Nullable error);
@property (nonatomic, copy) void(^gotoBindingEmailViewController)(void);
@end

NS_ASSUME_NONNULL_END
