//
//  LEOALoginControllerView.h
//  LinKingOASDK_Example
//
//  Created by leon on 2021/9/8.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import "LEBaseViewController.h"
@class LEUser;
NS_ASSUME_NONNULL_BEGIN

@interface LEOALoginControllerView : LEBaseViewController
@property (nonatomic, assign) BOOL isHiddenCloseView;
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^changeAccountSuccessCallBack)(void);
@property (nonatomic,copy)void(^loginCompleteCallBack)(LEUser *_Nullable user,NSError * _Nullable error);
@property (nonatomic, copy) void(^gotoRegisterEmailViewController)(void);
@property (nonatomic, copy) void(^gotoLoginEmailViewController)(void);
@end

NS_ASSUME_NONNULL_END
