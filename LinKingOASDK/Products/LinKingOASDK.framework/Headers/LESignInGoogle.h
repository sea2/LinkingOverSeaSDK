//
//  LESignInGoogle.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/15.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>

@class GIDGoogleUser;
NS_ASSUME_NONNULL_BEGIN

@interface LESignInGoogle : NSObject
+ (instancetype)shared;
- (void)initializationFireBaseSDK;
- (void)loginGoogleRootViewController:(UIViewController *)rootViewController complete:(void(^)(GIDGoogleUser * _Nullable user,NSError *_Nullable error))complete;
/// 推出谷歌登录
- (void)logoutGoogle;
//实现您的应用委托中的 application:openURL:options: 方法。此方法应该调用 GIDSignIn 实例的 handleURL 方法，该方法将对您的应用在身份验证过程结束时收到的网址进行适当处理。
- (BOOL)handleURL:(NSURL *)url;
@end

NS_ASSUME_NONNULL_END
