//
//  LEBindingAccountController.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/15.
//  Copyright © 2020 "". All rights reserved.
//

#import "LEBaseViewController.h"
@class LEUser;
NS_ASSUME_NONNULL_BEGIN

@interface LEBindingAccountController : LEBaseViewController
@property (nonatomic,copy)void(^bindingCompleteCallBack)(LEUser *_Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
