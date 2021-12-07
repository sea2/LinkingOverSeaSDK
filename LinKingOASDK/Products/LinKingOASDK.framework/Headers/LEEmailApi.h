//
//  LEEmailApi.h
//  LinKingOASDK_Example
//
//  Created by leon on 2021/9/8.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import "LEBaseApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface LEEmailApi : LEBaseApi
/// 获取验证码
+ (void)fetchCheckCodeRegisterEmailCode:(NSString *)email complete:(void(^)(NSError * __nullable error))complete;
+ (void)registerAndLoginWithEmail:(NSString *)email checkCode:(NSString * __nullable)code password:(NSString *)password complete:(void(^)(NSError * __nullable error))complete;
+ (void)fetchCheckCodeForgetPasswordEmailCode:(NSString *)email complete:(void(^)(NSError * __nullable error))complete;
+ (void)reserPaswwordEmail:(NSString *)email checkCode:(NSString *)code password:(NSString *)password complete:(void(^)(NSError * __nullable error))complete;

+ (void)fetchBindingEmailCode:(NSString *)email complete:(void(^)(NSError * __nullable error))complete;
@end

NS_ASSUME_NONNULL_END
