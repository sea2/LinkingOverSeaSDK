//
//  LELoginController.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/10.
//  Copyright © 2020 "". All rights reserved.
//

#import "LEBaseViewController.h"

@class LEUser;
NS_ASSUME_NONNULL_BEGIN

@interface LELoginController : LEBaseViewController
@property (nonatomic, assign) BOOL isHiddenCloseView;
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^changeAccountSuccessCallBack)(void);
@property (nonatomic,copy)void(^loginCompleteCallBack)(LEUser *_Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
