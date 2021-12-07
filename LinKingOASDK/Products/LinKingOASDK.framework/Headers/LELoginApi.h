//
//  LELoginApi.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/15.
//  Copyright © 2020 "". All rights reserved.
//


#import "LEBaseApi.h"
NS_ASSUME_NONNULL_BEGIN

@class LEUser;
@interface LELoginApi : LEBaseApi
/// 快速登录
+ (void)quickLoginComplete:(void(^)(NSError *error,LEUser *user))complete;
/// 苹果登录
/// @param complete <#complete description#>
+ (void)appleLoginWithToken:(NSString *)token complete:(void(^)(NSError * _Nullable error,LEUser *_Nullable user))complete;
+ (void)facebookLoginWithToken:(NSString *)token complete:(void(^)(NSError * _Nullable error,LEUser *_Nullable user))complete;
/// 谷歌登录
/// @param complete <#complete description#>
+ (void)googleLoginWithToken:(NSString *)token complete:(void(^)(NSError *_Nullable error,LEUser *_Nullable user))complete;
/// 自动登录
/// @param complete complete description
+ (void)autoLoginComplete:(void(^)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
