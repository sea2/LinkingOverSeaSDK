//
//  LEOABindEmailControllerView.h
//  LinKingOASDK
//
//  Created by leon on 2021/9/9.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import "LEBaseViewController.h"
@class LEUser;
NS_ASSUME_NONNULL_BEGIN

@interface LEOABindEmailControllerView : LEBaseViewController
@property (nonatomic, copy) void(^closeViewController)(void);
@property (nonatomic,copy)void(^bindingCompleteCallBack)(LEUser *_Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
