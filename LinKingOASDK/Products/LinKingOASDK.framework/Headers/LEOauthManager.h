//
//  LEOauthManager.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/7.
//  Copyright © 2020 "". All rights reserved.
//
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LEOauthManagerDelegate <NSObject>

@required
- (void)logoutSDKCallBack;
- (void)changeAccountCallBack;
@end

@class LEUser;
@interface LEOauthManager : NSObject
+ (instancetype)shared;
@property (nonatomic, assign) id<LEOauthManagerDelegate>delegate;
@property (nonatomic, strong) UIViewController *viewController;
@property (nonatomic,copy)void(^changeAccountSuccessCallBack)(void);
@property (nonatomic,copy)void(^bindingAccountCompleteCallBack)(LEUser *user,NSError *error);

/// 登录接口
/// @param rootViewController 根控制器
/// @param complete complete description
- (void)login:(UIViewController*)rootViewController onFinished:(void(^)(LEUser *user,NSError *error))complete;
/// 登出
- (void)logout;
/// API方式登录
/// @param viewController 根控制器
/// @param complete 完成登录回调
- (void)loginApiWithRootViewController:(UIViewController *_Nullable)viewController complete:(void(^)(LEUser *user,NSError *error))complete;
/// 显示仪表盘
/// @param viewController 根控制器
- (void)showFloatViewDashboard:(UIViewController *)viewController;
// 隐藏仪表盘
- (void)hiddenFloatViewDashboard;
/// 显示矩阵
/// @param frame frame description
-(void)showMatrixVieWithFrame:(CGRect)frame;
// 隐藏矩阵
- (void)hiddenMatrixView;

@end

NS_ASSUME_NONNULL_END
